#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::stoi;
using std::to_string;

int sum_for_int(vector<string> const &v)
{
	int sum = 0;
	for (auto const &s : v)
		sum += stoi(s);
	return sum;
}

float sum_for_float(vector<string> const &v)
{
	float sum = 0.0;
	for (auto const &s : v)
		sum += stof(s);
	return sum;
}

int main()
{
	vector<string> v;
	for (auto i = 0; i != 10; ++i)
		v.push_back(to_string(i));
	std::cout << sum_for_int(v) << std::endl;
	v.push_back(to_string(5.5));
	std::cout << sum_for_float(v) << std::endl;

	return 0;
}
