#include "ex07.h"

struct Sale_data {
	string book_no;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sale_data total;
	if (cin >> total.book_no >> total.units_sold >> total.revenue) {
		Sale_data trans;
		while (cin >> trans.book_no >> trans.units_sold
				>> trans.revenue) {
			if (trans.book_no == total.book_no) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			} else {
				cout << total.book_no << " "
					<< total.units_sold << " "
					<< total.revenue << endl;
				total = trans;
			}
		}
		cout << total.book_no << " "
			<< total.units_sold << " "
			<< total.revenue << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}

	return 0;
}
