#include <iostream>
using namespace std;

class ConstClass {
public:
    ConstClass();
    ~ConstClass();
    void hello() const;
    void hi();
};

ConstClass::ConstClass() {
    cout << "Constructor" << endl;
}

ConstClass::~ConstClass() {
    cout << "Destructor" << endl;
}

void ConstClass::hello() const {
    cout << "hello class" << endl;
}

void ConstClass::hi() {
    cout << "hi class" << endl;
}

int main() {
    const ConstClass obj;
    obj.hello();
    // obj.hi();   // error: const class only cass the const methods.

    return 0;
}