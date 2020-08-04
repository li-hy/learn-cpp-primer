#include "ex09.h"

string add_pre_and_suffix(string &s, const string &pre, const string &su)
{
	s.insert(0, pre);
	s.insert(s.size(), su);
	return s;
}

int main()
{
	string name("hello");
	cout << add_pre_and_suffix(name, "Mr.", ", Jr.");
	return 0;
}
