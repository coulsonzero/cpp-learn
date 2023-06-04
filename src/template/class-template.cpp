#include <iostream>
using namespace std;

template <class T>
class Div {
public:
    Div (T x, T y) {
        cout << x / y << endl;
    }
};


template <>
class Div<string> {
public:
    Div(string x, string y) {
        cout << x.size() / y.size() << endl;
    }
};


int main() {
    Div <int> d1(3, 6);                     // 0
    Div <double> d2(3.2, 7.6);              // 0.421053
    Div <string> d3("hello world", "hi");   // 5

    return 0;
}

