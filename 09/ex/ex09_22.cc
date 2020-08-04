#include "ex09.h"

void double_and_insert(vector<int> &v, int val)
{
	auto mid = [&]{ return v.begin() + v.size() / 2; };
	for (auto curr = v.begin(); curr != mid(); ++curr)
		if (*curr == val)
			++(curr = v.insert(curr, 2 * val));
}

int main()
{
	vector<int> v{ 1, 9, 1, 9, 9, 9, 1, 1 };
	double_and_insert(v, 1);

	for (auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}
