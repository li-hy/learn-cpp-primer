#include "ex08.h"

bool read_line(const string &filename, vector<string> &vec)
{
	std::ifstream ifs(filename, std::ifstream::in);
	if (ifs) {
		string line;
		while (std::getline(ifs, line))
			vec.push_back(line);
		return true;
	} else {
		cerr << string("Can't not open ") + filename << endl;
		return false;
	}
}

void print_word(const vector<string> &vec)
{
	for (const auto &line : vec) {
		std::istringstream iss(line);
		string word;
		while (iss >> word)
			cout << word << std::ends;
	}
}

int main()
{
	string filename("./test.txt");
	vector<string> vec;
	read_line(filename, vec);
	print_word(vec);

	return 0;
}
