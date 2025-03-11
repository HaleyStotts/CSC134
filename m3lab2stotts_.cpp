//CSC 134
//M3LAB2
//Haley Stotts
//03/09/2025

#include <iostream>

using namespace std;

int main() {
    // Declare variable
    int grade;

    // Prompt for input
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Determine letter grade using conditional statements
    char letterGrade;

    if (grade >= 90 && grade <= 100) {
        letterGrade = 'A';
    } else if (grade >= 80 && grade < 90) {
        letterGrade = 'B';
    } else if (grade >= 70 && grade < 80) {
        letterGrade = 'C';
    } else if (grade >= 60 && grade < 70) {
        letterGrade = 'D';
    } else if (grade >= 0 && grade < 60) {
        letterGrade = 'F';
    } else {
        cout << "Invalid grade entered. Please enter a value between 0 and 100." << endl;
        return 1; // Exit program with error code
    }

    // Display the result
    cout << "Your letter grade is: " << letterGrade << endl;

    return 0; // Exit successfully
}