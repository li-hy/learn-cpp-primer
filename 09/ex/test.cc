#include "ex09_51.h"
#include <stack>
#include <queue>
#include <array>
#include <forward_list>

int main()
{
	Date a(string("Apr 23 2020"));
	a.display();
	Date b(string("April 23, 2020"));
	b.display();
	Date c(string("4/23/2020"));
	c.display();
	std::queue<string, std::forward_list<string>> abc;

	return 0;
}
