#include "ex_05.h"

int main()
{
	string word, pre_word = "", most_word;
	unsigned cnt = 0, max_cnt = 0;
	while (cin >> word) {
		if (word == pre_word)
			++cnt;
		else {
			if (cnt > max_cnt) {
				max_cnt = cnt;
				most_word = pre_word;
			}
			cnt = 0;
		}
		pre_word = word;
	}
	if (max_cnt == 0)
		cout << "There is no duplicated word" << endl;
	else
		cout << most_word << " " << max_cnt + 1 << endl;

	return 0;
}
