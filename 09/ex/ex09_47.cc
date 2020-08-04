#include "ex09.h"

int main()
{
	string s("ab2c3d7R4E6");
	const string number("0123456789");
	const string alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string::size_type pos = 0;
	while ((pos = s.find_first_of(number, pos)) != string::npos) {
		cout << pos << " ";
		++pos;
	}
	cout << endl;
	pos = 0;
	while ((pos = s.find_first_of(alpha, pos)) != string::npos) {
		cout << pos << " ";
		++pos;
	}
	cout << endl;

	return 0;
}
