#include<iostream>
using namespace std;

class increment {
    int x_;
    int y_;
public:
    increment(int x = 0, int y = 0);
    increment(const increment&);
    ~increment();
    increment& operator++();//前置
    const increment operator++(int);//后置
    increment operator+(const increment&);
    increment& operator+=(const increment&);
    void Displayincrement();
};

increment& increment::operator+=(const increment& _right)
{
    this->x_ += _right.x_;
    this->y_ += _right.y_;
    return *this;
}

increment increment::operator+(const increment& _right)
{
    increment temp;
    temp.x_ = this->x_ + _right.x_;
    temp.y_ = this->y_ + _right.y_;
    return temp;
}


increment& increment::operator++()
{
    ++x_;
    ++y_;
    return *this;
}

const increment increment::operator++(int)
{
    increment temp(*this);
    this->x_++;
    this->y_++;
    return temp;
}

increment::increment(int x, int y)
{
    x_ = x;
    y_ = y;
    cout << "this is constructor" << endl;
}

increment::increment(const increment& b)
{
    this->x_ = b.x_;
    this->y_ = b.y_;
    cout << "this is copy constructor" << endl;
}

increment::~increment()
{
    cout << "this is destructor" << endl;
}

void increment::Displayincrement()
{
    cout << "x: " << this->x_ << endl;
    cout << "y: " << this->y_ << endl;
}

int main()
{
    increment i(1, 1);
    cout << endl << "this is i++: " << endl;
    i++;
    cout << endl << "this is ++i: " << endl;
    ++i;

    cout << "end" << endl;
    return 0;
}

/*
this is constructor

this is i++:
this is copy constructor
this is destructor

this is ++i:
end
this is destructor
 */



