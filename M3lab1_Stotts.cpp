//CSC 134
//M3LAB1
//Haley Stotts
//03/09/2025

#include <iostream>
using namespace std;

// Declare functions
void fight();
void run();

int main() {
    int choice;

    // Ask the user for decision
    cout << "You encounter an enemy! Do you choose to fight or run?" << endl;
    cout << "Type 1 to Fight or 2 to Run: ";
    cin >> choice;

    if (choice == 1) {
        fight();
    }
    else if (choice == 2) {
        run();
    }
    else {
        cout << "Invalid choice! The enemy attacks you while you hesitate!" << endl;
    }

    cout << "Game Over. Thanks for playing!" << endl;
    return 0;
}

// Function for choosing to fight
void fight() {
    cout << "You chose to fight!" << endl;
    cout << "You bravely engage the enemy and defeat them. You win!" << endl;
}

// Function for choosing to run
void run() {
    cout << "You chose to run!" << endl;
    cout << "You manage to escape safely, but you will never know what rewards awaited you." << endl;
}
