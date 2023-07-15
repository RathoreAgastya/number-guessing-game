
#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

void easy() {
    system("cls");
    cout << "difficulty easy\nYou have to guess a number between 1 and 50\nif you want to end the game type 100\n";
    Sleep(2000);
    srand(static_cast<unsigned int>(time(NULL)));
    int RandomNumber = rand() % 50 + 1;
    int guess;
    bool guesed = false;
    
    while (!guesed) {
        cout << "Guess number: ";
        cin >> guess;

        if (guess == RandomNumber) {
            cout << "YAYAYAY you guessed the number";
            guesed = true;
        }
        else if (guess == 100) {
            cout << "Game ending";
            guesed = true;
        }
        else {
            cout << "incorrect number. Try again\n";
        }
    }
}

void medium() {
    system("cls");
    cout << "difficulty medium\nYou have to guess a number between 1 and 100\nif you want to end the game type 101\n";
    Sleep(2000);
    srand(static_cast<unsigned int>(time(NULL)));
    int RandomNumber = rand() % 100 + 1;
    int guess;
    bool guesed = false;
    
    while (!guesed) {
        cout << "Guess number: ";
        cin >> guess;

        if (guess == RandomNumber) {
            cout << "YAYAYAY you guessed the number";
            guesed = true;
        }
        else if (guess == 101) {
            cout << "Game ending";
            guesed = true;
        }
        else {
            cout << "incorrect number. Try again\n";
        }
    }
}

void hard() {
    system("cls");
    cout << "difficulty hard\nYou have to guess a number between 1 and 300\nif you want to end the game type 303\n";
    Sleep(2000);
    srand(static_cast<unsigned int>(time(NULL)));
    int RandomNumber = rand() % 300 + 1;
    int guess;
    bool guesed = false;
    
    while (!guesed) {
        cout << "Guess number: ";
        cin >> guess;

        if (guess == RandomNumber) {
            cout << "YAYAYAY you guessed the number";
            guesed = true;
        }
        else if (guess == 303) {
            cout << "Game ending";
            guesed = true;
        }
        else {
            cout << "incorrect number. Try again\n";
        }
    }
}

int main() {
    cout << "Select difficulty(easy[1], medium[2], hard[3]): ";
    int difficulty;
    cin >> difficulty;

    if (difficulty == 1) {
        easy();
    }
    else if (difficulty == 2) {
        medium();
    }
    else if (difficulty == 3) {
        hard();
    }
    else {
        cout << "difficulty not found. TERMINATING";
    }

    return 0;
}