#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int category(float f)
{
    if (f < 18.5) {
        return 1;
    } else if (f <= 24.99) {
        return 2;
    } else if (f <= 29.99) {
        return 3;
    } else {
        return 4;
    }
}