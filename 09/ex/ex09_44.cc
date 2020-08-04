#include "ex09.h"

void replace(string &s, const string &oldVal, const string &newVal)
{
	for (decltype(s.size()) pos = 0; pos <= s.size() - oldVal.size(); ) {
		if (s[pos] == oldVal[0] && s.substr(pos, oldVal.size()) == oldVal) {
			s.replace(pos, oldVal.size(), newVal);
			pos += newVal.size();
		} else
			++pos;
	}
}

int main()
{
	string s("tho all tho");
	cout << s << endl;
	replace(s, "tho", "though");
	cout << s << endl;

	return 0;
}
