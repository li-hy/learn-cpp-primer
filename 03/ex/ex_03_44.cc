#include "ex_03.h"

typedef int int_array[4];

void print_array_1(int (&a)[3][4])
{
	for (int_array (&row) : a) {
		for (int &col : row)
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

	for (int_array &row : ia) {
		for (int &col : row)
			cout << col << " ";
		cout << endl;
	}

	for (size_t row = 0; row != 3; ++row) {
		for (size_t col = 0; col != 4; ++col)
			cout << ia[row][col] << " ";
		cout << endl;
	}

	for (int_array *p_row = ia; p_row != ia + 3; ++p_row) {
		for (int *p_col = *p_row; p_col != *p_row + 4; ++p_col)
			cout << *p_col << " ";
		cout << endl;
	}

	return 0;
}
