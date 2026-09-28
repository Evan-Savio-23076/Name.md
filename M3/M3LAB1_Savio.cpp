// CSC 134
//
//
//

#include <iostream>
using namespace std;

// DECLARE that your functions are coming later, before main()
// after main, DEFINE your functions in full.
void chooseDoor1();
void chooseDoor2();

// the lines above tell the program that these functions will
// exist, but we have to define them later on in the file
////

// beginning of the main() method
int main() {
    int choice; // menu choice

    // ask the question
    cout << "Do you choose Door 1 or Door 2?" << endl;
    cout << "1. Choose Door #1" << endl;
    cout << "1. Choose Door #2" << endl;
    cout << "? "; // the prompt
    cin  >> choice;
    // can also say (choice == 1)
    if (1 == choice) {
        chooseDoor1();
    }
    else if (2 == choice) {
        chooseDoor2();
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
        // program ends, or we could loop around again
    }
    
    cout << "Thank you for playing!" << endl;
    return 0; // tells the computer that we finished without errors

}   // end of the main() method

// After main(), we will define all our other functions.
// (Declaring means "This function exists", we did that above)
// 