#include "iostream"
#include "cctype"

/**
 * isalpha()
 * isdigit()
 * isspace()
 * isupper(), toupper()
 * islower(), tolower()
 */

int main() {
    std::string s("Happy new year 2023-01-01, Good luck!");

    int letter, number, space;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            letter++;
        } else if (isdigit(s[i])) {
            number++;
        } else if (isspace(s[i])) {
            space++;
        }
    }

    std::cout << "letter: " << letter << std::endl;
    std::cout << "number: " << number << std::endl;
    std::cout << "space: " << space << std::endl;

    return 0;
}

/**
 * letter: 20
 * number: 8
 * space: 5
 */