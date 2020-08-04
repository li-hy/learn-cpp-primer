#include "ex09.h"

int main()
{
	list<int> int_list{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> odd, even;
	for (const auto &item : int_list) {
		if (item % 2)
			odd.push_back(item);
		else
			even.push_back(item);
	}
	for (const auto &item : odd)
		cout << item << " ";
	cout << endl;
	for (const auto &item : even)
		cout << item << " ";
	cout << endl;

	return 0;
}
