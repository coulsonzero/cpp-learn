#include <iostream>

void foo();

int main() {
    foo();
    foo();
    foo();

    return 0;
}


void foo() {
    int num = 3;
    num++;
    auto int count = 0; // 显式自动局部变量
    count++;
    std::cout << "num: " << num << ", ";
    std::cout << "count: " << count << std::endl;
}

/**
 * num: 4, count: 1
 * num: 4, count: 1
 * num: 4, count: 1
 */
