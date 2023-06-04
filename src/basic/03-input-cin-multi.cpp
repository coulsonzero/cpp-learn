#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b; // 空格分开，多个空格只会视为一个空格
    std::cout << a + b;

    return 0;
}