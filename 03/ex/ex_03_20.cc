#include "ex_03.h"

int main()
{
	vector<int> vec;

	for (int i; cin >> i; vec.push_back(i))
		;
	if (vec.empty() || vec.size() == 1) {
		cout << "Too few integers!\n" << endl;
		return -1;
	}
	for (decltype(vec.size()) i = 0; i+1 < vec.size(); ++i)
		cout << vec[i] + vec[i+1] << " ";
	cout << endl;

	// if the size is odd, the middle element will add to itself
	decltype(vec.size()) size = (vec.size() + 1) / 2;
	for (unsigned i = 0; i < size; ++i)
		cout << vec[i] + vec[vec.size() - 1 - i] << " ";
	cout << endl;
	return 0;
}
