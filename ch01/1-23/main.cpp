#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item curr_item, val_item;
	if (std::cin >> curr_item) {
		int cnt = 1;
		while (std::cin >> val_item) {
			if (curr_item.isbn() == val_item.isbn()) {
				cnt++;
			}
			else {
				std::cout << curr_item.isbn() << " num: "
					<< cnt << std::endl;
				curr_item = val_item;
				cnt = 1;
			}
		}
		std::cout << curr_item.isbn() << " num: "
			<< cnt << std::endl;
	}
	else {
		std::cout << "no data? " << std::endl;
		return -1;
	}
	return 0;
}