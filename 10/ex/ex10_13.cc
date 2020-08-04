#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

inline bool is_not_shorter_than_5(const string &s) { return s.size() >= 5; }

void print(vector<string>::const_iterator b,
		vector<string>::const_iterator e)
{
	for (; b != e; ++b)
		cout << *b << " ";
	cout << endl;
}

int main()
{
	vector<string> v{ "hello", "world", "aaaaaa", "aaa", "aa", "a" };
	print(v.cbegin(), v.cend());
        auto de = partition(v.begin(), v.end(), is_not_shorter_than_5);
        print(v.cbegin(), de);
}
