#include "ex07.h"

class NoDefault {
public:
	NoDefault(int i): x(i) { }
private:
	int x;
};

class C {
public:
	C(int i): x(i) { }
private:
	NoDefault x;
};
