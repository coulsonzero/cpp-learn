#include <iostream>


class Circle {
    public:
        Circle();                   // 默认构造函数（无参）
        Circle(double r);           // 参数构造函数
        Circle(const Circle& c);    // 拷贝构造函数, Circle(const Circle& c) = delete;  // 阻止使用拷贝构造函数
        ~Circle();                  // 析构函数
    private:
        double radius;
};


// 默认无参构造函数
Circle::Circle():radius(1.0)        // 如果省略，则设置为垃圾值
{
    std::cout << "default constructor" << std::endl;
}


// 参数构造函数
Circle::Circle(double r):radius(r)
{
    std::cout << "params constructor" << std::endl;
}

// 拷贝构造函数
Circle::Circle(const Circle& c):radius(c.radius)
{
    std::cout << "copy constructor" << std::endl;
}

// 析构函数
Circle::~Circle()
{
    std::cout << "destructor" << std::endl;
}

int main() {
    Circle circle1;
    Circle circle2(3.0);
    Circle circle3(circle1);

    return 0;
}