/*
 * File name	: count.cpp
 * Author	: hyli
 * Created 	: Sep 14, 2019
 * Updated	: Sep 14, 2019
 * Description	: count input
 */

#include <iostream>

int main()
{
	int currVal = 0, val = 0;

	if (std::cin >> currVal) {
		int cnt = 1;

		val = currVal;
		while (std::cin >> currVal) {
			if (val == currVal)
				++cnt;
			else {
				std::cout << val << " occurs "
					  << cnt << " times." << std::endl;
				val = currVal;
				cnt = 1;
			}
		}
		std::cout << val << " occurs "
		       	  << cnt << " times." << std::endl;
	}

	return 0;
}
