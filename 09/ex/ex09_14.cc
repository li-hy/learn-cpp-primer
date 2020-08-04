#include "ex09.h"

int main()
{
	list<char *> ls_char;
	vector<string> vec_str;
	vec_str.assign(ls_char.cbegin(), ls_char.cend());

	return 0;
}
