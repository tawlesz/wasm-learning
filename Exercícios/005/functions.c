#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float cToF(float n){
    return(n * 1.8 + 32);
}