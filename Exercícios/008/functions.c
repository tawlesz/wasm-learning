#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int functions(int n){
    if (n % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}