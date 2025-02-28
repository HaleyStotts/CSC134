/
CSC 134
M2HW1 - Gold
Haley Stotts
02/28/2025
/
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
cout << "Question 1" << endl;
string name;
    double starting_balance, deposit, withdrawal, final_balance;
    int account_number;

    // Ask for name
    cout << "Enter your name: ";
    getline(cin, name); 

    // Ask for the starting balance
    cout << "Enter your starting account balance in dollars: $";
    cin >> starting_balance;

    // Ask for the deposit amount
    cout << "Enter deposit amount in dollars: $";
    cin >> deposit;

    // Ask for the withdrawal amount
    cout << "Enter withdrawal amount in dollars: $";
    cin >> withdrawal;

    // Generate a random account number
    srand(time(0)); // Initialize random number generator
    account_number = rand() % 1000000 + 100000; // Account number between 100000 and 999999

    // Calculate the final balance
    final_balance = starting_balance + deposit - withdrawal;

    // Display the information
    cout << fixed << setprecision(2); // Format output to show 2 decimal places
    cout << "\nAccount Information:\n";
    cout << "Name: " << name << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "Final Account Balance: $" << final_balance << endl;

    return 0;
}

