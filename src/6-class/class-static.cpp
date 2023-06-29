#include <iostream>

class Rectangle {
    private:
        static int count;       // static 静态数据成员
    public:
        static int getCount();  // static 静态成员方法
};

int Rectangle::count = 0;
int Rectangle::getCount() {
    return count;
}

int main() {
    // static call
    Rectangle::getCount();

    Rectangle rect;
    rect.getCount();

    return 0;
}