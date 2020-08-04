#include "ex_04.h"

int main()
{
	int x[10];
	int *p = x;

	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
	cout << sizeof(*p) << endl;
	cout << sizeof(p) << endl;

	return 0;
}
