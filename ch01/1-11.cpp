#include <iostream>

int main()
{
	int start = 0, end = 0;
	std::cout << "����������������";
	std::cin >> start >> end;
	int val = start;
	while (val < end) {
		std::cout << val << " ";
		++val;
	}
	std::cout << end << std::endl;
	return 0;
}