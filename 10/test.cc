#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	string a("hello, world");
	string b(a);
	auto iter = begin(b);
	replace_copy(cbegin(a), cend(a), iter, 'o', 'i');
	cout << a << "\n" << b << endl;
	cout << *iter << endl;

	return 0;
}
