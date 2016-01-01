#include <iostream>

int main()
{
	int start = 0, end = 0;
	std::cout << "请输入两个整数：";
	std::cin >> start >> end;
	//如果第二个数小，则交换
	if (start > end) {
		int tmp = start;
		start = end;
		end = tmp;
	}
	int val = start;
	while (val < end) {
		std::cout << val << " ";
		++val;
	}
	std::cout << end << std::endl;
	return 0;
}