#pragma once
#include <iostream>
#include <string>

using namespace std;

// 从键盘输入一行文本
string getline_string();
// 反转字符串
void reverse_string(string &s);
// 验证回文串
bool palindrome(string &s);

string getline_string() {
    string s;
    cout << "Enter a line of text: ";
    getline(cin, s);
    return s;
}

void reverse_string(string& s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        // char temp = s[i];
        // s[i] = s[j];
        // s[j] = temp;
        swap(s[i], s[j]);
    }
}

bool palindrome(string &s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        if (s[i] != s[j]) return false;
    }
    return true;
}

