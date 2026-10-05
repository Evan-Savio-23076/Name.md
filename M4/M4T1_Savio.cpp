// CSC 134
// M4T1 - Basic Loops
// Savio, Z
// 10/5/2026

#include <iostream>
using namespace std;
int main() {
    // counting loop
    int count = 1;
    while (count <= 5) {
        cout << "Hello #" << count << endl;
        count++; // increment AFTER showing the number
    }

    // table of squares (Part 2)
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    cout << endl << "Num     Num Squared" << endl;
    cout << "------------------" << endl;
    int i = MIN_NUM;
    while (i <= MAX_NUM) {
        cout << i << " " << i * i << endl;
        i++;
    }

}