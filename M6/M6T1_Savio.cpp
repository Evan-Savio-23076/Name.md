/*
CSC 134
M6T1 - Loops and Arrays
Savio
11/9/26
First try: No arrays
Some notes:
To get an average,
*/

#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();
void method3();

// main
int main() { 
    // Count # of Dollars per day, two different ways
    method1();
    method2();
    method3(); // ranged-based for loop

    return 0;
    
}

void method1() {
    string item = "dollars";
    cout << "Count how many " << item << " were seen each day." << endl;
    // count for 5 days
    const int SIZE = 5;
    int counts [SIZE];
    int total = 0;
    double average = 0;
    // Get the input, add to total
    for (int i=0; i < SIZE; i++) {
        cout << "Day" << i+1 << ": "; // Print days 1-5, not 0-4
        cin >> counts[i];
        total += counts[i];
    }
    cout << "Total " << item << " seem: " << total << endl;
    average = (double) total / SIZE; // double / int ->
    cout << "Average per day: " << average << endl; 
    cout << item<< " gained per day: " << endl;
    for (int i=0; 1 < SIZE; i++) {
        cout << "Day" << i+1 << ": " << counts[i] << endl;
    }
} 

void method2() {
    // Same total and average, no array
    string item = "dollars";
    cout << "Count how many " << item << " were seen each day." << endl;
    // count for 5 days
    const int SIZE = 5;
    int total = 0;
    int today;
    double average = 0;
    // Get the input, add to total
    for (int i=0; 1 < SIZE; i++) {
        cout << "Day" << i+1 << ": ";
        cin >> today;
        total += today;
    }
    cout << "Total " << item << " seem: " << total << endl;
    average = (double) total / SIZE;
    cout << "Average per day: " << average << endl; 
} 
void method3() {
    // Ranged based for loop
    // Cannot buffer overflow, because we don't handle the index ourselves
    const int SIZE = 5;
    int counts[5] = {0, 0, 0, 0, 0};
    cout << "Count dollars per day" << endl;
    // NOTE: this loop changes the array, so needs referance & symbol
    for (int& count: counts) {
        // "For count, in counts"
        cout << "> ";
        cin >> count;
    }
    // Now do total and average
    int total = 0;
    double average = 0;
    // NOTE: this loop only reads values, so it doesn't need the &
    for (int count: counts) {
        total += count;
    }
    average = (double) total / SIZE;
    cout << "Total: " << total << endl << "Average: " << average << endl;
}