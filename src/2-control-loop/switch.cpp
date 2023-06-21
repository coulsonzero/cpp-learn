#include <iostream>


int main() {

    int day = 6;
    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "work day" << std::endl;
            break;
        case 6:
            std::cout << "sta" << std::endl;
            break;
        default:
            std::cout << "sun" << std::endl;
    }

    return 0;
}

// work day