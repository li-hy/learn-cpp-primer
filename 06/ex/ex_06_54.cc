#include "ex_06.h"

int f(int, int);

typedef int (*fp1)(int, int);
typedef decltype(f) *fp2;
using fp3 = int (*)(int, int);
using fp4 = decltype(f) *;

vector<fp1> vec1;
vector<fp2> vec2;
vector<fp3> vec3;
vector<fp4> vec4;
