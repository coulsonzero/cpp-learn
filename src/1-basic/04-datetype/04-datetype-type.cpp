/*
#include <cstdlib>
#include <iostream>
#include <type_traits>
#include <typeinfo>
#include <memory>
#include <string>
#ifndef _MSC_VER
#include <cxxabi.h>
#endif

#include <vector>

using namespace std;


string& replace_all(string& src, const string& old_value, const string& new_value) {
    // 每次重新定位起始位置，防止上轮替换后的字符串形成新的old_value
    for (string::size_type pos(0); pos != string::npos; pos += new_value.length()) {
        if ((pos = src.find(old_value, pos)) != string::npos) {
            src.replace(pos, old_value.length(), new_value);
        } else break;
    }
    return src;
}

template <class T>
string type_name() {
    typedef typename remove_reference<T>::type TR;
    unique_ptr<char, void (*)(void *)> own(
    #ifndef _MSC_VER
            abi::__cxa_demangle(typeid(TR).name(), nullptr, nullptr, nullptr),
    #else
            nullptr,
    #endif
            free);
    string r = own != nullptr ? own.get() : typeid(TR).name();
    if (is_const<TR>::value)
        r += " const";
    if (is_volatile<TR>::value)
        r += " volatile";
    if (is_lvalue_reference<T>::value)
        r += "&";
    else if (is_rvalue_reference<T>::value)
        r += "&&";

    if (r.starts_with("std::__1::basic_string<char"))
        if (r.ends_with("]"))  {
            r = "string " + r.substr(r.find_first_of("]")-2);
        } else {
            r = "string";
        }
    else if (r.starts_with("std::__1::vector")) {
        int start = r.find("std::__1::");
        int end = r.find(", std::__1::");
        r = r.substr(start+10, end-start-10) + ">";
        replace_all(r, "std::__1::", "");
        replace_all(r, "basic_string", "string");
    }



    return r;
}

template <class T>
string typeName(T obj) {
    return type_name<decltype(obj)>();
}

int main() {
    int a = 10;
    cout << typeName(a) << endl;        // int

    string s1 = "hello";
    cout << typeName(s1) << endl;  // string

    vector<int> v1 = {1,2,3};
    cout << typeName(v1) << endl;  // vector<int>


    return 0;
}

void example() {
    int a = 1;
    const int &b = a;
    cout << type_name<decltype(b)>() << endl;   // int const&
    cout << type_name<decltype(a)>() << endl;   // int

    short i1 = 0;
    int i2 = 12;
    long i3 = 1231387384L;
    unsigned int ui1 = -12;

    cout << type_name<decltype(i1)>() << endl;      // short
    cout << type_name<decltype(i2)>() << endl;      // int
    cout << type_name<decltype(i3)>() << endl;      // long
    cout << type_name<decltype(ui1)>() << endl;     // unsigned int

    double d1 = 3.14;
    float f1 = 3.14f;

    cout << type_name<decltype(d1)>() << endl;      // double
    cout << type_name<decltype(f1)>() << endl;      // float

    char c1 = 'd';
    char c2 = '\n';

    cout << type_name<decltype(c1)>() << endl;      // char
    cout << type_name<decltype(c2)>() << endl;      // char

    string s1 = "hello";
    cout << type_name<decltype(s1)>() << endl;      // std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >

    int a1[] = {1,2,3};
    char a2[] = {'a', 'f'};
    string a3[] = {"sa", "fs"};

    cout << type_name<decltype(a1)>() << endl;  // int [3]
    cout << type_name<decltype(a2)>() << endl;  // char [2]
    cout << type_name<decltype(a3)>() << endl;  // std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > [2]

    vector<int> v1 = {1,2,3};
    vector<double> v2 = {1.1, 2.3, 6.7};
    vector<char> v3 = {'a', 'c'};
    vector<string> v4 = {"as", "qwqw"};

    cout << type_name<decltype(v1)>() << endl;  // std::__1::vector<int, std::__1::allocator<int> >
    cout << type_name<decltype(v2)>() << endl;  // std::__1::vector<double, std::__1::allocator<double> >
    cout << type_name<decltype(v3)>() << endl;  // std::__1::vector<char, std::__1::allocator<char> >
    cout << type_name<decltype(v4)>() << endl;  // ...
}
 */ // type


// lib_string.h