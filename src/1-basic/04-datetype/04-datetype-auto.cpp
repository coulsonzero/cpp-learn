#include <iostream>
using namespace std;

int main() {
    auto balance = 2452.4;
    auto price = 259.99;
    int total = balance / price;

    cout << total << endl;              // 9
    cout << balance - (total * price);  // 112.49

    return 0;
}
