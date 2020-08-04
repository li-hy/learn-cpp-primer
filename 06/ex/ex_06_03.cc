#include "ex_06.h"

unsigned fact(unsigned n)
{
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}

int main()
{
	unsigned n;
	cin >> n;
	cout << fact(n) << endl;

	return 0;
}
