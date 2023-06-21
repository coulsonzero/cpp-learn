#include <iostream>


class Animal {
    protected:
        int age;
    public:
        // 显式虚析构函数
         ~Animal(){};
        virtual void speak() {
            std::cout << "In Animal" << std::endl;
        }
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

    ptr = new Animal();
    ptr->speak();   // In Animal
    delete ptr;

    ptr = new Cat();
    ptr->speak();   // In Cat
    delete ptr;

    ptr = new Dog();
    ptr->speak();   // In Dog
    delete ptr;

    return 0;
}