#include <iostream>
#include <sstream>

using namespace std;

int main() {
    stringstream ans;
    ans << "hello";
    ans << ' ';
    ans << "world";
    ans << '!';

    cout << ans.str() << endl;
}