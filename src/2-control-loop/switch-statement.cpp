#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;
    cout << "Enter a score between 0 and 100: ";
    cin >> score;
    cout << score;

    switch(score / 10) {
        case 10: grade = 'A';
            break;
        case 9:  grade = 'B';
            break;
        case 8:  grade = 'C';
            break;
        case 7:  grade = 'D';
            break;
        case 6:  grade = 'F';
            break;
        default: grade = 'F';
    }
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}