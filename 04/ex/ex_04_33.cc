#include "ex_04.h"

int main()
{
	int x = 0, y = 2, z = 0;
	z = (true ? ++x, ++y : --x, --y);
	//z = (false ? ++x, ++y : --x, --y);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;

	return 0;
}
