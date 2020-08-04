#include "ex_03.h"

int main()
{
	vector<int> arr;
	int n;

	while (cin >> n)
		arr.push_back(n);
	if (arr.size() < 2) {
		cerr << "Please input at least 2 numbers!" << endl;
		return -1;
	}
	auto b = arr.cbegin();
	for (; b != arr.cend() - 1; ++b)
		cout << *b + *(b + 1) << " ";
	cout << endl;
	for (auto e = arr.cend() - 1, b = arr.cbegin(); b <= e; ++b, --e)
		cout << *b + *e << " ";
	cout << endl;
	return 0;
}
