/*
 * File name	: read_int.cpp
 * Author	: hyli
 * Created 	: Sep 14, 2019
 * Updated	: Sep 14, 2019
 * Description	: read integer from input, then sum then
 */

#include <iostream>

int main()
{
	int sum = 0, val = 0;

	while (std::cin >> val)
		sum += val;
	std::cout << "Sum is " << sum << std::endl;

	return 0;
}
