#include "ex_06.h"

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 1, b = 2;
	swap(&a, &b);
	cout << a << " " << b << endl;
}
