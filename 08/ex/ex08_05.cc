#include "ex08.h"

bool read(std::ifstream &fs, const string &filename, vector<string> &vec)
{
	fs.open(filename);
	if (fs.is_open()) {
		string word;
		while (fs >> word)
			vec.push_back(word);
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
	for (auto word : vec)
		os << word << std::ends;
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
