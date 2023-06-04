#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double height;
    static int count;
public:
    Rectangle();
    Rectangle(double length, double height);
    Rectangle(const Rectangle& rect);
    ~Rectangle();
    static int get_count();
};

int Rectangle::count = 0;
Rectangle::Rectangle(double l, double h) :length(l), height(h)
{
    count++;
}

Rectangle::Rectangle():length(0.0), height(0.0)
{
    count++;
}

Rectangle::Rectangle(const Rectangle& rect):length(rect.length), height(rect.height)
{
    count++;
}

Rectangle::~Rectangle() {
    count--;
}

// 内联函数
inline int Rectangle::get_count() {
    return count;
}

int main() {
    Rectangle rect1;
    Rectangle rect2(1.2, 6.7);
    Rectangle rect3(rect1);
    Rectangle rect4(rect2);

    cout << rect4.get_count() << endl;          // 4

    Rectangle* ptr = new Rectangle();
    cout << ptr->get_count() << endl;           // 5

    cout << Rectangle::get_count() << endl;     // 5

    return 0;
}

