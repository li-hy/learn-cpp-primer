#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("Hello, world!\n");
	decltype(s.size()) cnt = 0;

	for (auto c : s)
		if (ispunct(c))
			++cnt;
	cout << cnt << " punctuation characters in "
	     << s << endl;

	return 0;
}
