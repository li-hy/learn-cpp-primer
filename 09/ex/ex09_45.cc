#include "ex09.h"

string add_prefix_and_suffix(string &s, const string &prefix, const string &suffix)
{
	s.insert(s.begin(), prefix.cbegin(), prefix.cend());
	return s.append(suffix);
}

int main()
{
	string s("hello");
	cout << s << endl;
	s = add_prefix_and_suffix(s, "Mr.", " III");
	cout << s << endl;

	return 0;
}
