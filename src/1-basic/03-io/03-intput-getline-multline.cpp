#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cout << "Enter a mult-line: " << endl;
    // getline(cin, s);        // 当读取到'\n'停止
    getline(cin, s, '$');   // 当读取到字符'$'停止
    cout << "s: " << s << endl;

    return 0;
}

/*
1 hello world !
2 welcome to here.
3 pratice more ...
*/
