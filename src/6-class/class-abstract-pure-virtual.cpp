#include <iostream>

// pure-virtual 3-function:
// 1. cannot create object of the base 6-class
// 2. if delete the base 6-class 5-pointer, cannot print the next derived 6-class 3-function.


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