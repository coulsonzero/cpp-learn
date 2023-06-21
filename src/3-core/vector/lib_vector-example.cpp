#include <iostream>
#include <vector>
#include "lib_vector.h"

using co::vec;


int main() {
    std::vector nums = { 1, 7, 2, 5, 3, 7, 0 };

    vec::print();
    vec::iter(nums);
    vec::stats(nums);

    std::vector<int> nums2;
    vec::print("iter-stats");
    vec::iter(nums2);
    vec::stats(nums2);

    vec::sort(nums);
    vec::print("sort");
    vec::iter(nums);

    vec::reverse(nums);
    vec::print("reverse");
    vec::iter(nums);


    vec::print("count");
    cout << vec::count(nums, 7) << endl;

    vec::print("find (bool)");
    cout << std::boolalpha << vec::is_find(nums, 0) << endl;

    vec::print("std::find");
    auto it = std::find(nums.begin(), nums.end(), 7);
    cout << std::boolalpha << (it != nums.end()) << endl;     // 0(false) 1(true)
    cout << *it << endl;

    /*
    vec::print("type_name");
    cout << co::type_name(nums) << endl;    // vector
    string s1 = "hello";
    cout << co::type_name(s1) << endl;      // string
    cout << co::type_name("as") << endl;    // array: error!
    string s2 = "as";
    cout << co::type_name(s2) << endl;      // string
    cout << typeid("as").name() << endl;       // A3_c
    */

    return 0;
}