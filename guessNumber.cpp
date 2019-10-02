// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Sept 2019
// This is program number guesser

#include <iostream>


int main() {
    // This will add numbers

    // Defining seed as the time using time(NULL)
    srand(time(NULL));

    // variables
    int number = rand() % 3 + 1;
    int guess;

    // Welcome statement
    std::cout << "Welcome, this is the NUMBER GUESSER." << std::endl;

    // input
    std::cout << "\nGuess the number: " << std::endl;
    std::cin >> guess;

    // process
    if (guess == number) {
        // output
        std::cout << "Good job, you got it.";
    } else {
        std::cout << "you got it wrong.";
    }
}
