#include <iostream>
#include <vector>
using namespace std;

void example();
template<class T>
string typeName(T t);

int main() {
    short i1 = 0;
    int i2 = 12;
    long i3 = 1231387384L;
    unsigned int ui1 = -12;

    double d1 = 3.14;
    float f1 = 3.14f;

    char c1 = 'd';
    char c2 = '\n';

    string s1 = "hello";

    int a1[] = {1,2,3};
    char a2[] = {'a', 'f'};
    string a3[] = {"sa", "fs"};

    vector<int> v1 = {1,2,3};
    vector<double> v2 = {1.1, 2.3, 6.7};
    vector<char> v3 = {'a', 'c'};
    vector<string> v4 = {"as", "qwqw"};

    cout << typeName(i1) << endl;   // s
    cout << typeName(i2) << endl;   // i
    cout << typeName(i3) << endl;   // l
    cout << typeName(ui1) << endl;  // j

    cout << typeName(d1) << endl;   // d
    cout << typeName(f1) << endl;   // f

    cout << typeName(c1) << endl;   // c
    cout << typeName(c2) << endl;   // c

    cout << typeName(s1) << endl;   // string
    // cout << typeid(s1).name() << endl;   // NSt3...
    // cout << typeid("hello").name() << endl;   // A6_c
    // cout << type("asasa").name() << endl;     // A3_c

    cout << typeName(a1) << endl;   // v
    cout << typeName(a2) << endl;   // v
    cout << typeName(a3) << endl;   // v

    cout << typeName(v1) << endl;   // v
    cout << typeName(v2) << endl;   // v
    cout << typeName(v3) << endl;   // v
    cout << typeName(v4) << endl;   // v

//    example();

    return 0;
}

void example() {
//    vector<int> nums = {1, 2, 3, 4};

    std::cout << typeid(12).name() << std::endl;              // i
    std::cout << typeid(11212121212L).name() << std::endl;    // l
    std::cout << typeid(3.14).name() << std::endl;            // d
    std::cout << typeid(3.14f).name() << std::endl;           // f
    std::cout << typeid("hello").name() << std::endl;         // A6_c
    std::cout << typeid(new int[3]{1,2,3}).name() << std::endl;         // Pi

    vector<int> nums = {1, 2, 3};
    std::cout << typeid(nums).name() << std::endl;     // NSt3__16vectorIiNS_9allocatorIiEEEE
    std::cout << typeid(nums[0]).name() << std::endl;  // i
    vector<string> s = {"aa", "bb"};
    std::cout << typeid(s).name() << std::endl;        // NSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEE
    std::cout << typeid(s[0]).name() << std::endl;     // NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
    vector<char> cc = {'a', 'v'};
    std::cout << typeid(cc).name() << std::endl;       // NSt3__16vectorIcNS_9allocatorIcEEEE

    int a[] = {1,2,3};
    string b[] = {"ff", "sa"};
    char c[] = {'a', 'v'};
    std::cout << typeid(a).name() << std::endl;     // A3_i
    std::cout << typeid(b).name() << std::endl;     // A2_NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
    std::cout << typeid(c).name() << std::endl;     // A2_c


}

template<class T>
string typeName(T t) {
    string r = typeid(t).name();
    if (r == "A6_c" || r.starts_with( "NSt3__112")) {
        return "string";
    } else if (r.starts_with("NSt")) {
        return "vector";
    } else if (r.starts_with("P") || r.starts_with("A")) {
        return "array";
    } else {
        return r;
    }
}

