#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int Returntriple(int n){
    return (n * 3);
}