#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a line of integers and eof at the end: " << endl;
    while(cin >> n) {
        cout << n * 2 << " ";
    }

    return 0;
}

/*
 * input: 2 5 10 7 3
 * output: 4 10 20 14 6
 */