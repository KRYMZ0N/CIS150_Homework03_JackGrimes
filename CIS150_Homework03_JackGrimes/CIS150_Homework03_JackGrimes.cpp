//=========================================================
// //Author: Jack Grimes
// //Date: 10-10-23
// //Desc: Hangman game
//=========================================================

#include <iostream>
#include <string>//slide 56 chap 4

int main() {
using namespace std;
    string wordToGuess;
    string guess;
    int position;
    string dashes = "-----";
    char letter;
    cout << "Enter a word for someone to guess: ";
    cin >> wordToGuess;
    bool correctGuess;
    bool gameOver = false;

    system("CLS");

    if (wordToGuess.length() == 5) { 
        wordToGuess.at(0) = tolower(wordToGuess.at(0)); //changing the word inputted to be all lower case. Helps with ignoring the case with guesses
        wordToGuess.at(1) = tolower(wordToGuess.at(1));
        wordToGuess.at(2) = tolower(wordToGuess.at(2));
        wordToGuess.at(3) = tolower(wordToGuess.at(3));
        wordToGuess.at(4) = tolower(wordToGuess.at(4));









        cout << "You have 5 guesses left. Guess a letter: "; //round 1 (rounds are copied and pasted)
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
            cout << "invalid guess, run the program again! Guess either a letter, or a full word guess"; //fixing guesses
            gameOver = true;
        }
        if (guess == wordToGuess) {
            cout << "Congrats you have guess the word correctly: " << wordToGuess;
            gameOver = true;
        }
        if (!gameOver) {
            if (guess.at(0) == wordToGuess.at(0)) {
                correctGuess = true;


                dashes.at(0) = guess[0];

            }
            if (guess.at(0) == wordToGuess.at(1)) {
                correctGuess = true;


                dashes.at(1) = guess[0];


            }
            if (guess.at(0) == wordToGuess.at(2)) {
                correctGuess = true;

                dashes.at(2) = guess[0];



            }
            if (guess.at(0) == wordToGuess.at(3)) {
                correctGuess = true;

                dashes.at(3) = guess[0];


            }
            if (guess.at(0) == wordToGuess.at(4)) {
                correctGuess = true;
                dashes.at(4) = guess[0];

            }

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
                guess.at(0) = tolower(guess.at(0)); 
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
                if (guess.at(0) == wordToGuess.at(0)) {
                    correctGuess = true;


                    dashes.at(0) = guess[0];

                }
                if (guess.at(0) == wordToGuess.at(1)) {
                    correctGuess = true;


                    dashes.at(1) = guess[0];


                }
                if (guess.at(0) == wordToGuess.at(2)) {
                    correctGuess = true;

                    dashes.at(2) = guess[0];



                }
                if (guess.at(0) == wordToGuess.at(3)) {
                    correctGuess = true;

                    dashes.at(3) = guess[0];


                }
                if (guess.at(0) == wordToGuess.at(4)) {
                    correctGuess = true;
                    dashes.at(4) = guess[0];

                }

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
                    guess.at(0) = tolower(guess.at(0)); 
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
                    if (guess.at(0) == wordToGuess.at(0)) {
                        correctGuess = true;


                        dashes.at(0) = guess[0];

                    }
                    if (guess.at(0) == wordToGuess.at(1)) {
                        correctGuess = true;


                        dashes.at(1) = guess[0];


                    }
                    if (guess.at(0) == wordToGuess.at(2)) {
                        correctGuess = true;

                        dashes.at(2) = guess[0];



                    }
                    if (guess.at(0) == wordToGuess.at(3)) {
                        correctGuess = true;

                        dashes.at(3) = guess[0];


                    }
                    if (guess.at(0) == wordToGuess.at(4)) {
                        correctGuess = true;
                        dashes.at(4) = guess[0];

                    }

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
                        guess.at(0) = tolower(guess.at(0)); 
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
                        if (guess.at(0) == wordToGuess.at(0)) {
                            correctGuess = true;


                            dashes.at(0) = guess[0];

                        }
                        if (guess.at(0) == wordToGuess.at(1)) {
                            correctGuess = true;


                            dashes.at(1) = guess[0];


                        }
                        if (guess.at(0) == wordToGuess.at(2)) {
                            correctGuess = true;

                            dashes.at(2) = guess[0];



                        }
                        if (guess.at(0) == wordToGuess.at(3)) {
                            correctGuess = true;

                            dashes.at(3) = guess[0];


                        }
                        if (guess.at(0) == wordToGuess.at(4)) {
                            correctGuess = true;
                            dashes.at(4) = guess[0];

                        }

                        cout << dashes << endl;
                        cout << "You have 1 guess left. Guess a letter: "; //round 5
                        cin >> guess;

                        if (guess.length() == 5) {
                            guess.at(0) = tolower(guess.at(0));
                            guess.at(1) = tolower(guess.at(1));
                            guess.at(2) = tolower(guess.at(2));
                            guess.at(3) = tolower(guess.at(3));
                            guess.at(4) = tolower(guess.at(4));
                        }
                        else if (guess.length() == 1) {
                            guess.at(0) = tolower(guess.at(0)); 
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
                            if (guess.at(0) == wordToGuess.at(0)) {
                                correctGuess = true;


                                dashes.at(0) = guess[0];

                            }
                            if (guess.at(0) == wordToGuess.at(1)) {
                                correctGuess = true;


                                dashes.at(1) = guess[0];


                            }
                            if (guess.at(0) == wordToGuess.at(2)) {
                                correctGuess = true;

                                dashes.at(2) = guess[0];



                            }
                            if (guess.at(0) == wordToGuess.at(3)) {
                                correctGuess = true;

                                dashes.at(3) = guess[0];


                            }
                            if (guess.at(0) == wordToGuess.at(4)) {
                                correctGuess = true;
                                dashes.at(4) = guess[0];

                            }

                            cout << dashes << endl;

                            if (dashes != wordToGuess) { //if their final letter guess completes the word, then they should win, if not, then they should be considered incomplete
                                cout << "The word was " << wordToGuess << " Try again next time!";
                            }
                            else {
                                cout << "The word was " << wordToGuess << " Great Job, you win!";
                            }
                        }
                    }
                }
            }
        }
    }
    else if (wordToGuess.length() > 5) { //msking sure the word to guess isn't too long
        cout << "Word is too big!";
    }
    else if (wordToGuess.length() < 5) {
        cout << "Word is too small!";
    }
}

