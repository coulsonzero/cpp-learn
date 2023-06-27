#include <iostream>
#include <vector>
#include "lib_vector.h"

using std::vector, std::string;
using co::vec;

int main() {
    vector<int> v1;                      // size:0,  no values.
    vector<int> v = {1, 2, 3};         // size: 3     cap: 3     value: [1, 2, 3]
    vector<int> v2(10);              // size:10, value:0
    vector<int> v3(10, 42);       // size:10, value:42
    vector<int> v4{10};                  // size:1,  value:10
    vector<int> v5{10, 42};              // size:2,  value:10, 42


    vector<string> v6{10};           // size:10, value:""
    vector<string> v7{10, "hi"};  // size:10, value:"hi"



    vec::output(v1);
    vec::output(v2);
    vec::output(v3);
    vec::output(v4);
    vec::output(v5);
    vec::output(v6);
    vec::output(v7);



    return 0;
}