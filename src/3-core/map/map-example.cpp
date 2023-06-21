#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool is_ogram(string s);

int main() {
    cout << boolalpha << is_ogram("turbluence") << endl;    // false, has multiple "u" and "e"
    cout << boolalpha << is_ogram("hello") << endl;         // false, has multiple "l"
    cout << boolalpha << is_ogram("hi jone") << endl;       // true,  hasn't multiple letter

    return 0;
}

bool is_ogram(string s) {
    unordered_map<char, int> m;
    for (auto& c : s) {
        if (m[c] > 0) return false;
        m[c]++;
    }
    return true;
}
