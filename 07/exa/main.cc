#include "ex_07.h"
#include "Sales_data.h"

int main()
{
	Sales_data total;
	if (read(cin, total)) {
		Sales_data trans;
		while (read(cin, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total) << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}

	return 0;
}
