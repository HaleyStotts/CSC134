// Haley Stotts
// April 6, 2025
// CSC 134
// M4HW1 Gold 

#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "Enter a number from 1 to 12: ";
        cin >> number;

        if (number < 1 || number > 12) {
            cout << "Invalid input. Please try again." << endl;
        }

    } while (number < 1 || number > 12);

    
    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }

    return 0;
}

