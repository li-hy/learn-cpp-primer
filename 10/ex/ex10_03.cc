#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> vi{ 1, 2, 3, 4, 5, 6 };
	vector<double> vd{ 1.2, 2, 3, 4, 5, 6 };
	cout << accumulate(vi.cbegin(), vi.cend(), 0) << endl;
	/* note here */
	cout << accumulate(vd.cbegin(), vd.cend(), 0) << endl;
	return 0;
}
