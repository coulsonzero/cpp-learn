#include <iostream>
using namespace std;

/*
int (short, long, signed, unsigned)
float, double
bool
char
void: 无类型
wchat_t: 宽字符型
*/

void datatype_size()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    enum color
    {
        red,
        green = 5,
        blue
    };
}

// typedef 为一个已有的类型取一个新的名字
typedef int integer;

/********** 变量作用域 ***********/

// 全局变量声明
int g = 20;

void var_scope()
{
    // 局部变量声明
    int g = 10;

    cout << g;
}


// main启动函数必须位于末尾
int main()
{
    // var_scope();    // 10

    bool x = true;
    cout << x << endl;  // 1
    cout << boolalpha << x << endl;  // true
    return 0;
}

