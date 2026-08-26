import { dotnet } from './_framework/dotnet.js';

const out = document.getElementById('out');

function show(message) {
    out.textContent += message + '\n';
}

out.textContent = '';

show('G3MWebBridge starting...');
show('Loading .NET runtime...');

try {
    const {
        setModuleImports,
        getAssemblyExports,
        getConfig
    } = await dotnet
        .withDiagnosticTracing(true)
        .withApplicationArgumentsFromQuery()
        .create();

    show('dotnet.create() succeeded.');

    setModuleImports('main.js', {
        window: {
            location: {
                href: () => globalThis.window.location.href
            }
        }
    });

    show('Module imports configured.');

    const config = getConfig();

    show('Assembly: ' + config.mainAssemblyName);

    const exports =
        await getAssemblyExports(config.mainAssemblyName);

    show('Assembly exports loaded.');

    const info = exports.Program.GetLibraryInfo();

    show('Library:');
    show(info);

    show('');
    show('Loading data.win...');

    const DATA_URL = './data.win';
    const DATA_CACHE = 'g3mwebbridge-data-v1';

    const cache = await caches.open(DATA_CACHE);

    let response = await cache.match(DATA_URL);

    if (response) {
        show('data.win found in browser cache.');
    } else {
        show('data.win not cached; downloading...');

        response = await fetch(DATA_URL, {
            cache: 'no-store'
        });

        if (!response.ok) {
            throw new Error(
                `Failed to download data.win: HTTP ${response.status}`
            );
        }

        await cache.put(DATA_URL, response.clone());

        show('data.win downloaded and cached.');
    }

    const buffer = await response.arrayBuffer();
    const bytes = new Uint8Array(buffer);

    show(`Downloaded data.win: ${bytes.length} bytes`);

    show('');
    show('Sending data.win to UndertaleModLib...');

    const result =
        exports.Program.TestReadDataWin(bytes);

    show('');
    show(result);

    show('');
    show('SUCCESS — test completed.');
}
catch (error) {
    show('');
    show('FAILED:');
    show(String(error));
    show('');
    show(error?.stack || '(no stack trace)');
}