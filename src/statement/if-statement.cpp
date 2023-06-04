#include <iostream>

bool is_leap_year(int year);

int main() {
    // int x = 5;
    // if (x == 5)  std::cout << "true" << std::endl;
    // else std::cout << "false" << std::endl;

    if (is_leap_year(2023)) {
        std::cout << "This is a leap year" << std::endl;
    } else {
        std::cout << "This is not a leap year" << std::endl;
    }

    return 0;
}


bool is_leap_year(int year) {
    return (year % 100 == 0)? (year % 400 == 0) : (year % 4 == 0);
}
