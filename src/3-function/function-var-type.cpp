/*************************
 *      变量的初始化       *
 *************************/

#include <iostream>

using namespace std;


int global;     // 全局变量：初始化为默认值

int main() {
    static int static_local;    // 静态局部变量：初始化为默认值
    auto int auto_local;        // 自动局部变量：没有被显式初始化时，将保留以前遗留的垃圾值，可能值比较大

    cout << global << endl;
    cout << static_local << endl;
    cout << auto_local << endl;

    return 0;
}