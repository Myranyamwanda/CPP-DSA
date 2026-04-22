#include <iostream>
using namespace std;

// Function to find area
double getArea(double s) {
    return s * s;
}

// Function to find perimeter
double getPerimeter(double s) {
    return 4 * s;
}

int main() {
    double sideLength;

    cout << "Enter the length of the square: ";
    cin >> sideLength;

    // Calling the functions and displaying results
    cout << "Area: " << getArea(sideLength) << endl;
    cout << "Perimeter: " << getPerimeter(sideLength) << endl;

    return 0;
}