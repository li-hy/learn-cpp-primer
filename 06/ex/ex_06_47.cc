#include "ex_06.h"

void print(vector<int> &vec)
{
#ifndef NDEBUG
	cout << "vector size: " << vec.size() << endl;
#endif
	if (!vec.empty()) {
		auto tmp = vec.back();
		vec.pop_back();
		print(vec);
		cout << tmp << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> vec{ 1, 2, 3, 4, 5 };
	print(vec);

	return 0;
}
