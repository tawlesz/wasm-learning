#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int fibonacci(int n){
    
    int seq[n];

    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    else{
        seq[0] = 0;
        seq[1] = 1;
        for(int i = 2; i <= n; i++){

            seq[i] = seq[i-1] + seq[i-2];

        }
        return seq[n-1];
    }

    }