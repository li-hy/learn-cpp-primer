#include "ex_03.h"

int main()
{
	string s("some string");
	if (s.begin() != s.end())  // check if the string is empty
		for (auto c = s.begin(); c != s.end(); c++)
			*c = toupper(*c);
	cout << s << endl;
	return 0;
}
