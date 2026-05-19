#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float somarDois(float a, float b){
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
float somarDois(float a, float b){
    return a - b;
}

EMSCRIPTEN_KEEPALIVE
float somarDois(float a, float b){
    return a * b;
}

EMSCRIPTEN_KEEPALIVE
float somarDois(float a, float b){
    return a / b;
}