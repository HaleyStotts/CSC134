// CSC 134
// M3HW1 - Gold
// Haley Stotts
// March 16, 2025

// Question 1
#include <iostream>
#include <string>

int main() {
    std::string response;

    // Greet the user
    std::cout << "Hello, I’m a C++ program!" << std::endl;
    std::cout << "Do you like me? Please type yes or no." << std::endl;

    // Get user input
    std::cin >> response;

    // Respond based on input
    if (response == "yes") {
        std::cout << "That’s great! I’m sure we’ll get along." << std::endl;
    } else if (response == "no") {
        std::cout << "Well, maybe you’ll learn to like me later." << std::endl;
    } else {
        std::cout << "If you’re not sure… that’s OK." << std::endl;
    }

    return 0;
}
