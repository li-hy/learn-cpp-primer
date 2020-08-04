#include <iostream>
#include <initializer_list>

void error_msg(std::initializer_list<std::string> ls)
{
	for (auto begin = ls.begin(); begin != ls.end(); ++begin)
		std::cout << *begin << " ";
	std::cout << std::endl;
}

void err_string(void)
{
	std::string expected, actual;
	if (expected != actual)
		error_msg({ "funcX", expected, actual });
	else
		error_msg({ "funcX", "ok" });
}
