// csc 134
// M2T1
// Stotts
// 02/01/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    //apple sales program
    string farm_name = "Stotts"; 
    int num_apples = 100;
    double cost_each = 0.25; //25 cents
    // new variables
    string user_name; // who is buying the apples
    int apples_to_buy; // how many apples
    // customer greeting
    cout << "Hello! What's your name? ";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << "!" << endl;

    cout << "Welcome to the " << farm_name << " apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock." << endl;
    cout << "They cost $" << cost_each << " each." << endl;
    
    cout << setprecision(2) << fixed;

    // find total price
    double total_cost = num_apples * cost_each;
    cout << "The price for all of them is: $" << total_cost << endl;



    return 0;

}
