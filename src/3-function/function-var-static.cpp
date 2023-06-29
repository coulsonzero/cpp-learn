#include "iostream"

void foo();

int main() {
    foo();
    foo();
    foo();

    return 0;
}


void foo() {
    static int count = 0;   // 静态局部变量
    count++;
    std::cout << "count: " << count << std::endl;
}

/**
 * count: 1
 * count: 2
 * count: 3
 */
