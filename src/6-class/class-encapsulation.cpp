#include <iostream>

class student {
private:
    std::string name;
public:
    void setName(std::string x) {
        name = x;
        // this->name = x;
        // (*this).name = x;
    }
    std::string getName() {
        return name;
    }
protected:  // ...
// friend 3-function
};

int main() {
    student *ptr = new student;
    ptr->setName("John Smith");
    std::cout << ptr->getName() << std::endl;

    return 0;
}



