#include "circle.h"
#include <iomanip>


using namespace std;


int main() {
    Circle c(5.2);
    cout << "     radius       area        perimeter   " << endl;
    cout << "   ---------   -----------  ------------" << endl;
    cout << setw(9) << right << c.getRadius();
    cout << setw(15) << c.getArea();
    cout << setw(13)  << c.getPerimeter();
    cout << endl;

    return 0;
}

/*
     radius       area        perimeter
   ---------   -----------  ------------
      5.2        84.9056       32.656
*/
