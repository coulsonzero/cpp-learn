#include "circle.h"


// 默认无参构造函数
Circle::Circle():radius(0.0)         // 如果省略，则设置为垃圾值
{
    std::cout << "default constructor" << std::endl;
}


// 参数构造函数
Circle::Circle(double r):radius(r)
{
    std::cout << "params constructor" << std::endl;
    if (radius < 0.0) assert(false);
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


void Circle::setRadius(double r)
{
    radius = r;
    if (radius < 0.0) assert(false);
}


double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    const double PI = 3.14;
    return radius * radius * PI;
}

double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return radius * PI * 2;
}

