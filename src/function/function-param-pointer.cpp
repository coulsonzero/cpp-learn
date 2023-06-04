#include <iostream>

// pass-by-value
void add(int x);
// pass-by-reference
void add_pointer(int& x);

int main() {
    int x = 10;
    add(x);
    std::cout << x << std::endl; // 10

    add_pointer(x);
    std::cout << x << std::endl; // 11
}

void add(int x) {
    x++;
}

void add_pointer(int& x) {
    x++;
}