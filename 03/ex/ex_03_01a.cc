#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int sum = 0;
	for (int val = 1; val <= 10; ++val)
		sum += val;
	cout << "The sum of 1 to 10 inclusive is " << sum << endl;
	return 0;
}
