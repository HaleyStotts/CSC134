// csc 134
// M2T1
// Haley Stotts
// 02/09/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
 // Apple store, only ask for input
 //declare variables
 string name;
 int numApples;
 double pricePerApple;
 cout << "What is your name? " << endl;
 cin >> name;
 cout << "How many apples are for sale?" << endl;
 cin >> numApples; 
 cout << "How much per apple?" << endl;
 cin >> pricePerApple; 

 cout << "Welcome to " << name << "'s apple store" << endl;
cout << "We have " << numApples << " apples in stock." << endl;
cout << "Price per apples is $" << pricePerApple << endl;
// Finish by calculating the price for the entire stock of apples
return 0;
}