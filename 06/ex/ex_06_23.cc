#include "ex_06.h"

void print(const int &i)
{
	cout << i << endl;
}

void print(const int *begin, const int *end)
{
	while (begin != end)
		cout << *begin++ << " ";
	cout << endl;
}

int main()
{
	int i = 0, j[2] = { 0, 1 };
	print(i);
	print(std::begin(j), std::end(j));

	return 0;
}
