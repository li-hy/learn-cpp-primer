#include "ex_06.h"

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return (b == 0) ? 0 : a / b;
}

int main()
{
	vector<decltype(add) *> vec = { add, subtract, multiply, divide };
	for (auto f : vec)
		cout << f(6, 3) << endl;
	return 0;
}
