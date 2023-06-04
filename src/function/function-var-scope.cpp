#include <iostream>

int num = 10;

int main() {
    int num = 12;
    std::cout << ::num << std::endl;    // 全局变量：10
    std::cout << num << std::endl;      // 局部变量：12

    return 0;
}