#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	const string hexdigits = "0123456789ABCDEF";

	cout << "Enter a series of numbers between 0 to 15 "
	     << "separated by spaces. Hit ENTER when finish: "
	     << endl;

	string result;
	string::size_type n;

	while (cin >> n)
		if (n < hexdigits.size())
			result += hexdigits[n];
	cout << "Your hex number is: " << result << endl;

	return 0;
}
