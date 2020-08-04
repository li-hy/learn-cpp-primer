#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> a(10, 1);
	for (const auto i : a)
		cout << i << " ";
	cout << endl;
	fill_n(begin(a), sizeof(a), 0);
	for (const auto i : a)
		cout << i << " ";
	cout << endl;

	return 0;
}
