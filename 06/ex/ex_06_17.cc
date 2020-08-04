#include "ex_06.h"

bool has_upper(const string &s)
{
	for (const auto &c : s) {
		if (isupper(c))
			return true;
	}
	return false;
}

void to_lower(string &s)
{
	for (auto &c : s)
		c = tolower(c);
}
