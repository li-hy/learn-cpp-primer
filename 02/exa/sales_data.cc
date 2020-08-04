#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	SalesData data1, data2;

	double price = 0.0;
	std::cin >> data1.bookNo >> data1.unitsSold >> price;
	data1.revenue = price * data1.unitsSold;
	std::cin >> data2.bookNo >> data2.unitsSold >> price;
	data2.revenue = price * data2.unitsSold;
	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.unitsSold + data2.unitsSold;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << totalCnt
			  << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	} else {
		std::cerr << "Data must refer to the same ISBN"
			  << std::endl;
		return -1;
	}
}
