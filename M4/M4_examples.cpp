/*
CSC 134
M4_examples.cpp
Savio
10/5/26
Just some practice loops
*/

#include <iostream>
using namespace std;

int main() {
    // infinite loop, or never starts?;
    bool done = true;
    while (done == false) {
    cout << "Still going...";
    }

    // counting loop
    int count = 1;
    while (count <= 16) {
    cout << "Count is: " << count << endl;
    count++; // increment AFTER showing the number
    }

    // Validation loop
    // Test - number is between 1 and 5
    bool is_valid = false;
    int number;
    while (false == is_valid) {
        cout << "Enter a number between 1-5: ";
        cin >> number;
        if (number < 1) {
            cout << "Too low!" << endl;
        } 
        else if (number > 5) {
            cout << "Too high!" << endl;
        } 
        else {
            cout << "You entered: " << number << endl;
            is_valid = true; // we're done, stops on the next loop
        }
    }

  return 0;
}