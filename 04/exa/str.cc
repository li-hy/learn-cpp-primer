#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::getline;

int main()
{
	vector<string> vec = { "hello", "",  "hi", "world.", "hi" };
	for (const auto &s : vec) {
		cout << s;
		if (s.empty() || s[s.size() - 1] == '.')
			cout << endl;
		else
			cout << " ";
	}
}
