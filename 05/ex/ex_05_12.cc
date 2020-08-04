#include "ex_05.h"

int main()
{
	unsigned ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;
	char c, pre_c = '\0';
	while (cin >> c) {
		switch (c) {
		case 'f':
			if (pre_c == 'f')
				++ff_cnt;
			break;
		case 'l':
			if (pre_c == 'f')
				++fl_cnt;
			break;
		case 'i':
			if (pre_c == 'f')
				++fi_cnt;
			break;
		default:
			break;
		}
		pre_c = c;
	}
}
