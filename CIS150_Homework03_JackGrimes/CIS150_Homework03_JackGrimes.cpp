#include <iostream>
#include <string>//slide 56 chap 4

using namespace std;
int main() {
    string wordToGuess;
    string guess;
    int position;
    string dashes = "-----";
    cout << "Enter a word for someone to guess: ";
    cin >> wordToGuess;
    bool correctGuess;
    bool gameOver = false;

    if (wordToGuess.length() == 5) { //round 1
        wordToGuess.at(0) = tolower(wordToGuess.at(0)); //changing the word inputted to be all lower case. Helps with ignoring the case with guesses
        wordToGuess.at(1) = tolower(wordToGuess.at(1));
        wordToGuess.at(2) = tolower(wordToGuess.at(2));
        wordToGuess.at(3) = tolower(wordToGuess.at(3));
        wordToGuess.at(4) = tolower(wordToGuess.at(4));
        cout << "You have 5 guesses left. Guess a letter: ";
        cin >> guess;

        if (guess.length() == 5) {
            guess.at(0) = tolower(guess.at(0));
            guess.at(1) = tolower(guess.at(1));
            guess.at(2) = tolower(guess.at(2));
            guess.at(3) = tolower(guess.at(3));
            guess.at(4) = tolower(guess.at(4));
        }
        else if (guess.length() == 1) {
            guess.at(0) = tolower(guess.at(0)); //changing the guess to work disregarding the case.
        }
        else {
            cout << "invalid guess, run the program again! Guess either a letter, or a full word guess";
            gameOver = true;
        }
        if (guess == wordToGuess) {
            cout << "Congrats you have guess the word correctly: " << wordToGuess;
            gameOver = true;
        }
        if (!gameOver) {
            if (wordToGuess.contains) { //correct guess, switching dashes to incorporate their guess.
            
                correctGuess = true;
                position = wordToGuess.find(guess);
                cout << position;
                dashes.replace(position, 1, guess);
                cout << dashes << endl;

                cout << "You have 4 guesses left. Guess a letter: "; //round 2
                cin >> guess;

                if (guess.length() == 5) {
                    guess.at(0) = tolower(guess.at(0));
                    guess.at(1) = tolower(guess.at(1));
                    guess.at(2) = tolower(guess.at(2));
                    guess.at(3) = tolower(guess.at(3));
                    guess.at(4) = tolower(guess.at(4));
                }
                else if (guess.length() == 1) {
                    guess.at(0) = tolower(guess.at(0)); //changing the guess to work disregarding the case.
                }
                else {
                    cout << "invalid guess, run the program again! Guess either a letter, or a full word guess";
                    gameOver = true;
                }
                if (guess == wordToGuess) {
                    cout << "Congrats you have guess the word correctly: " << wordToGuess;
                    gameOver = true;
                }
                if (!gameOver) {
                    if (wordToGuess.find(guess) < wordToGuess.length()) { //correct guess, switching dashes to incorporate their guess.
                        correctGuess = true;
                        position = wordToGuess.find(guess);
                        dashes.replace(position, 1, guess);
                        cout << dashes << endl;

                        cout << "You have 3 guesses left. Guess a letter: "; //round 3
                        cin >> guess;

                        if (guess.length() == 5) {
                            guess.at(0) = tolower(guess.at(0));
                            guess.at(1) = tolower(guess.at(1));
                            guess.at(2) = tolower(guess.at(2));
                            guess.at(3) = tolower(guess.at(3));
                            guess.at(4) = tolower(guess.at(4));
                        }
                        else if (guess.length() == 1) {
                            guess.at(0) = tolower(guess.at(0)); //changing the guess to work disregarding the case.
                        }
                        else {
                            cout << "invalid guess, run the program again! Guess either a letter, or a full word guess";
                            gameOver = true;
                        }
                        if (guess == wordToGuess) {
                            cout << "Congrats you have guess the word correctly: " << wordToGuess;
                            gameOver = true;
                        }
                        if (!gameOver) {
                            if (wordToGuess.find(guess) < wordToGuess.length()) { //correct guess, switching dashes to incorporate their guess.
                                correctGuess = true;
                                position = wordToGuess.find(guess);
                                dashes.replace(position, 1, guess);
                                cout << dashes << endl;

                                cout << "You have 2 guesses left. Guess a letter: "; //round 4
                                cin >> guess;

                                if (guess.length() == 5) {
                                    guess.at(0) = tolower(guess.at(0));
                                    guess.at(1) = tolower(guess.at(1));
                                    guess.at(2) = tolower(guess.at(2));
                                    guess.at(3) = tolower(guess.at(3));
                                    guess.at(4) = tolower(guess.at(4));
                                }
                                else if (guess.length() == 1) {
                                    guess.at(0) = tolower(guess.at(0)); //changing the guess to work disregarding the case.
                                }
                                else {
                                    cout << "invalid guess, run the program again! Guess either a letter, or a full word guess";
                                    gameOver = true;
                                }
                                if (guess == wordToGuess) {
                                    cout << "Congrats you have guess the word correctly: " << wordToGuess;
                                    gameOver = true;
                                }
                                if (!gameOver) {
                                    if (wordToGuess.find(guess) < wordToGuess.length()) { //correct guess, switching dashes to incorporate their guess.
                                        correctGuess = true;
                                        position = wordToGuess.find(guess);
                                        dashes.replace(position, 1, guess);
                                        cout << dashes << endl;

                                        cout << "You have 1 guesses left. Guess a letter: "; //round 5
                                        cin >> guess;

                                        if (guess.length() == 5) {
                                            guess.at(0) = tolower(guess.at(0));
                                            guess.at(1) = tolower(guess.at(1));
                                            guess.at(2) = tolower(guess.at(2));
                                            guess.at(3) = tolower(guess.at(3));
                                            guess.at(4) = tolower(guess.at(4));
                                        }
                                        else if (guess.length() == 1) {
                                            guess.at(0) = tolower(guess.at(0)); //changing the guess to work disregarding the case.
                                        }
                                        else {
                                            cout << "invalid guess, run the program again! Guess either a letter, or a full word guess";
                                            gameOver = true;
                                        }
                                        if (guess == wordToGuess) {
                                            cout << "Congrats you have guess the word correctly: " << wordToGuess;
                                            gameOver = true;
                                        }
                                        if (!gameOver) {
                                            if (wordToGuess.find(guess) < wordToGuess.length()) { //correct guess, switching dashes to incorporate their guess.
                                                correctGuess = true;
                                                position = wordToGuess.find(guess);
                                                dashes.replace(position, 1, guess);
                                                cout << dashes << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if (wordToGuess.length() > 5) {
        cout << "Word is too big!";
    }
    else if (wordToGuess.length() < 5) {
        cout << "Word is too small!";
    }
}

