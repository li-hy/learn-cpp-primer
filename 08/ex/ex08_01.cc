#include "ex08.h"

std::istream &print(std::istream &is)
{
	string s;
	while (is >> s)
		cout << s << endl;
	is.clear();
	return is;
}

int main()
{
	std::istream &is = print(cin);
	cout << is.good() << endl;
	return 0;
}
