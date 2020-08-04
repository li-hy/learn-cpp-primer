#include "ex09.h"

void print(vector<int> v)
{
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int>::iterator item1, item2;
	item1 = item2 = v.begin() + 1;
	++item2;
	print(v);
	v.erase(item1, item2);
	print(v);

	return 0;
}
