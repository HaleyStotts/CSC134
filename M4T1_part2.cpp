// Haley Stotts
// March 16, 2025
// CSC 134
// M4T1

// Part 2

#include <iostream>
using namespace std;

int main() {
    int num = 1; // Start from 1

    cout << "Number\tSquare" << endl; // Table header
    cout << "-----------------" << endl;

    while (num <= 10) { // Loop from 1 to 10
        cout << num << "\t" << (num * num) << endl;
        num++; // Increment num
    }

    return 0;
}
