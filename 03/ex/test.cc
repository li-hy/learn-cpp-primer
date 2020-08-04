#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string s;

	s = "abc";
	cout << sizeof(s) << " " << s.size() << endl;
	const char *p = s.c_str();
	cout << p << endl;
	s = "def";
	cout << p << endl;

	return 0;
}
