#include "ex_03.h"

using std::getline;

int main()
{
	vector<string> text;
	string line;
	while (getline(cin, line))
		text.push_back(line);
	for (auto &word : text) {
		for (auto &ch : word)
			ch = toupper(ch);
		cout << word << endl;
	}
	return 0;
}
