#include <iostream>
#include <cmath> // Required for pow()
using namespace std;

int main() {
    double radius, volume;
    const double PI = 3.14159; 

    cout << "Input the radius of the sphere: ";
    cin >> radius;

    // The formula is (4/3) * pi * r^3
    // pow(radius, 3) handles the exponential part
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}