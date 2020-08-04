#include "ex_04.h"

int main()
{
	vector<int> vec = { 0, 1, 2, 3, 4, 5 };
	for (auto &i : vec)
		cout << ((i & 0x1) ? i * 2 : i) << " ";
	cout << endl;
	return 0;
}
