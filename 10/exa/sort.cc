#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
	vector<string> words{"the", "quick", "red", "fox", "jumps",
		"over", "the", "slow", "red", "turtle"};
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

}
