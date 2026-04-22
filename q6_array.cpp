#include <iostream>
using namespace std;

int main() {
    double values[5];
    double sum = 0.0;

    //Loop for the input
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> values[i];
        sum += values[i]; // Adding to the total sum
    }

    // Calculating and displaying the average
    double average = sum / 5;
    cout << "\nThe average of the entered values is: " << average << endl;

    return 0;
}