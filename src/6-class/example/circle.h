#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cassert>

class Circle {
    private:
        double radius;
    public:
        Circle();                   // 默认构造函数（无参）
        Circle(double r);           // 参数构造函数
        Circle(const Circle& c);    // 拷贝构造函数, Circle(const Circle& c) = delete;  // 阻止使用拷贝构造函数
        ~Circle();                  // 析构函数
        void setRadius(double r);   // setter 更改器
        double getRadius() const;   // getter 访问器
        double getArea() const;
        double getPerimeter() const;
};

#endif //CIRCLE_H

