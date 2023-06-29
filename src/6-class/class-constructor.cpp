#include <iostream>

class student {
private:
    std::string name;
public:
    student() {
        std::cout << "Constructor" << std::endl;
    }
    ~student() {
        std::cout << "Destructor" << std::endl;
    }
    student(std::string x) {
        setName(x);
    }
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
//    student s;
//    student *ptr = new student;
//    ptr->setName("John Smith");
//    std::cout << ptr->getName() << std::endl;
//    delete ptr;


     student stu("John Smith");
    // std::cout << stu.getName() << std::endl;
    // John Smith
    // Destructor
    return 0;
}



