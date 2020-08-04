#include "ex_03.h"
#include <iterator>

using std::begin;
using std::end;

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int *b = begin(a), *e = end(a);
	for (; b != e; ++b)
		*b = 0;
	for (auto i : a)
		cout << i << " ";
	cout << endl;

	return 0;
}
