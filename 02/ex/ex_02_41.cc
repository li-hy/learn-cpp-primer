#include <iostream>
#include <string>

struct SalesData {
	std::string bookNo;
	std::string bookName;
	double price = 0.0;
	unsigned salesVolume = 0;
	double revenue = 0.0;
	double averagePrice = 0.0;
};

int main() {
	SalesData item;

	// first part
	std::cin >> item.bookNo >> item.salesVolume >> item.price;
	item.revenue = item.price * item.salesVolume;
	std::cout << item.bookNo << " " << item.salesVolume
		  << " " << item.price << " " <<  item.revenue;

	// second part
	SalesData item1, item2;

	std::cin >> item1.bookNo >> item1.salesVolume >> item1.price;
	std::cin >> item2.bookNo >> item2.salesVolume >> item2.price;
	if (item1.bookNo == item2.bookNo) {
		unsigned totalCnt = item1.salesVolume + item2.salesVolume;
		double revenue = item1.price * item1.salesVolume + item2.price * item2.salesVolume;
		std::cout << item1.bookNo << " " << totalCnt
			  << revenue;
		if (totalCnt != 0)
			std::cout << revenue / totalCnt << std::endl;
		else
			std::cerr << "no sales" << std::endl;
		return 0;
	} else {
		std::cerr << "ISBN must be same" << std::endl;
		return -1;
	}

	return 0;
}
