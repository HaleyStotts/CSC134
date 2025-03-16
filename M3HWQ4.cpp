// CSC 134
// M3HW1 - Gold
// Haley Stotts
// March 16, 2025

// Question 4

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialize random seed based on current time
    srand(time(0));
    
    // Generate two random single-digit numbers
    int num1 = rand() % 10; // Random number between 0 and 9
    int num2 = rand() % 10; // Random number between 0 and 9
    
    // Display the addition problem
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    
    // Get the user's answer
    int userAnswer;
    cin >> userAnswer;
    
    // Check if the user's answer is correct
    if (userAnswer == num1 + num2) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect." << endl;
    }

    return 0;
}

