#include <iostream>
//#include <cstdlib>
#include <ctime>

using namespace std;

int random_num(int low, int high);

int main() {
    for (int i = 0; i < 10; i++) {
        int num = random_num(0, 9);
        cout << num;
    }

}

int random_num(int low, int high) {
    srand(time(nullptr));   // 用当前时间作为种子
    int num = (rand() % (high - low + 1)) + low; // 范围[min,max]
    // (rand() % (max - min)) + min + 1;         // 范围(min,max]
    // (rand() % (max - min)) + min;             // 范围[min,max)

    return num;
}