#include <iostream>

int main()
{
	std::cout << "输入一组数：" << std::endl;
	int sum = 0;
	int tmp = 0;
	while (std::cin >> tmp) {
		sum += tmp;
	}
	std::cout << "这些数之和为：" << sum << std::endl;
	return 0;
}