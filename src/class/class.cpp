#include <iostream>
using namespace std;

class Myclass {
    public:
        Myclass();
        ~Myclass();
};

Myclass::Myclass() {
    cout << "Constructor" << endl;
}

Myclass::~Myclass() {
    cout << "Destructor" << endl;
}

int main() {
    Myclass obj;
}

/**
* Constructor
* Destructor
*/

