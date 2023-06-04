#include <iostream>

// return-by-value
int larger(int x, int y);
// return-by-reference
int& larger(int& x, int& y);


int larger(int x, int y) {
    return x > y ? x : y;
}

int& larger(int& x, int& y) {
    return x > y ? x : y;
}
