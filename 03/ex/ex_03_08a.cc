#include "ex_03.h"

int main()
{
	string s("hello, world");

	cout << s << endl;
	decltype(s.size()) n = 0;
	while (n < s.size())
		s[n++] = 'X';
	cout << s << endl;

	return 0;
}
