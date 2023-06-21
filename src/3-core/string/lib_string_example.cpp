#include "lib_string.h"
//#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <stack>


int main() {


    // replace_all(s, old, new)
    string s = "hello world";
    co::str::replace_all(s, "wo", "212w");  // hello 212wrld
    std::cout << s << std::endl;

    // type_name()

    // string
    std::cout << co::type_name(s) << std::endl;       // basic_string<char>
    std::cout << co::type_name("hello") << std::endl;      // char const*

    // map
    std::unordered_map<char, int> map = {{'a', 3}, {'b', 2}};
    std::cout << co::type_name(map) << std::endl;     // unordered_map<char, int>

    // set
    std::unordered_set<int> set = { 1, 2 };                     // unordered_set<int>
    std::cout << co::type_name(set) << std::endl;

    // stack
    std::stack <int> stack1;
    std::cout << co::type_name(stack1) << std::endl;  // stack<int>




    return 0;
}