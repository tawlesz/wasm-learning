#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int twoTimes(int a){
    return (2 * a);
}