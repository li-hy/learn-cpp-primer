#include "ex09.h"

int main()
{
	forward_list<int> fl{ 1, 2, 3, 4, 5, 6 };
	auto curr = fl.begin();
	auto prev = fl.before_begin();
	while (curr != fl.end()) {
		if (*curr % 2)
			curr = fl.erase_after(prev);
		else {
			prev = curr;
			++curr;
		}
	}

	for (auto i : fl)
		cout << i << " ";
	cout << endl;

	return 0;
}
