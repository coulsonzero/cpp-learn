#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "max(int): " << numeric_limits<int>::max() << endl;                      // max(int): 2147483647
    cout << "max(unsigned int): " << numeric_limits<unsigned int>::max() << endl;    // max(unsigned int): 4294967295

    return 0;
}
