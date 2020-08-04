#include "ex_03.h"

int main()
{
	int a[10];
	for (int i = 0; i < 10; ++i)
		a[i] = i;
	int b[10];
	for (int i = 0; i < 10; ++i)
		b[i] = a[i];
	for (auto i : b)
		cout << i << " ";
	cout << endl;

	vector<int> va(10);
	for (int i = 0; i < 10; ++i)
		va[i] = b[i];
	vector<int> vb(va);
	for (auto i : vb)
		cout << i << " ";
	cout << endl;

	return 0;
}
