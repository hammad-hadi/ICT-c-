#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main(){
    // Seed the random number generator with the current time
    srand(time(0)); 
    // Generate a random number between 1 and 100
    int winningNumber = rand() % 100 + 1; 
    int userGuess = 0; // Initialize the user's guess
    int attemptsCounter = 0; // Track the number of attempts
    cout << "Welcome to the Lottery Game!" << endl;
    cout << "Guess the winning number between 1 and 100." << endl;
    // Game loop
    while (userGuess != winningNumber)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attemptsCounter++;

        if (userGuess < winningNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (userGuess > winningNumber)
        {
            cout << "Too high! Try again." << endl;
        }
    }
     // Congratulate the user on guessing correctly
    cout << "Congratulations! You've guessed the winning number " << winningNumber 
         << " in " << attemptsCounter << " attempts." << endl;
return 0;
}