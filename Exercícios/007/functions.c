#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float haveImc(float m, float h){
    return m/(h*h);
}