#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s("Hello, world!!!");
	for (auto &c : s)
		c = toupper(c);
	cout << s << endl;

	return 0;
}
