#include <iostream>

/**
 * sizeof(12)             : 字节大小
 * typeid(12).name()`     : 具体类型
 * typeid(3.14+1.2).name(): 隐式类型转换
 * static_cast<int>(12)   : 显式类型转换
 */

int main()
{
    // 类型
    std::cout << typeid(12).name() << std::endl;        // i: int
    std::cout << typeid(11.2).name() << std::endl;      // d: double
    float pi = 3.14F;
    std::cout << typeid(pi).name() << std::endl;        // f: float
    // 隐式类型转换
    std::cout << typeid(pi + 1.2).name() << std::endl;  // d: double

    // 显式类型转换
    double x = 23.6;
    int y = 30;
    std::cout << "Without casting: " << x + y << std::endl;                       // Without casting: 43.6
    std::cout << "Without casting: " << static_cast<int>(x + y) << std::endl;     // Without casting: 43

    // sizeof: 数据类型所占字节大小
    int num = 4;
    std::cout << sizeof(num) << std::endl; // sizeof(int): 4
}

