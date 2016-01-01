#include <iostream>

int main()
{
	int val;
	for (val = 10; val > 0; --val) {
		std::cout << val << " ";
	}
	std::cout << val << std::endl;
	return 0;
}