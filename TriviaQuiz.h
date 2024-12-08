#pragma once
#include "Game.h"
#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

class TriviaQuiz : public Game {
public:
    TriviaQuiz() : Game("Trivia Quiz") {}

    void play() override {
        const char* questions[] = {
            "What is the capital of France?",
            "Who wrote 'Hamlet'?",
            "What is 5 * 6?"
        };

        const char* answers[] = {
            "Paris",
            "Shakespeare",
            "30"
        };

        srand(static_cast<unsigned int>(time(0)));  // Corrected typecasting
        int index = rand() % 3;

        cout << questions[index] << endl;
        char guess[50];
        cin >> guess;

        if (strcmp(guess, answers[index]) == 0) {
            cout << "Correct! You earned a Trivia Badge.\n";
        }
        else {
            cout << "Wrong! The correct answer was " << answers[index] << ".\n";
        }
    }
};




