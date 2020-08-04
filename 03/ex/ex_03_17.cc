#include "ex_03.h"

int main()
{
	vector<string> vecStr;
	string s;

	while (cin >> s)
		vecStr.push_back(s);
	for (auto &i : vecStr)
		for (auto &c : i)
			c = toupper(c);
	for (auto i : vecStr)
		cout << i << '\n';
	cout << endl;
	return 0;
}
