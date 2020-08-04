#include "ex09.h"

bool is_equal(vector<int> lhs, vector<int> rhs)
{
	return lhs == rhs;
}

bool is_equal(list<int> lhs, vector<int> rhs)
{
	return vector<int>(lhs.cbegin(), lhs.cend()) == rhs;
}
