#include "lib_map.h"



int main() {
    std::unordered_map<char, int> m;
    // m[k] = v
    m['a'] = 1;
    m['b'] = 2;
    m.insert({'c', 2});

    display2(m);

    // m[k]
    std::cout << m['a'] << std::endl;
    std::cout << m.at('a') << std::endl;

    // erase
    // m.erase('a');
    // iter(m);

    // contains
    std::cout << std::boolalpha;
    std::cout << (m.find('a') != m.end()) << std::endl;
    std::cout << m.contains('a') << std::endl;
    if (m.count('a')) std::cout << "has" << std::endl;

    // count
    std::cout << m.count('a') << std::endl;

    // size
    std::cout << m.size() << std::endl;
    std::cout << m.empty() << std::endl;








    return 0;
}

