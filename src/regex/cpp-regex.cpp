#include <regex>
#include <iostream>
using namespace std;

int main() {
    // with wchar_t*
    const wchar_t* s = L"2014-04-02";
    wcmatch res;

    // LR"(...)" is a  raw wide-string literal. Open and close parens
    // are delimiters, not string elements.
    wregex match(LR"(\d{4}(-|/)\d{2}(-|/)\d{2})");
    if (regex_match(s, res, match)) {
        wcout << L"Matching text: " << res.str() << endl;   // Matching text: 2014-04-02
    }

    return 0;
}



