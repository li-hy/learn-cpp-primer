#include "ex_06.h"

unsigned fact(unsigned n)
{
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}

void interactive_fact()
{
	const string prompt = "Please enter a integer within [0, 13):\n";
	const string out_of_range = "Out of range, please try again.\n";
	for (unsigned n = 0; cout << prompt, cin >> n; ) {
		if (n > 12) {
			cout << out_of_range;
			continue;
		}
		cout << fact(n) << endl;
	}
}

int main()
{
	interactive_fact();
	return 0;
}
