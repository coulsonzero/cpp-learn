#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b; // 空格或换行输入分开，多个空格只会视为一个空格
    std::cout << a + b;

    return 0;
}

// 1 4
// a + b = 5