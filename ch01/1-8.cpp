#include <iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */";	// 最后面加入一个引号
	std::cout << /* "*/" /* "/*" */;
}