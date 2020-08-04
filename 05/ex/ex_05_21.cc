#include "ex_05.h"

int main()
{
	string str, pre_str;
	while (cin >> str) {
		if (isupper(str[0]) && str == pre_str)
			break;
		pre_str = str;
	}
	cout << (cin.eof() ? str : "no word was repeated") << endl;
	return 0;
}
