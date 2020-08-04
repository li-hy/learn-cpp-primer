#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void print(const vector<string> &vec)
{
	for (const auto &s : vec)
		cout << s << " ";
	cout << endl;
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
	return 0;
}
