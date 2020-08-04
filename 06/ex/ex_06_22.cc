#include "ex_06.h"

void swap(int* &a, int* &b)
{
	int *temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i = 1, j = 2;
	int *a = &i, *b = &j;
	swap(a, b);
	cout << *a << " " << *b << endl;

	return 0;
}
