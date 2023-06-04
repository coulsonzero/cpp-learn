#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startDay, dayInMonth;
    do {
        cout << "Enter the number of days in the month(28-31): ";
        cin >> dayInMonth;
    } while (dayInMonth < 28 || dayInMonth > 31);

    do {
        cout << "Enter start day(0 to 6): ";
        cin >> startDay;
    } while (startDay < 0 || startDay > 6);
    cout << endl;
    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
    cout << "--- --- --- --- --- --- ---" << endl;
    int col = 1;
    for (int space = 1; space < startDay; space++) {
        cout << "    ";
        col++;
    }
    for (int day = 1; day <= dayInMonth; day++) {
        cout << setw(3) << day << " ";
        col++;
        if (col > 7) {
            cout << endl;
            col = 1;
        }
    }

    return 0;
}

/*
Enter the number of days in the month(28-31): 31
Enter start day(0 to 6): 1

Sun Mon Tue Wed Thr Fri Sat
--- --- --- --- --- --- ---
  1   2   3   4   5   6   7
  8   9  10  11  12  13  14
 15  16  17  18  19  20  21
 22  23  24  25  26  27  28
 29  30  31
 */