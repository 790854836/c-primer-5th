# 第1章 开始

## 练习1.1
略

## 练习1.2
### Windows
![此处输入图片的描述][1]

### Linux
![此处输入图片的描述][2]

linux下返回值变成了无符号值
[参考资料][3]

## 练习1.3
```cpp
#include <iostream>
    
int main()
{
    std::cout << "Hello, World" << std::endl;
        return 0;
}
```

## 练习1.4
```cpp
#include <iostream>
    
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
        << " is " << v1 * v2 << std::endl;
    return 0;
}
```
![此处输入图片的描述][4]

## 练习1.5
```cpp
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}
```

## 练习1.6
```cpp
std::cout << "The sum of " << v1;   // 多余的分号
      << " and " << v2;   // 多余的分号
      << " is " << v1 + v2 << std::endl;    
```

## 练习1.7
在vs2015下编译这段代码：
```cpp
/*
 * 注释对 /* */ 不能嵌套。
 * “不能嵌套” 几个字会被认为是源码，
 * 像剩余程序一样处理
 */
int main()
{
  return 0;
}
```
结果  
![此处输入图片的描述][5]

## 练习1.8
```cpp
#include <iostream>

int main()
{
  std::cout << "/*";  // 合法
  std::cout << "*/";  // 合法
  std::cout << /* "*/" */;  // 不合法，缺少右引号
  std::cout << /* "*/" /* "/*" */;  // 合法
}
```
修改后：
```cpp
#include <iostream>

int main()
{
  std::cout << "/*";
  std::cout << "*/";
  std::cout << /* "*/" */"; // 最后面加入一个引号
  std::cout << /* "*/" /* "/*" */;
}
```
输出结果

![此处输入图片的描述][6]

##[练习 1.9](1-9.cpp)
output:  
![1-9](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-9-output.png)

##[练习 1.10](1-10.cpp)
output:  
![1-10](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-10-output.png)

##[练习 1.11](1-11.cpp)
output:  
![1-11](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-11-output.png)

##[练习 1.12](1-12.cpp)
> 完成了-100到100的整数和，sum结果为0

output:  
![1-12](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-12-output.png)

## 练习1.13
[重写1.9](1-13-1.cpp)

[重写1.10](1-13-2.cpp)

[重写1.11](1-13-3.cpp)

## 练习1.14
（等体会深入再补充）感觉使用原则应该是尽其所能

for语句有三个部分，用在固定步长增长的迭代中比较好

while在没有明显知道次数，非固定步长增长的循环中比较好

***
参考：
* [stackoverflow上的解释](http://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming)
* [for 和 while 在 C/C++ 中分别使用在什么场景较好？](https://www.zhihu.com/question/25101246)

## 练习1-15
略

## [练习1.16](1-16.cpp)

## 练习1.17
见练习1.18的结果

## 练习1.18
输入全部相等的值：  
![相等](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-18-repeat-output.png)

输入全部不相等的值：  
![不相等](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-18-no-repeat-output.png)

## [练习1.19](1-19.cpp)
output:  
![output](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-19-output.png)

## [练习1.20](1-20)
output:
![output](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-20-output.png)

## [练习1.21](1-21)
output:
![output](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-21-output.png)

## [练习1.22](1-22)
output:
![output](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-22-output.png)

## [练习1.23](1-23)
output:
![output](https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-23-output.png)

## [练习1.24]
见练习1-23的output

## [练习1.25]
见练习1-22的output


  [1]: https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-2-windows.png
  [2]: https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-2-linux.png
  [3]: http://www.jb51.net/article/73377.htm
  [4]: https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-4-output.png
  [5]: https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-7-error-msg.png
  [6]: https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-8-output.png