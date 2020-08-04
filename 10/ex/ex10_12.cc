#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "../../07/exa/Sales_data.h"

using namespace std;

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.units_sold << " "
		<< item.revenue << " ";
	return os;
}

bool compare_isbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn();
}

int main()
{
	vector<Sales_data> v;
	Sales_data a("123");
	Sales_data b("123");
	Sales_data c("121");
	Sales_data d("127");
	v.push_back(d);
	v.push_back(a);
	v.push_back(c);
	v.push_back(b);
	for (const auto &item : v)
		cout << item.isbn() << " ";
	cout << endl;
	sort(v.begin(), v.end(), compare_isbn);
	for (const auto &item : v)
		cout << item.isbn() << " ";
	cout << endl;
	return 0;
}
