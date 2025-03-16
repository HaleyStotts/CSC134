// CSC 134
// M3HW1 - Gold
// Haley Stotts
// March 16, 2025

// Question 3

#include <iostream>
#include <string>

using namespace std;

int main() {
    string choice1, choice2;

    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You find yourself at a crossroads in a dense, ancient forest. There are two paths ahead." << endl;
    cout << "One path leads deeper into the forest, rumored to be home to ancient, mystical creatures. The other leads to a peaceful meadow where unicorns are said to roam." << endl;
    cout << "Do you take the left path towards the unknown forest, or the right path towards the meadow? (left/right): ";
    cin >> choice1;

    if (choice1 == "left") {
        cout << "You take the left path and soon find yourself surrounded by thick trees. The air grows cooler, and you hear the faint sound of movement." << endl;
        cout << "Suddenly, a figure steps out from behind a tree. It's a small, elegant fairy with a serious expression. She asks for your help." << endl;
        cout << "'A dangerous storm is coming,' she says. 'I need your help to find a protective charm before it arrives.'" << endl;
        cout << "Do you agree to help her find the charm, or do you refuse and continue on your own? (help/refuse): ";
        cin >> choice2;

        if (choice2 == "help") {
            cout << "You agree to help the fairy. After some time, you find the charm hidden beneath an ancient tree." << endl;
            cout << "The fairy thanks you for your bravery and gives you the charm as a token of gratitude." << endl;
            cout << "You return to the path, feeling a sense of accomplishment. You've earned the fairy's trust and a powerful amulet." << endl;
            cout << "Congratulations! You completed your quest and left the forest safely." << endl;
        } else if (choice2 == "refuse") {
            cout << "You politely refuse to help the fairy. She nods in understanding but warns you about the storm ahead." << endl;
            cout << "As you continue on your path, the storm begins to brew. The winds grow stronger, and the forest seems to close in on you." << endl;
            cout << "You find shelter, but the storm is fierce, and your journey becomes much harder. Game Over." << endl;
        } else {
            cout << "Invalid choice. Game Over!" << endl;
        }
    }
    else if (choice1 == "right") {
        cout << "You walk down the right path, the air softens, and you emerge into a beautiful meadow. In the distance, you see a group of unicorns grazing peacefully." << endl;
        cout << "One of the unicorns notices you and approaches. It's larger and more majestic than any horse you've ever seen." << endl;
        cout << "'I sense you are on a journey,' the unicorn says in a calm voice. 'Would you like to join us for a brief respite, or continue on your path alone?'" << endl;
        cout << "Do you join the unicorns for a short break, or do you decline and continue your journey? (join/continue): ";
        cin >> choice2;

        if (choice2 == "join") {
            cout << "You sit with the unicorns and enjoy the peaceful surroundings. They offer wisdom about the forest and its mysteries." << endl;
            cout << "After a while, you feel refreshed and ready to continue your journey, knowing you've learned something important." << endl;
            cout << "You thank the unicorns and resume your path with a newfound sense of clarity." << endl;
            cout << "Congratulations! You gained insight and strength from your encounter." << endl;
        } else if (choice2 == "continue") {
            cout << "You politely decline the unicorns' offer and continue on your path." << endl;
            cout << "Though the journey is quiet, you can't help but feel that you missed an opportunity to learn something valuable." << endl;
            cout << "The path ahead is uncertain, but you carry on, determined to find your way." << endl;
            cout << "Game Over!" << endl;
        } else {
            cout << "Invalid choice. Game Over!" << endl;
        }
    }
    else {
        cout << "Invalid choice. Please restart and choose 'left' or 'right'." << endl;
    }

    return 0;
}
