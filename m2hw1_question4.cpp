//CSC 134
//M2HW1 - Gold
//Haley Stotts
//02/28/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    cout << "Question 4" << endl;

    // Declare string variables
    string school = "FTCC";
    string team = "Trojans";
    string letsGo = "Let's go ";
    string cheerOne, cheerTwo;

    // Use string concatenation to build the cheering strings
    cheerOne = letsGo + school;   // "Let's go FTCC"
    cheerTwo = letsGo + team;     // "Let's go Trojans"

    // Output the cheering messages
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;
}