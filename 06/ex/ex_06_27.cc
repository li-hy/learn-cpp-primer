#include "ex_06.h"

int add(const initializer_list<int> &li)
{
	int sum = 0;
	for (const auto &i : li)
		sum += i;
	return sum;
}

int main()
{
	int sum = add({ 1, 2, 3 });
	cout << sum << endl;

	return 0;
}
