#include "ex_05.h"
#include <stdexcept>

int main()
{
	int i, j;
	cout << "Enter two integers: ";
	while (cin >> i >> j) {
		try {
			if (j == 0)
				throw std::runtime_error("divisor is 0");
			cout << i / j << endl;
		} catch (std::runtime_error err) {
			cout << err.what() << "\nTry again? y/n: ";
			char c;
			cin >> c;
			if (c == 'n')
				break;
		}
		cout << "Enter two integers: ";
	}

	return 0;
}
