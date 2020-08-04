#include "ex_03.h"

int main()
{
	string s("hello, world");

	cout << s << endl;
	for (auto &c : s)
		c = 'X';
	cout << s << endl;

	return 0;
}
