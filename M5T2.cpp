//Haley Stotts
//April 8, 2025
//CSC 134 
//M5T2

#include <iostream>
#include <math.h)
using namespace std;

// print number and result
void printResult(int number, int result) {
    cout << number << " : " << result << endl;
}
// exponential growth function
int growth(int number) {
    int result = pow((double)2, (double)number); 
    // 2 to the power
    return result; 
}
int main () {
    // for this problem,
    // model exponential growth rather than squared
    int number, result; 
    number = 1;
    while (number <= 10) {
        result = growth(number);
        printResult(number,result);
        number++; 
    }
    

}