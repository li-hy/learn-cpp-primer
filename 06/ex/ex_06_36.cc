#include "ex_06.h"
string (&f(const string (&s)[10]))[10];

typedef string str_array[10];
str_array &fu(const str_array s);

auto func(const string (&s)[10]) -> string(&)[10];

string s[10];
decltype(s) &f(const string (&s)[]);
