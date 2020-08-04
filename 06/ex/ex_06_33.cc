#include "ex_06.h"

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	if (beg != end) {
		cout << *beg << " ";
		print(beg+1, end);
		return;
	}
	cout << endl;
}

int main()
{
	vector<int> vec{1, 2, 3};
	print(vec.begin(), vec.end());

	return 0;
}
