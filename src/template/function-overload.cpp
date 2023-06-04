#include <iostream>

int add(int a, int b);
double add(double a, double b);

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return double a + b;
}


int main() {
    add(1, 2);
    add(1.6, 2.3);
}