#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> map = {{'a', 3}, {'b', 2}};
    map.insert({'a', 1});
    map.insert({'b', 2});

    cout << map['a'] << endl;   // 3
    cout << map['b'] << endl;   // 1
    cout << map['c'] << endl;   // 0
    cout << map.at('a') << endl;   // 3

    for (char c = 'a'; c < 'z'; c++) {
        map[c]++;
    }

    cout << map['a'];

    cout << "------------" << endl;

    for (auto& iter : map) {
        cout << " [" << iter.first << ", " << iter.second << "]";
    }
    cout << endl;


    for (auto iter = map.begin(); iter != map.end(); iter++) {
        cout << " [" << iter->first << ", " << iter->second << "]";
    }
    cout << endl;

    return 0;
}