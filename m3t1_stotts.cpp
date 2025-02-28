
//CSC 134
//M3T1
//Haley Stotts
//02/28/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables for the dimensions of the rectangles
    double length1, width1, length2, width2;
    
    // Ask the user to input the dimensions of the first rectangle
    cout << "Enter the length and width of the first rectangle: ";
    cin >> length1 >> width1;

    // Validate the first rectangle's dimensions
    if (length1 <= 0 || width1 <= 0) {
        cout << "Error: Length and width must be positive numbers." << endl;
        return 1; // Exit the program if invalid input
    }

    // Ask the user to input the dimensions of the second rectangle
    cout << "Enter the length and width of the second rectangle: ";
    cin >> length2 >> width2;

    // Validate the second rectangle's dimensions
    if (length2 <= 0 || width2 <= 0) {
        cout << "Error: Length and width must be positive numbers." << endl;
        return 1; // Exit the program if invalid input
    }

    // Calculate the areas of the rectangles
    double area1 = length1 * width1;
    double area2 = length2 * width2;

    // Display the areas with proper formatting
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "The area of the first rectangle is: " << area1 << " square units" << endl;
    cout << "The area of the second rectangle is: " << area2 << " square units" << endl;

    return 0;
}