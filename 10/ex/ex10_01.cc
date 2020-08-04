#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	list<string> l{ "hello", "hello", "world" };
	cout << count(l.cbegin(), l.cend(), "hello") << endl;
	return 0;
}
