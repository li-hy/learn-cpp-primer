#include "ex09.h"
#include <fstream>

string &update_with(string &longest, const string &curr)
{
	if (std::string::npos == curr.find_first_not_of("aceimnorsuvwxz"))
		longest = longest.size() > curr.size() ? longest : curr;
	return longest;
}

int main()
{
	std::ifstream ifs("../../../Cpp-Primer-master/data/letter.txt", std::ios::in);
	if (!ifs.is_open()) {
		cout << "Can't open file" << endl;
		return -1;
	}
	string longest;
	for (string curr; ifs >> curr; update_with(longest, curr))
		;
	ifs.close();
	cout << longest << endl;

	return 0;
}
