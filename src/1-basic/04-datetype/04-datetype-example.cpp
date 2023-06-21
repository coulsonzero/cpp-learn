#include <iostream>
#include <string>

/**
 * Long : L
 * float: F
 * unsigned: U
 */

using namespace std;

int main() {
    // 整数(默认用int)
    short num_short = 10;   // -32768 ~ 32767
    int num = 12;
    long num_long = 123L;   // 使用L或l结尾

    // unsigned: 负数, signed: 正负数均可
    unsigned int num_unsigned_2 = 1000u;    // 使用u/U结尾
    signed int num_signed_1 = -13;
    signed int num_signed_2 = 13;

    // 浮点数(默认用double)
    double weight = 130;
    float height = 181.3f;  // 使用f或F结尾

    // 布尔
    bool online = true;     // Output: true(1), false(0), 可以使用boolalpha显示字面量为true或false

    // 字符
    char c = 'z';

    // 字符串类
    string name = "john";

    // 数组
    int nums[5] = {1, 2, 3, 4, 5};

    // auto: 必须同时初始化
    auto x = 10;
    x = 20.0;

    return 0;
}