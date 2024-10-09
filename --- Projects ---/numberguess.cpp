#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    int randomNumber = rand() % 100 + 1;  // Random number between 1 and 100
    int userGuess;
    int attempts = 0;
    bool isCorrect = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    // Game loop
    while (!isCorrect) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts." << endl;
            isCorrect = true;
        }
    }

    return 0;
}
