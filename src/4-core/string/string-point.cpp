#include <iostream>

using std::cout, std::endl, std::boolalpha;

int main() {
    char str1[] = "hello";      // 用字符串常量初始化字符数组str1，
    char str2[] = "hello";      // 用字符串常量初始化字符数组str2，
    const char* str3 = "hello"; // 使用指针str3指向"hello"的首地址    0x16fd5b660
    const char* str4 = "hello"; // 使用指针str4指向"hello"的首地址    0x16fd5b658

    cout << boolalpha;
    cout << "str1 == str2 ? " << (str1 == str2) << endl;  // false
    cout << "str3 == str4 ? " << (str3 == str4) << endl;  // true
    return 0;
}



