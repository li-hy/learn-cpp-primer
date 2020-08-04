#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void print(const vector<string> &vec)
{
	for (const auto &s : vec)
		cout << s << " ";
	cout << endl;
}

inline bool is_shorter(const string &lhs, const string &rhs)
{
	return lhs.size() < rhs.size();
}

void elim_dups(vector<string> &vec)
{
	sort(vec.begin(), vec.end());
	print(vec);
	auto end_unique = unique(vec.begin(), vec.end());
	print(vec);
	vec.erase(end_unique, vec.end());
	print(vec);
}

int main()
{
	vector<string> vec{ "we", "have", "joy", "we", "have", "fun",
		"we", "have", "season", "in", "the", "sun" };
	print(vec);
	elim_dups(vec);
	stable_sort(vec.begin(), vec.end(), is_shorter);
	print(vec);
	return 0;
}
