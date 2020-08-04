#include "ex_05.h"

int main()
{
	int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;
	char c;
	while (cin >> c) {
		if (c == 'a')
			++a_cnt;
		else if (c == 'e')
			++e_cnt;
		else if (c == 'i')
			++i_cnt;
		else if (c == 'o')
			++o_cnt;
		else if (c == 'u')
			++u_cnt;
	}
	cout << a_cnt << " " << e_cnt << " " << i_cnt
		<< " " << o_cnt << " " << u_cnt << endl;

	return 0;
}
