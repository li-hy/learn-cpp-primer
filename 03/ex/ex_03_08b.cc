#include "ex_03.h"

int main()
{
	string s("hello, world");

	cout << s << endl;
	decltype(s.size()) n;
	for (n = 0; n < s.size(); ++n)
		s[n] = 'X';
	cout << s << endl;

	return 0;
}
