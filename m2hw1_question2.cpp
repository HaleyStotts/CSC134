//CSC 134
//M2HW1 - Gold
//Haley Stotts
//02/28/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.30;  // Updated cost per cubic foot
    const double CHARGE_PER_CUBIC_FOOT = 0.52; // Maximum charge per cubic foot 
    
    // Variables
    double length,   // The crate's length
           width,    // The crate's width
           height,   // The crate's height
           volume,   // The volume of the crate
           cost,     // The cost to build the crate
           charge,   // The customer charge for the crate
           profit;   // The profit made on the crate
    
    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;
    
    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    
    // Calculate the crate's volume, the cost to produce it, charge to customer, and profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;
    
    // Display the calculated data
    cout << "\nThe volume of the crate is " << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    
    // Check if the charge per cubic foot exceeds the management's limit
    if (charge > CHARGE_PER_CUBIC_FOOT) {
        cout << "Warning: The charge per cubic foot exceeds the management's limit of $0.52.\n";
    } else {
        cout << "The charge per cubic foot is within the acceptable limits.\n";
    }
    
    return 0;
}

    