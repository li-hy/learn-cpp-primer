#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s1, s2;

	cin >> s1 >> s2;
	if (s1 == s2)
		cout << "The two string is equel." << endl;
	else
		cout << "The larger string is "
		     << ((s1 > s2) ? s1 : s2) << endl;
	if (s1.size() == s2.size())
		cout << "The two string have the same length." << endl;
	else
		cout << "The longer string is "
		     << ((s1.size() > s2.size()) ? s1 : s2) << endl;

	return 0;
}
