#ifndef _VECTOR
#define _VECTOR
#include <iostream>

namespace co {
class vector {
    private:
        int __size__;
        int* vector_base;
    public:
        // co::vector;
        vector() {
            std::cout << "constructor" << std::endl;
            __size__ = 0;
            vector_base = new int[__size__];
        };
        ~vector() {
            std::cout << "destructor" << std::endl;
            __size__ = 0;
        };
        // co::vector vec2(6);
        vector(int n) {
          __size__ = n;
          vector_base = new int[__size__];
        };
        // co::vector vec3 = {1, 2, 3, 4};
        // co::vector vec4{1, 2, 3, 4};
        vector(std::initializer_list<int> __il) {
            vector_base = new int[0];
            for (auto it = __il.begin(); it != __il.end(); ++it) {
                push_back(*it);
            }
        };
        vector& operator=(std::initializer_list<int> __il) {
            clear();
            for (auto it = __il.begin(); it != __il.end(); ++it) {
                push_back(*it);
            }
            return *this;
        };

        int size() {
            return __size__;
        }

        void push_back(int x) {
            vector_base[__size__++] = x;
        }
        void pop_back() {
            --__size__;
        }
        void clear() {
            __size__ = 0;
            vector_base = new int[__size__];
        }
        void print() {
            if (__size__ == 0) {
                std::cout << "vector is empty" << std::endl;
                 return;
            }

            std::cout << "[ ";
            for (int i = 0; i < __size__; ++i) {
                std::cout << vector_base[i] << " ";
            }
            std::cout << "]" << std::endl;
        }
    };

}


//int main() {
//    vector vec;
//    vec.push_back(1);
//    vec.push_back(3);
//    vec.push_back(5);
//
//    std::cout << vec.size() << std::endl;     // 3
//    vec.print();        // [ 1 3 5 ]
//
//
//    return 0;
//}

#endif //_VECTOR