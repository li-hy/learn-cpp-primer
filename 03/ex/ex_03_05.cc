#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s, tmp;

	//while (cin >> tmp)
		//s += tmp;
	//cout << s << endl;
	while (cin >> tmp)
		s += ((s.empty()) ? "" : " ") + tmp;
	cout << s << endl;
	return 0;
}
