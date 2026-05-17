#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int addNumber(int a, int b){
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int subNumber(int a, int b){
    return a - b;
}

EMSCRIPTEN_KEEPALIVE
int multNumber(int a, int b){
    return a * b;
}

EMSCRIPTEN_KEEPALIVE
int divNumber(int a, int b){
    return a / b;
}