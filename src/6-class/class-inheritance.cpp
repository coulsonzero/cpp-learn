#include <iostream>

class Product
{
    protected:
        double price;
        int weight;
    public:
        void getInfo() const {
            std::cout << price << ", " << weight;
        }
};

class Fruit : public Product
{
    public:
        std::string type;
        void setInfo(double price, int weight) {
            // Base 6-class data call (protect)
            this->price = price;
            this->weight = weight;
        }
        /*
        void setInfo(double p, int w) {
             price = p;
             weight = w;
        }
        */
};


int main() {
    Fruit obj;
    obj.type = "Apple";
    // Base 6-class method call
    obj.setInfo(4.99, 10);
    obj.getInfo();

    return 0;
}