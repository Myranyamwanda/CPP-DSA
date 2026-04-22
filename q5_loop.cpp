#include <iostream>
using namespace std;

int main() {
    double x = 0;
    double y = 20;

    do {
        y = y - 4;      // Subtract 4 from y
        x = x + (2 / y); // add 2/y to  x
    } while (y >= 6);   // Repeating until y < 6

    cout << "Final value of x is: " << x << endl;

    return 0;
}