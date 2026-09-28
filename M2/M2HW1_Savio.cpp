/*
CSC 134
M2HW1 - Homework (4 questions max)
Savio
9/16/26
HOW TO USE:
- Fill in the functions for any question you answer
- uncomment those functions in main, so they run.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// COVERED in module 5, here's the basics
// List extra functions above main
// Write the full version below main
void question1();
void question2();
void question3();
void question4();



int main() {
    // Run only the questions you finish by removing the // 
    question1();
    question2();
    question3();
    question4();
    return 0;
}

 void question1() {
    // Setup Strings and integers
    int account_base = 10000;
    int choice;
    double account_subbed, account_added, withdraw_value, deposit_value;

    
    // Setup starting amount in account and greetings
    cout << "       Answer 1:" << endl;
    cout << "-------------------------" << endl;
    cout << "Hello, welcome to CSC 134 banking, what would you like to do today? " << endl;
    cout << "1: Display balance "       << endl;
    cout << "2: Deposit money "         << endl;
    cout << "3: Withdraw money "       << endl;
    cout << "4: Close atm application " << endl;
    cin  >> choice;

    //      Calculate deposits and withdrawls (for later)
    // account_subbed = account_base - withdraw_value;
    // account_added  = account_base + deposit_value;

    // if and else if statements for user choices
    if (choice == 1) {
         cout << "You have $" << account_base << " in your account, what would you like to do now? " << endl;
    }

    else if (choice == 2) {
         cout << "How much would you like to deposit?" << endl;
         cin  >> deposit_value;
         
             if (deposit_value >= 0) { 
            account_added  = account_base + deposit_value;
         cout << "You now have $" << account_added << " in your account. Thank you for using CSC 134 banking, and have a great day!" << endl; 
        } 
             else if (deposit_value < 0) { 
         cout << "Sorry, but that is an invalid number, did you mean to withdraw instead?" << endl; 
        } 

    } 

    else if (choice == 3) {
        cout << "How much would you like to withdraw?" << endl;
         cin  >> withdraw_value;
         
             if (deposit_value >= 0) { 
            account_added  = account_base + deposit_value;
         cout << "You now have $" << account_subbed << " in your account. Thank you for using CSC 134 banking, and have a great day!" << endl; 
        } 
             else if (deposit_value < 0) { 
         cout << "Sorry, but that is an invalid number, did you mean to deposit instead?" << endl; 
        } 


    }
    
    else if (choice == 4) {
        
    }


    // Formatting: Set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // Results

}

void question2() {

}

void question3() {

}

void question4() {

}