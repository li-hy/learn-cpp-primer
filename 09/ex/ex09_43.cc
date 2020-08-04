#include "ex09.h"

void replace(string &s, const string &oldVal, const string &newVal)
{
	for (auto cur = s.begin(); cur <= s.end() - oldVal.size(); ) {
		if (oldVal == string(cur, cur + oldVal.size())) {
			cur = s.erase(cur, cur + oldVal.size());
			cur = s.insert(cur, newVal.begin(), newVal.end());
			cur += newVal.size();
		} else
			++cur;
	}
}

int main()
{
	string s("tho thru and tho");
	cout << s << endl;
	replace(s, "tho", "though");
	cout << s << endl;

	return 0;
}
