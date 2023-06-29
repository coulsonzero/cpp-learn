#include "vector.h"
//#include <iostream>


int main() {
    std::cout << "======= vector example =======" << std::endl;

    co::vector vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(5);
    std::cout << vec.size() << std::endl;     // 3
    vec.print();        // [ 1 3 5 ]

//    co::vector vec2(6);     // [ 0 0 0 0 0 0 ]
//    vec2.print();

    co::vector vecCopy(vec);    // [1, 3, 5]
    vecCopy.print();


    // 6-class value init
//    co::vector vec3 = {1, 2, 3, 4};
//    vec3.print();
//
//    co::vector vec4{1, 2, 3, 4};
//    vec4.print();

    return 0;
}
