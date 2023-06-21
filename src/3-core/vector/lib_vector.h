#pragma once
#ifndef CPP_VECTOR_H
#define CPP_VECTOR_H

#include <vector>
#include <iomanip>

#ifdef T
    #undef T
#else
    #define __Tmp__ template <class T>
    #define __vec vector<T>
    #define __p co::vec

    #define __t T
    #define __c co
#endif

using std::cout, std::endl, std::vector, std::string;

namespace co {
class vec {
    public:
        static void print(string s);
        __Tmp__
        static void iter(__vec &vec);
        __Tmp__
        static void stats(__vec &vec);      // size, cap
        __Tmp__
        static void output(__vec &vec);     // size, value
        __Tmp__
        static void sort(__vec &vec);
        __Tmp__
        static void reverse(__vec &vec);
        __Tmp__
        static int count(__vec &vec, __t e);
        __Tmp__
        static bool is_find(__vec &vec, __t e);
        __Tmp__
        static __t max(__vec &vec);
    protected:  // ...
    private:    // ...
    __Tmp__
    friend string type_name(__t t);
    };
}



void __p::print(string s = "") {
    if (!s.empty()) s = "(" + s + "):";
    else s = "output";
    cout << "\n============ " << s << " ============" << endl;
}


__Tmp__
void __p::iter(__vec &vec) {
    cout << "[ ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
         cout << *it;
         cout << typeid(*it).name();
         cout << (it == vec.end() - 1 ? " " : ", ");
    }
    cout << "]" << endl;
}


__Tmp__
void __p::stats(__vec &vec) {
    cout << "the vector's size is: " << vec.size() << ",";
    cout << "  capacity is: " << vec.capacity() << endl;
}


__Tmp__
void __p::output(__vec &vec) {
    cout << "size: ";
    cout << std::setw(6) << std::left << vec.size();
    cout << "value: ";
    cout << std::right;
    co::vec::iter(vec);
}

__Tmp__
void __p::sort(__vec &vec) {
    std::sort(vec.begin(), vec.end());
}

__Tmp__
void __p::reverse(__vec &vec) {
    auto cmp = [&](T x, T y) -> bool {
        return x > y;
    };
    std::sort(vec.begin(), vec.end(), cmp);
}


__Tmp__
int __p::count(__vec &vec, __t e) {
    int ans = std::count(vec.begin(), vec.end(), e);
    return ans;
}

__Tmp__
bool __p::is_find(__vec &vec, __t e) {
    auto it = std::find(vec.begin(), vec.end(), 7);
    return it != vec.end();
}

__Tmp__
__t __p::max(__vec &vec) {
    return *std::max_element(std::begin(vec), std::end(vec));
}

__Tmp__
string __c::type_name(__t t) {
    string r = typeid(t).name();
    // if (r == "A3_c" || r == "A6_c" || r.starts_with( "NSt3__112")) {
    if (r == "A3_c" || r == "A6_c" || r.starts_with( "NSt3__112basic_string")) {
        return "string";
    // } else if (r.starts_with("NSt")) {
    } else if (r.starts_with("NSt3__16vector")) {
        return "vector";
    } else if (r.starts_with("P") || r.starts_with("A")) {
        return "array";
    } else {
        return r;
    }
}

#endif //CPP_VECTOR_H
