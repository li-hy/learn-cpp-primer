#include "ex09.h"

void delete_and_copy(list<int> &l)
{
	for (auto b = l.begin(); b != l.end(); ) {
		if (*b % 2)
			b = l.erase(b);
		else {
			b = l.insert(b, *b);
			++b;
			++b;
		}
	}
}

void delete_and_copy(forward_list<int> &fl)
{
	auto prev = fl.before_begin();
	for (auto cur = fl.begin(); cur != fl.end(); ) {
		if (*cur % 2)
			cur = fl.erase_after(prev);
		else {
			cur = fl.insert_after(cur, *cur);
			prev = cur;
			++cur;
		}
	}
}

int main()
{
	forward_list<int> fl{ 1, 2, 3, 4, 5, 6 };
	delete_and_copy(fl);
	for (auto i : fl)
		cout << i << " ";
	cout << endl;

	return 0;
}
