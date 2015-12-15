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
std::cout << "The sum of " << v1;   # 多余的分号
      << " and " << v2;   # 多余的分号
      << " is " << v1 + v2 << std::endl;    
```

  [1]: https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-2-windows.png
  [2]: https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-2-linux.png
  [3]: http://www.jb51.net/article/73377.htm
  [4]: https://raw.githubusercontent.com/790854836/cpp-primer-5th/master/img/ch01/1-4-output.png