#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item sum_item;
	if (std::cin >> sum_item) {
		Sales_item trans;
		while (std::cin >> trans) {
			if (sum_item.isbn() == trans.isbn()) {
				sum_item += trans;
			} else {
				std::cout << sum_item << std::endl;
				sum_item = trans;
			}
		}
		std::cout << sum_item << std::endl;
	} else {
		std::cerr << "no data? " << std::endl;
		return -1;
	}
	return 0;
}