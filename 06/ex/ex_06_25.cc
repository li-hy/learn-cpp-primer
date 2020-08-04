#include "ex_06.h"

int main(int argc, char **argv)
{
	if (argc != 3) {
		cerr << "Please enter TWO string." << endl;
		return -1;
	} else {
		string s = string(argv[1]) + string(argv[2]);
		cout << s << endl;
		return 0;
	}
}
