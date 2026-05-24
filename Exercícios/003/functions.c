#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int menorOuMaior(int i){
    int m = 18;
    if(m <= i){
        return 0;
    }else{
        return 1;
    }
}