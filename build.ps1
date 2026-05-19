New-Item -ItemType Directory -Force -Name "src"
cd src
New-Item -ItemType file -Force -Name "functions.c"
cd ..
New-Item -ItemType Directory -Force -Name "build"
emcc src/functions.c -o build/main.js -sNO_EXIT_RUNTIME=1 -sEXPORTED_RUNTIME_METHODS='["cwrap", "ccall"]'