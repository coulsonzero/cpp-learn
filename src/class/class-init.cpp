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
    // function call
    back.sayHi();       // Hi

    // pointer call 1
    BankAccout backAccout;
    BankAccout *ptr = &backAccout;
    ptr->sayHi();

    // pointer call 2
    auto *ptr2 = new BankAccout();
    ptr2->sayHi();

    return 0;
}