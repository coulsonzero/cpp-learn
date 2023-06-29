#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "hello";
    cout << name.size() << endl;        // 5  STL
    cout << name.length() << endl;      // 5  C
    cout << name.capacity() << endl;    // 22

    cout << boolalpha << name.empty() << endl;   // false
    cout << name.c_str() << endl;       // "hello"
    cout << name.data() << endl;        // "hello"

    cout << name[2] << endl;               // 'l'
    cout << name.at(2) << endl;         // 'l'
    cout << name.substr(1,4) << endl;      // "ello"
    cout << name.find('l', 0) << endl;     // 2
    cout << name.find('M', 0) << endl;     // 18446744073709551615: not found!
    cout << name.rfind('l', -1) << endl;   // 3
    cout << name.rfind('m', -1) << endl;   // 18446744073709551615: not found!
    cout << name.find_first_of('l') << endl;   // 2
    cout << name.find_last_of('l') << endl;   // 3

    // string <-> int
    cout << stoi("12") << endl;        // 12
    cout << to_string(10) << endl;     // 10

    // iter
    string s("Hello World!");
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
    }
    cout << endl;

    for (auto c : s) {
        cout << c << " ";
    }
    cout << endl;

    for (auto &c : s) {
        c = toupper(c);
    }
    cout << s;

    // reverse
    reverse(s.begin(), s.end());
    cout << s << endl;

    s.erase(1, 4);
    cout << s << endl;  // !

    // append
    string temp = "hello";
    temp.append(" world");
    cout << temp << endl;   // hello world

    return 0;
}
