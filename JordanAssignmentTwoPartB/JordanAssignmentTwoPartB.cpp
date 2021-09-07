// JordanLabTwoPartB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>




using namespace std;
int main()
{
    
    string startupMessage = "I'm thinking of a number between 1 and 100 ... \n";
    string guessANumber = "Please guess a number: \n";
    string highMessage = " is too high.\n\n";
    string lowMessage = " is too low.\n\n";
    string congratulationsMessage = "\nCongratulations! You guessed the number in ";
    string invalidMessage = "Invalid please try again";
    bool guessing = true;
    int guess;
    int counter = 0;

    srand(time(0));
    int random = 1 + rand() % (100 - 1 + 1);

    while (guessing) {
        cout << startupMessage;
        cout << guessANumber;
        cin >> guess;
        if (guess == random) {
            counter++;
            guessing = false;
        }
        else if (guess < random) {
            counter++;
            cout << to_string(guess) + lowMessage;
        }
        else if (guess > random) {
            counter++;
            cout << to_string(guess) + highMessage;
        }
        else {
            cout << "Invalid please try again";
        }
    }

    cout << congratulationsMessage << counter << " guess(es)";

}




