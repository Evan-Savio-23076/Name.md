/* 
C134
M5T2
With a partner, (Zackery Savio & google's Ai), write a C++ program that prints the numbers 1 to 10
and their squares, using one value-tasurning function and one void function.
*/

#include <iostream>
using namespace std;

// Prototypes: Declare functions here, define them under main.
int square(int num);                               // Does
void printAnswerLine(int number, int squared);     // prints a full line of the table

int main() {
    cout << "Table of Squares Program" << endl;
    cout << "-----------------------------" << endl;

    // loop from 1-10
    for (int i = 1; i <= 10; ++i) {
        int squaredvalue = square(i);
        printAnswerLine (i, squaredvalue);
    }

    return 0;
}

// Define functions here.
int square(int num) {
    // Does the math -- input, an integer, and output, that integer squared.
    return num * num;
}

void printAnswerLine(int number, int squared) {
    // Prints a full line of the table of squares.
    // example output:
    // 3        9
    cout << number << "\t" << "squared is" << "\t" << squared << endl;
}