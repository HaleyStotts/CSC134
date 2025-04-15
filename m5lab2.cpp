//Haley Stotts 
//April 13, 2025
//CSC 134
//M5 Lab2

#include <iostream>
using namespace std;

// Function Prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.

    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area

    // Get the rectangle's length.
    length = getLength();

    // Get the rectangle's width.
    width = getWidth();

    // Get the rectangle's area.
    area = getArea(length, width);

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}
// Asks the user to enter a rectangle's length,     
// and returns that value as a double.       

double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

// Asks the user to enter a rectangle's width,      
// and returns that value as a double.         

double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

// Takes length and width, calculates and returns   
// the area of the rectangle.                       

double getArea(double length, double width)
{
    return length * width;
}

// Displays the length, width, and area with labels 
// and clean formatting.                            

void displayData(double length, double width, double area)
{
    cout << "\nRectangle Data:" << endl;
    cout << "-------------------------" << endl;
    cout << "Length: " << length << endl;
    cout << "Width : " << width << endl;
    cout << "Area  : " << area << endl;
}
