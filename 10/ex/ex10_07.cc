#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

#define B

using namespace std;

#ifdef A
int main()
{
	vector<int> vec;
	list<int> lst;
	int i;
	while (cin >> i)
		lst.push_back(i);
	copy(lst.cbegin(), lst.cend(), back_inserter(vec));
	for (const auto &i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}
#endif

#ifdef B
int main()
{
	vector<int> vec;
	vec.resize(10);
	fill_n(vec.begin(), 10, 0);
	for (const auto &i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}
#endif
