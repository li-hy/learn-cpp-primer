#include "ex_03.h"

int main()
{
	vector<int> vec{1, 2, 3, 4, 5};

	for (auto i = vec.begin(); i != vec.end(); ++i)
		*i *= 2;
	for (auto i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}
