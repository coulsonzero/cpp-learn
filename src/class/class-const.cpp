#include <iostream>


class Circle {
    private:
        double radius;
    public:
        double getRadius() const;   // getter 访问器 设置const限定符确保宿主对象(this指向的对象)为只读
        void setRadius(double r);   // setter 更改器 不能设置常量限定符const
};