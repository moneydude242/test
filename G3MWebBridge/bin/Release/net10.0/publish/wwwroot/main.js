import { dotnet } from './_framework/dotnet.js';

const out = document.getElementById('out');

function show(message) {
    out.textContent += message + '\n';
}

out.textContent = '';

show('G3MWebBridge starting...');
show('Loading .NET runtime...');
show('Build marker: 2026-08-26-A');

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
    show('Testing info reflection...');

    const warningTest = exports.Program.TestGeneralInfoReflection();

    show('Info Reflection test returned:');
    show(warningTest);
    show('');
    show('Testing options reflection...');

    const warningTest2 = exports.Program.TestOptionsReflection();

    show('Options Reflection test returned:');
    show(warningTest2);
    show('');
    show('Testing tags reflection path...');

    const warningTest3 = exports.Program.TestTagsRegistrationPath();

    show('Tags Reflection path test returned:');
    show(warningTest3);
    show('');
    show('Testing tags and code path...');

    const warningTest4 = exports.Program.TestTagsAndCodeMethods();

    show('Tags and Code path test returned:');
    show(warningTest4);

    show('');
    show('Loading data.win...');

    const DATA_URL = './data.win';
    const DATA_CACHE = 'g3mwebbridge-data-v2';

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

    show(`Loaded data.win: ${bytes.length} bytes`);

    const patchInput =
        document.getElementById('patchFile');

    patchInput.addEventListener(
        'change',
        async () => {
            const patchFile =
                patchInput.files?.[0];

            if (!patchFile) {
                return;
            }

            try {
                show('');
                show(`Selected patch: ${patchFile.name}`);
                show(`Patch size: ${patchFile.size} bytes`);

                const patchBuffer =
                    await patchFile.arrayBuffer();

                const patchBytes =
                    new Uint8Array(patchBuffer);

                show('');
                show('Applying semantic patch...');
                show('Parsing data.win...');

                const resultBytes =
                    await exports.Program.ApplyG3MPatch(
                        bytes,
                        patchBytes
                    );

                show('');
                show('PATCH SUCCEEDED.');
                show(
                    `Output size: ${resultBytes.length} bytes`
                );

                const blob =
                    new Blob(
                        [resultBytes],
                        {
                            type:
                                'application/octet-stream'
                        }
                    );

                const url =
                    URL.createObjectURL(blob);

                const link =
                    document.createElement('a');

                link.href = url;
                link.download = 'data.patched.win';
                link.textContent =
                    'Download patched data.win';

                out.appendChild(
                    document.createElement('br')
                );

                out.appendChild(link);
            }
            catch (error) {
                show('');
                show('PATCH FAILED:');
                show(String(error));

                if (error?.stack) {
                    show('');
                    show(error.stack);
                }
            }
        }
    );
}
catch (error) {
    show('');
    show('FAILED:');
    show(String(error));
    show('');
    show(error?.stack || '(no stack trace)');
}