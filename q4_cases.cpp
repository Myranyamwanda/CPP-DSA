#include <iostream>
using namespace std;

void checkCharacter(char c) {
    if (c >= 'A' && c <= 'Z') {
        cout << c << " is an uppercase letter." << endl;
    } 
    else if (c >= 'a' && c <= 'z') {
        cout << c << " is a lowercase letter." << endl;
    } 
    else {
        cout << "That is not a letter!" << endl;
    }
}

int main() {
    char userInput;
    
    cout << "Type any character: ";
    cin >> userInput;

    checkCharacter(userInput);

    return 0;
}