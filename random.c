//
// Created by Tyrell Robbins on 1/18/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randchar() {
    //variables
    double randNum = 0;
    char randChar = ' ';

    randNum = 26 * (rand() / (RAND_MAX + 1.0)); // random number 1-26 inclusive
    randNum = randNum + 97; // add 97 to random value ==> giving us the ASCII number for that char
    randChar = (char) randNum;// cast ascii value as char

    return (randChar);
}