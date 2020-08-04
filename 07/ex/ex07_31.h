#ifndef EX07_31_H
#define EX07_31_H

#include "ex07.h"

class Y;
class X {
	Y *y = nullptr;
};

class Y {
	X x;
};

#endif
