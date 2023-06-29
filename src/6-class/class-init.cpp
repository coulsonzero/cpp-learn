#include <iostream>

class BankAccout {
public:
    void sayHi() {
        std::cout << "Hi" << std::endl;
    }
};

int main() {
    // instantiation
    BankAccout back;
    // 3-function call
    back.sayHi();       // Hi

    // 5-pointer call 1
    BankAccout backAccout;
    BankAccout *ptr = &backAccout;
    ptr->sayHi();

    // 5-pointer call 2
    auto *ptr2 = new BankAccout();
    ptr2->sayHi();

    return 0;
}