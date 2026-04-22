#include <iostream>
using namespace std;

int main() {
    // Declaring the variables
    int numDays;
    long long totalSeconds;

    // Getting user input
    cout << "Enter the number of days: ";
    cin >> numDays;

    // Calculation 
    // 24 hours * 60 mins * 60 secs = 86400 seconds per day
    totalSeconds = (long long)numDays * 24 * 60 * 60;

    // Outputting the result
    cout << numDays << " days is equal to " << totalSeconds << " seconds." << endl;

    return 0;
}