#include <iostream>


class Person {
    protected:
        std::string name;
    public:
        Person(std::string name);
        ~Person();
};

// 虚继承
class Student : virtual public Person {
    protected:
        double gpa;
    public:
        Student(std::string name, double gpa): Person(name), gpa(gpa){};
        ~Student();
};

class Professor : virtual public Person {
    protected:
        double salary;
    public:
        Professor(std::string name, double salary): Person(name), salary(salary){};
        ~Professor();
};

// 多重继承
class TA : public Professor, public Student {
    public:
        TA(std::string name, double gp, double sal): Person(name), Student(name, gp), Professor(name, sal){};
        ~TA();
};

