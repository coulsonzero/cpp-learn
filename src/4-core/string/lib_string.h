#ifndef CPP_STRING_H
#define CPP_STRING_H

#include <iostream>
//#include <cstdlib>
//#include <type_traits>
//#include <typeinfo>
//#include <memory>
//#include <string>
//#include <vector>
#ifndef _MSC_VER
#include <cxxabi.h>
#endif




using std::string;
using std::remove_reference, std::unique_ptr;
using std::is_const, std::is_volatile, std::is_lvalue_reference, std::is_rvalue_reference;


#define Tmp_ template <class T>
#define _cs co::str




namespace co {
    // using other name!!!
    #define type_name(T) str::_type_name(T)
    class str {
    public:
        static string &replace_all(string &src, const string &_old, const string &_new);
        Tmp_
        static string _type_name(T obj) {
            return _cs::__type_name<decltype(obj)>();
        };
    private:
        Tmp_
        static string __type_name();
    };
}



string& _cs::replace_all(string& src, const string& _old, const string& _new) {
    // 每次重新定位起始位置，防止上轮替换后的字符串形成新的_old
    for (string::size_type pos(0); pos != string::npos; pos += _new.length()) {
        if ((pos = src.find(_old, pos)) != string::npos) {
            src.replace(pos, _old.length(), _new);
        } else break;
    }
    return src;
}



Tmp_
string _cs::__type_name() {
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
    // string vector map set stack
    if (r.starts_with("std::__1::")) {
        int start = r.find("std::__1::");
        int end = r.find(", std::__1::");
        r = r.substr(start+10, end-start-10) + ">";
    }

    return r;
}


#endif //CPP_STRING_H
