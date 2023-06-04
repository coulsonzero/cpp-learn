#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int sum(0);
    int num;
    ifstream infile;
    infile.open("numbers.dat");
    while(infile >> num) {
        sum += num;
    }
    cout << "The sum of the numbers in the file is " << sum << endl;    // 1500
    infile.close();

    return 0;
}
