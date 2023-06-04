#include <iostream>
#include <random>

using namespace std;

int main(){
    int min = 0, max = 100;
    random_device seed;
    ranlux48 engine(seed());
    uniform_int_distribution<> distrib(min, max);
    int random = distrib(engine);

    cout << random; // 82
}