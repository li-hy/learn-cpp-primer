#include "ex_05.h"

// check if either @lhs or @rhs is the prefix of the other
bool is_prefix(const vector<int> &lhs, const vector<int> &rhs)
{
	if (lhs.size() > rhs.size())
		return is_prefix(rhs, lhs);
	for (unsigned i = 0; i < lhs.size(); ++i) {
		if (lhs[i] != rhs[i])
			return false;
	}
	return true;
}

int main()
{
	vector<int> vec1 = { 1, 2, 3 }, vec2 = { 1, 2, 3, 4, 5 };
	cout << (is_prefix(vec1, vec2) ? "yes" : "no") << endl;

	return 0;
}
