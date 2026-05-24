#include <emscripten.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divNum(int a, int b);

EMSCRIPTEN_KEEPALIVE
int calculate(int n){
    return add(n,(mul(n,(divNum(n,sub(n, 1))))));
}