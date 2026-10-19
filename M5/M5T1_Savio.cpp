// CSC 134
// M5T1 - Functions
// Savio
// 10/19/26
// Goal: Practice basic functions
// void, and value-returning 


#include <iostream>
using namespace std;

// Declare functions here
// Void functions
void greet();
void speak(string message);

int main() {
    
    cout << "Void Function Example" << endl;
    greet();
    speak("Hello, world!");
    speak("Another message.");

    return 0;
}

// Define functions here
void greet() {
    // greet the user: no arguments, no return out
    cout << "What's up?" << endl;
}

void speak(string message) {
    // talk to user
    // arguments: string, the message to speak
    //return: none
    // (This would be useful if I wanted to speak text to look a certain way, etc.)
    cout << message << endl;

}