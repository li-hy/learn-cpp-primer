#include "ex08.h"

bool read(std::ifstream &fs, const string &filename, vector<string> &vec)
{
	fs.open(filename);
	if (fs.is_open()) {
		string line;
		while (std::getline(fs, line))
			vec.push_back(line);
		fs.close();
		return true;
	} else {
		cout << "Can't not open " + filename << endl;
		fs.close();
		return false;
	}
}

void print(std::ostream &os, vector<string> &vec)
{
	for (auto line : vec)
		os << line << endl;
}

int main()
{
	string filename("./test.txt");
	std::ifstream fs;
	vector<string> vec;
	read(fs, filename, vec);
	print(cout, vec);

	return 0;
}
