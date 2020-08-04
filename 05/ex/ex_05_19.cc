#include "ex_05.h"

int main()
{
	string s1, s2, rsp;
	do {
		cout << "Please type two strings: ";
		cin >> s1 >> s2;
		cout << (s1 <= s2 ? s1 : s2) << " is shorter\n\n"
			<< "More? Enter yes or no:";
		cin >> rsp;
	} while (!rsp.empty() && tolower(rsp[0]) == 'y');

	return 0;
}
