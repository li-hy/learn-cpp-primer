#include "ex_05.h"

int main()
{
	vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	unsigned g = 0;
	while (cin >> g) {
		string letter;
		letter = (g < 60) ? scores[0] : scores[(g - 50) / 10];
		letter += (g == 100 || g < 60) ? "" : (g % 10 > 7 ? "+" : (g % 10 < 3 ? "-" : ""));
		cout << letter << endl;
	}
	return 0;
}
