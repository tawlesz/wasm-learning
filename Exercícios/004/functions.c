#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int quadNum(int a){
    return a*4;
}