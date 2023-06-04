#include <iostream>
#include <string>

using namespace std;

int stringtoInt(string s);

int main() {

    string s = "2147483649";
    cout << stringtoInt(s) << endl;
    cout << typeid(stringtoInt(s)).name() << endl;

    return 0;
}

int stringtoInt(string s) {
    int ans = 0;
    int start = 1;
    for (int i = s.size()-1; i >= 0; i--) {
        ans = (s[i]-'0') * start + ans;
        start *= 10;
    }

    return ans;
}
