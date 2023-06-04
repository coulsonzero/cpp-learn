#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "abs(8): " << abs(-8) << endl;        // 绝对值：8
    cout << "ceil(3.9): " << ceil(3.9) << endl;   // 向上取整：4
    cout << "floor(3.9): " << floor(3.9) << endl; // 向下取整：3
    cout << "log(10)2: " << log(10) << endl;      // 2.30259
    cout << "log10(100): " << log10(100) << endl; // 2
    cout << "exp(5): " << exp(5) << endl;         // 148.413
    cout << "pow(2,3): " << pow(2, 3) << endl;    // 幂：8
    cout << "sqrt(4): " << sqrt(4) << endl;       // 开平方根：2

    const double PI = 3.141592653589793238462;
    cout << "sin(45): " << sin(PI / 4) << endl;     // 0.707107
    cout << sqrt(2)/2 << endl;                      // 0.707107     

    return 0;
}