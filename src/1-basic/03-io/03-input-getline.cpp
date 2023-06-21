#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cout << "Enter a line: ";
    getline(cin, s);
    cout << "s: " << s << endl;

    return 0;
}

/*
Enter a line: hello world !
s: hello world !
*/