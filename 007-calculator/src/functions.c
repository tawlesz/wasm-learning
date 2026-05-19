#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float somarDois(float a, float b){
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
float subtrairDois(float a, float b){
    return a - b;
}

EMSCRIPTEN_KEEPALIVE
float multiplicarDois(float a, float b){
    return a * b;
}

EMSCRIPTEN_KEEPALIVE
float dividirDois(float a, float b){
    return a / b;
}