#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int addNumber(int a, int b){
    return a + b;
};

EMSCRIPTEN_KEEPALIVE
int main(){
    printf("Hello, World!, %d\n", addNumber(3, 5) );

    return 0;
}