#include <iostream>


class Animal {
    protected:
        int age;
    public:
        // 显式虚析构函数
        ~Animal(){};
        void speak() const {
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

    ptr = new Cat();
    ptr->speak();   // In Animal
    delete ptr;

    ptr = new Dog();
    ptr->speak();   // In Animal
    delete ptr;

    return 0;
}