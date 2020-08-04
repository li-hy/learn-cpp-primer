#include "ex09.h"

void insert(forward_list<string> fl, string to_find, string to_add)
{
	auto prev = fl.before_begin();
	for (auto curr = fl.begin(); curr != fl.end(); prev = curr++) {
		if (*curr == to_find) {
			curr = fl.insert_after(curr, to_add);
			return;
		}
	}
	fl.insert_after(prev, to_add);
}
