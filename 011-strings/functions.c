#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int VerPalindromo(char* str){

    int tamstr = 0;
    for (int i = 0; str[i] != '\0'; i++){
        tamstr += 1;
    }
    
    for (int i = 0, j = (tamstr-1); j > i ; i++, j--){
        if(str[i] != str[j]){
            return 0; //não é palíndromo
        }
    }
    return 1; //é palíndromo
}