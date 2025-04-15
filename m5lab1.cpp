//Haley Stotts
//CSC 134
//April 13,2025
//M5 Lab 1

#include <iostream>
using namespace std;


// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_basement();
void choice_attic();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0;
}

void main_menu() {
  int choice;
  cout << "\nMain Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  cin >> choice;

  if (choice == 1) {
    choice_front_door();
  } else if (choice == 2) {
    choice_back_door();
  } else if (choice == 3) {
    choice_go_home();
  } else if (choice == 4) {
    cout << "Ok, quitting game" << endl;
    return;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    main_menu();
  }
}

// STORY PATHS

void choice_front_door() {
  cout << "\nYou try the front door. It's locked, but you hear a faint whisper inside..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;

  if (choice == 1) {
    choice_back_door();
  } else if (choice == 2) {
    choice_go_home();
  } else {
    cout << "Not a valid option. Returning to main menu.\n";
    main_menu();
  }
}

void choice_back_door() {
  cout << "\nYou sneak around to the back and find an open basement window!" << endl;
  cout << "Do you:" << endl;
  cout << "1. Climb into the basement" << endl;
  cout << "2. Knock on the back door" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;

  if (choice == 1) {
    choice_basement();
  } else if (choice == 2) {
    cout << "You knock. No answer... but the door creaks open by itself. Spooky!" << endl;
    choice_attic();
  } else {
    cout << "Invalid choice. Back to the menu you go!" << endl;
    main_menu();
  }
}

void choice_go_home() {
  cout << "\nYou decide this spooky adventure isn't worth it and go home to eat cookies and watch Netflix." << endl;
  cout << "Sometimes, safety is the best choice!" << endl;
}

void choice_basement() {
  cout << "\nYou crawl into the dark basement. It's cold and smells like old books." << endl;
  cout << "A glowing object sits on a dusty table. It's... a magical orb!" << endl;
  cout << "You take it and feel a surge of energy. You're now the protector of the haunted house!" << endl;
}

void choice_attic() {
  cout << "\nYou walk up the stairs and enter the attic. A cat stares at you, then speaks: 'You passed the test.'" << endl;
  cout << "You’re granted a lifetime of good luck and a ghostly friend named Casper." << endl;
}
