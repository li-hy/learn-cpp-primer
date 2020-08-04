#include "ex_03.h"

void print_array_1(int (&a)[3][4])
{
	for (auto &row : a) {
		for (auto &col : row)
			cout << col << " ";
		cout << endl;
	}
}

int main()
{
	int ia[3][4];
	int cnt = 0;
	for (auto &row : ia) {
		for (auto &col : row)
			col = ++cnt;
	}
	print_array_1(ia);

	for (auto &row : ia) {
		for (auto &col : row)
			cout << col << " ";
		cout << endl;
	}

	for (auto row = 0; row != 3; ++row) {
		for (auto col = 0; col != 4; ++col)
			cout << ia[row][col] << " ";
		cout << endl;
	}

	for (auto p_row = ia; p_row != ia + 3; ++p_row) {
		for (auto p_col = *p_row; p_col != *p_row + 4; ++p_col)
			cout << *p_col << " ";
		cout << endl;
	}

	return 0;
}
