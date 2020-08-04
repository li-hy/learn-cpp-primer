#include "ex09.h"

void print(vector<int> v)
{
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

void print(list<int> l)
{
	for (auto i : l)
		cout << i << " ";
	cout << endl;
}

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> v;
	list<int> l;
	v.insert(v.begin(), begin(ia), end(ia));
	l.insert(l.begin(), begin(ia), end(ia));
	for (auto i = v.begin(); i != v.end(); ) {
		if (!(*i % 2))
			i = v.erase(i);
		else
			++i;
	}
	print(v);
	for (auto i = l.begin(); i != l.end(); ) {
		if (*i % 2)
			i = l.erase(i);
		else
			++i;
	}
	print(l);

	return 0;
}
