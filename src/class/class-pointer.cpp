#include <iostream>
using namespace std;

class Phone {
    private:
        int charge;
    public:
        Phone();
        ~Phone();
        void use() {
            charge -= 10;
        }
        void get_charge() {
            cout << charge;
        }
};

Phone::Phone() {
    cout << "Constructor" << endl;
    charge = 100;
}

Phone::~Phone() {
    cout << "Destructor" << endl;
    charge = 0;
}

int main() {
    Phone p;
    // dot member selection operator(.)
    p.use();
    // arrow member selection operator(->)
    Phone *ptrPhone = &p;
    ptrPhone -> get_charge();

    Phone *ptr = new Phone();
    ptr.get_charge();

    return 0;
}
