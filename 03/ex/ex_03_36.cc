#include "ex_03.h"
#include <iterator>

using std::begin;
using std::end;

bool compare(int *const pb1, int *const pe1, int *const pb2, int *const pe2)
{
	if ((pe1 - pb1) != (pe2 - pb2))
		return false;
	else {
		for (auto i = pb1, j = pb2; i != pe1; ++i, ++j)
			if (*i != *j)
				return false;
		return true;
	}
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 1, 2, 3, 4, 5 };

	if (compare(begin(a), end(a), begin(b), end(b)))
		cout << "Equal" << endl;
	else
		cout << "Different" << endl;

	vector<int> va{ 0, 1, 2 };
	vector<int> vb(va);
	if (va == vb)
		cout << "Equal" << endl;
	else
		cout << "Different" << endl;

	return 0;
}
