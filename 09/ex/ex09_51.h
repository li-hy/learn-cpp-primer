#ifndef EX09_51_H
#define EX09_51_H

#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::vector;

class Date {
private:
	unsigned year, mouth, day;

public:
	Date() { year = 0; mouth = 0; day = 0; }
	~Date() = default;
	Date(const string &s);
	void display();
};

Date::Date(const string &s)
{
	auto index1 = s.find_first_of(" /,");
	auto index2 = s.find_last_of(" /,");
	string m = s.substr(0, index1);
	string d = s.substr(index1 + 1, index2 - index1 - 1);
	string y = s.substr(index2 + 1);

	const vector<string> mouth_vec{ "Jan", "Feb", "Mar", "Apr", "May",
		"Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	if (m.find_first_of("123456789") == string::npos) {
		int i = 1;
		for (const auto &str : mouth_vec) {
			if (m.find(str) != string::npos)
				break;
			++i;
		}
		mouth = i;
	} else
		mouth = std::stoi(m);
	day = std::stoi(d);
	year = std::stoi(y);
}

void Date::display()
{
	std::cout << "m/d/y: " << mouth << '/' << day
		<< '/' << year << std::endl;
}

#endif 	/* EX09_51_H */
