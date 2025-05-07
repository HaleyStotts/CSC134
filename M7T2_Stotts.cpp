//Haley Stotts
//May 3, 2024
//CSC 134
//M7T1

#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    void setWidth(double w) {
        width = w;
    }

    void setLength(double len) {
        length = len;
    }

    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    double getArea() const {
        return width * length;
    }
};

int main() {
    Rectangle box;
    double boxWidth, boxLength;

    cout << "Enter the width: ";
    cin >> boxWidth;
    while (boxWidth <= 0) {
        cout << "Width must be a positive number. Try again: ";
        cin >> boxWidth;
    }

    cout << "Enter the length: ";
    cin >> boxLength;
    while (boxLength <= 0) {
        cout << "Length must be a positive number. Try again: ";
        cin >> boxLength;
    }

    box.setWidth(boxWidth);
    box.setLength(boxLength);

    cout << "Area: " << box.getArea() << endl;
    return 0;
}