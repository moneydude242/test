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
    show('Downloading data.win...');

    const response = await fetch('./data.win');

    if (!response.ok) {
        throw new Error(
            `Failed to download data.win: HTTP ${response.status}`
        );
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