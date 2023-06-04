#include <iostream>
using namespace std;

void swap_int(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << ", b: " << b << endl;
}
