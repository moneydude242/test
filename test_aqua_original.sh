#!/bin/bash

set -e

ROOT=/workspaces/test
G3M=/workspaces/test/G3MTool-Deltamod/G3MToolCLI

INPUT="$ROOT/data.win"
PATCH="$ROOT/aquaoverkris.xdelta"
OUTPUT="$ROOT/aqua_g3mtool_result.data.win"

echo "=================================="
echo "Original G3MTool Aqua Test"
echo "=================================="

echo
echo "Input:"
echo "$INPUT"

echo
echo "Patch:"
echo "$PATCH"

echo
echo "Output:"
echo "$OUTPUT"

if [ -f "$OUTPUT" ]; then
    rm "$OUTPUT"
fi

echo
echo "Applying xdelta using G3MToolCLI..."

dotnet run \
    --project "$G3M" \
    -- xpatch apply \
    "$INPUT" \
    "$PATCH" \
    "$OUTPUT"

echo
echo "Finished."

sha256sum "$OUTPUT"
