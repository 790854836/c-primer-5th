#include <iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */";	// ��������һ������
	std::cout << /* "*/" /* "/*" */;
}