#include "ex_06.h"

string make_plural(size_t ctr, const string &word,
		const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

int main()
{
	size_t ctr = 1;
	cout << make_plural(ctr, "failure") << endl;
	cout << make_plural(ctr, "success", "es") << endl;
	ctr = 2;
	cout << make_plural(ctr, "failure") << endl;
	cout << make_plural(ctr, "success", "es") << endl;

	return 0;
}
