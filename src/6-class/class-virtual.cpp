#include <iostream>
#include <string>

using namespace std;

class Base {
    public:
        // 抽象：virtual
        virtual void print() const {
            cout << "In the Base" << endl;
        }
};

// 继承
class Derived : public Base {
    public:
        void print() const {
            cout << "In the Derived" << endl;
        }
};

int main() {
    Base *ptr;
    ptr = new Base();
    ptr -> print();     // In the Base
    delete ptr;


    ptr = new Derived();
    ptr -> print();     // In the Derived
    delete ptr;

    return 0;
}