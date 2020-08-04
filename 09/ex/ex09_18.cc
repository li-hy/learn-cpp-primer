#include "ex09.h"

int main()
{
	deque<string> str_deque;
	string word;
	while (cin >> word)
		str_deque.push_back(word);

	for (auto iter = str_deque.cbegin(); iter != str_deque.cend(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}
