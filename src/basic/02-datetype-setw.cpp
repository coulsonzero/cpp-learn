/*****************************************
 * setprecision(3): 保留小数点后的位数      *
 * showpos：显示+-                        *
 * setfill('*')：填充字符                  *
 * setw(15): 设置值所占字段大小             *
 *****************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;

    cout << fixed << setprecision(3) << showpos << setfill('*');
    cout << setw(15) << left << PI << endl;     // +3.142*********
    cout << setw(15) << internal<< PI << endl;  // +*********3.142
    cout << setw(15) << right << PI << endl;    // +*********3.142

    return 0;
}
