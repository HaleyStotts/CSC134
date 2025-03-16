// CSC 134
// M3HW1 - Gold
// Haley Stotts
// March 16, 2025

// Question 2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // New variables
    string user_name;  // Customer's name
    double meal_price; // Price of the meal
    int order_type;    // 1 for dine-in, 2 for takeaway

    // Customer greeting
    cout << "Hello! What's your name? ";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << "!" << endl;

    // Ask for the price of the meal
    cout << "Please enter the price of the meal: $";
    cin >> meal_price;

    // Ask if it's dine-in or takeaway
    cout << "Please enter 1 if the order is dine-in, 2 if it is to go: ";
    cin >> order_type;

    // Constants
    const double TAX_RATE = 0.08;  // 8% tax rate
    const double TIP_RATE = 0.15;  // 15% tip rate for dine-in

    // Calculate tax
    double tax = meal_price * TAX_RATE;

    // Calculate tip (only for dine-in)
    double tip = 0;
    if (order_type == 1) {  // Dine-in
        tip = meal_price * TIP_RATE;
    }

    // Calculate total amount due
    double total_due = meal_price + tax + tip;

    // Set output format for currency
    cout << setprecision(2) << fixed;

    // Display the receipt
    cout << "\n--- Receipt ---" << endl;
    cout << "Meal Price:    $" << meal_price << endl;
    cout << "Tax:           $" << tax << endl;
    if (order_type == 1) {
        cout << "Tip:           $" << tip << endl;
    }
    cout << "Total Due:     $" << total_due << endl;

    return 0;
}
