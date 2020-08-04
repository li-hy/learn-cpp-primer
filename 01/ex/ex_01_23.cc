#include <iostream>
#include "include/Sales_item.h"

int main()
{
	Sales_item itemPre, itemCur;
	int n = 1;	/* number of sale record */

	if (std::cin >> itemPre) {	/* read the first item */
		while (std::cin >> itemCur) { /* read the next item */
			if (itemCur.isbn() == itemPre.isbn()) /* the same */
				++n;
			else { /* different books */
				std::cout << "ISBN: " << itemPre.isbn()
					  << " Records: " << n
					  << std::endl;
				n = 1;	/* clear */
				itemPre = itemCur;
		       	}
		}
		std::cout << "ISBN: " << itemPre.isbn()	<< " Records: " << n
	  		  << std::endl;
		return 0;
	} else { /* no input data */
		std::cerr << "No data?!" << std::endl;
		return -1;
       	}
}
