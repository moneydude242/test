using G3MToolCLI.Services;
using System.Security.Cryptography;
using UndertaleModLib;

static void InspectData(string path)
{
    Console.WriteLine();
    Console.WriteLine($"=== Inspecting {Path.GetFileName(path)} ===");

    using var fs = File.OpenRead(path);
    var data = UndertaleIO.Read(fs);

    Console.WriteLine($"Strings:            {data.Strings.Count}");
    Console.WriteLine($"Sprites:            {data.Sprites.Count}");
    Console.WriteLine($"TexturePageItems:   {data.TexturePageItems.Count}");
    Console.WriteLine($"EmbeddedTextures:   {data.EmbeddedTextures.Count}");
    Console.WriteLine($"Code:               {data.Code.Count}");
    Console.WriteLine($"Variables:          {data.Variables.Count}");
    Console.WriteLine($"Functions:          {data.Functions.Count}");

    int spriteIndex = 0;
    foreach (var sprite in data.Sprites)
    {
        if (sprite?.Name?.Content == "spr_keycap")
        {
            Console.WriteLine($"spr_keycap sprite index: {spriteIndex}");
            break;
        }

        spriteIndex++;
    }

    int stringIndex = 0;
    foreach (var str in data.Strings)
    {
        if (str?.Content == "spr_keycap")
        {
            Console.WriteLine($"spr_keycap string index: {stringIndex}");
            break;
        }

        stringIndex++;
    }
}

Console.WriteLine("G3MWebCore Round Trip Test");

var original = "/workspaces/test/data.win";
var xdelta = "/workspaces/test/everyitem.xdelta";
var patch = "/workspaces/test/everyitem.g3mpatch";
var output = "/workspaces/test/patched.data.win";

Console.WriteLine("Creating patch...");

var create = await PatchService.CreatePatchAsync(
    original,
    xdelta,
    patch
);

if (!create.Success)
{
    Console.WriteLine($"Create failed: {create.Error}");
    return;
}

Console.WriteLine("Applying patch...");

var apply = await PatchService.ApplyPatchAsync(
    original,
    patch,
    output
);

if (!apply.Success)
{
    Console.WriteLine($"Apply failed: {apply.Error}");
    return;
}