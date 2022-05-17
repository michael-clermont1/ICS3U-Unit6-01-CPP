// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program finds the average of arrays

#include <iostream>
#include <random>

int main() {
    // this function finds the average of arrays
    int randomNumbers[10];
    int randomNumber;
    double numberAverage;
    int counter3;
    int arrSize = sizeof(randomNumbers)/sizeof(randomNumbers[0]);

    // process & output
    for (int counter = 0; counter < 10; counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);
        randomNumbers[counter] = randomNumber;
        std::cout << "The random number is: "
        << randomNumber << "." << std::endl;
    }
    for (int counter2 = 0; counter2 < arrSize; counter2++) {
        numberAverage = numberAverage + randomNumbers[counter2];
    }
    numberAverage = numberAverage / arrSize;
    std::cout << "\nThe average is " << numberAverage << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
