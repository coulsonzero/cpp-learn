#include <iostream>

// pure-virtual function:
// 1. cannot create object of the base class
// 2. if delete the base class pointer, cannot print the next derived class function.


class Animal {
protected:
    int age;
public:
    ~Animal(){};
    // pure virtual method
    virtual void speak() = 0;
};

class Cat : public Animal {
public:
    void speak() {
        std::cout << "In Cat"<< std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "In Dog"<< std::endl;
    }
};


int main() {
    Animal *ptr;

    // ptr = new Animal();  // error

    ptr = new Cat();
    ptr->speak();           // In Cat
    // delete ptr;          // if has it, only print "In Cat"

    ptr = new Dog();
    ptr->speak();           // In Dog
    delete ptr;

    return 0;
}