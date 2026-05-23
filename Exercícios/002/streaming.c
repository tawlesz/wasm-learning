#include <emscripten.h>
#define PI 3.14

EMSCRIPTEN_KEEPALIVE
float catCircleArea(float r){return (PI * r * r);}