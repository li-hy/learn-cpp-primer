#include "ex_03.h"

int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade/10];
	}
}
