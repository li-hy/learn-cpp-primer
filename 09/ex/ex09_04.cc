#include "ex09.h"

bool search_val(vector<int>::const_iterator begin, vector<int>::const_iterator end, const int val)
{
	for (;begin != end; ++begin) {
		if (*begin == val)
			return true;
	}
	return false;
}
