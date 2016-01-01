#include <iostream>

int main()
{
	std::cout << "请输入两个整数：";
	int start = 0, end = 0;
	std::cin >> start >> end;
	for (int i = start; i < end; ++i) {
		std::cout << i << " ";
	}
	std::cout << end << std::endl;
	return 0;

}