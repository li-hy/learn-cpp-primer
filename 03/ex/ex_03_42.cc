#include "ex_03.h"

int main()
{
	vector<int> vec(3, 3);
	int a[3];
	for (int i = 0; i < vec.size(); ++i)
		a[i] = vec[i];
	for (auto i : a)
		cout << i << ' ';
	cout << endl;

	return 0;
}
