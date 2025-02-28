//CSC 134
//M2HW1 - Gold
//Haley Stotts
//02/28/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cout << "Question 3" << endl;
    //variables
    int num_pizzas, slices_per_pizza, num_visitors;
    int total_slices, slices_needed, leftover_slices;

    //user input
    cout << "How many pizzas did you order? ";
    cin >> num_pizzas;

    cout << "How many slices per pizza? ";
    cin >> slices_per_pizza;

    cout << "How many visitors are coming? ";
    cin >> num_visitors;

    // Calculate total number of slices 
    total_slices = num_pizzas * slices_per_pizza;

    // Calculate how many slices are needed
    slices_needed = num_visitors * 3;

    // Calculate the leftover slices
    leftover_slices = total_slices - slices_needed;

    // Display the result
    if (leftover_slices >= 0) {
        cout << "You will have " << leftover_slices << " leftover slices of pizza." << endl;
    } else {
        cout << "You don't have enough pizza. You need " << -leftover_slices << " more slices." << endl;
    }

    return 0;
}
