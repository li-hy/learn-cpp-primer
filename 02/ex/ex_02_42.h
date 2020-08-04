#ifndef SALES_DATA_H
#define SALES_DATA_H

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

#endif
