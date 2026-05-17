#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int primeNumber(int n){

    int ret[2];
    int prime = 1, numb = n;

    if(n <= 1){
        prime = 0;
    }

    for(int i = 2; i <= n/2 ; i++){
        if (n % i == 0){
            prime = 0;
            break;
        }
    }



    return prime;
}