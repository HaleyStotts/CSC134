// Haley Stotts
// March 27, 2025
// CSC 134
// M4 LAB 1

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int height, width;

    // Get height and width from the user
    cout << "Enter the height of the block: ";
    cin >> height;

    cout << "Enter the width of the block: ";
    cin >> width;

    // Outer loop to print each row
    for (int i = 0; i < height; i++) {
        // Inner loop to print each asterisk in a row
        for (int j = 0; j < width; j++) {
            cout << "* ";  
        }
        cout << endl;  
    }

    return 0;
}
