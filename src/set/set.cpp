#include <iostream>
#include <unordered_set>

using namespace std;

void print_set(const unordered_set<char>& set);

int main() {
    // unordered_set<char> set = {'a', 'b'};
    std::unordered_set<int> theUnorderedSet = { 1, 2 };

    std::cout << std::boolalpha; // so booleans show as 'true' or 'false'
    std::cout << theUnorderedSet.contains(2) << '\n';   // true
    std::cout << theUnorderedSet.contains(3) << '\n';   // false


    cout << __cplusplus << endl;    // 2020-02

    return 0;
}

void print_set(const unordered_set<char>& set) {
    for (auto& iter : set) {
        cout << "[" << iter << "] ";
    }
    cout << endl;
}




