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
    infinite loop, or never starts?
    bool done = false;
    while (done == false) {
    cout << "Still going...";
    }

    // counting loop
    int count = 1;
    while (count <= 16) {
    cout << "Count is: " << count << endl;
    count++; // increment AFTER showing the number
    }

  return 0;
}