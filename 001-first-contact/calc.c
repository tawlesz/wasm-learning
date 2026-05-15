#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int somar(int a, int b){return a + b;}

EMSCRIPTEN_KEEPALIVE
int subtrair(int a, int b){return a - b;}

EMSCRIPTEN_KEEPALIVE
int multiplicar(int a, int b){return a * b;}

EMSCRIPTEN_KEEPALIVE
int dividir(int a, int b){return a / b;}