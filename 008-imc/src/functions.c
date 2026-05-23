#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float imc(float m, float h){
    return m/(h*h);
}