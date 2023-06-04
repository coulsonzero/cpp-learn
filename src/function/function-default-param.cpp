#include <iostream>

int area(int x, int y = 1, int z = 2) {
    return x + y + 2;
}

int main() {
    area(2);
    area(2, 3);
    area(2, 3,5);
}
