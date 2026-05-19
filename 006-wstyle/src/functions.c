#include <emscripten.h>
#include <math.h>

EMSCRIPTEN_KEEPALIVE
int Returntriple(int n){
    int p = sqrt(n);
    return p;
}