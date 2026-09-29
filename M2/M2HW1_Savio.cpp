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
     int account_base = 10000;    // Base bank value
     int choice, yesno, Y, y, n, N; 
     string name;                           
     int account_subbed, account_added;    
     double deposit_value;
     double withdraw_value;                        
    
     // Setup greetings
     cout << "Please input your name" << endl;
     cin >> name;


     // Main interface
     answer_1:
     cout                                << endl;
     cout << "       Answer 1:"          << endl;
     cout << "-------------------------" << endl;
     cout << "   Hello " << name << ","  << endl;
     cout << "welcome to CSC 134 banking"<< endl;
     cout << "what would you like to do?"<< endl;
     cout << "1: Display balance "       << endl;
     cout << "2: Deposit money "         << endl;
     cout << "3: Withdraw money "        << endl;
     cout << "4: Close atm application " << endl;
     cin  >> choice;

     // Calculate deposits and withdrawls (for later)
     // account_subbed = account_base - withdraw_value;
     // account_added  = account_base + deposit_value;

     // if and else if statements for user choices
      if (choice == 1) {
         cout << "You have $" << account_base << " in your account, now, what would you like to do now? " << endl;
         goto answer_1;
     }
     else if (choice == 2) {
         cout << "How much would you like to deposit?" << endl;
         cout << "$";
         cin  >> deposit_value;
         
         if (deposit_value >= 0) { 
             account_added  = account_base + deposit_value;
             cout << "You now have $" << account_added << " in your account. Thank you for using CSC 134 banking, and have a great day!" << endl; 
        } 
         else if (deposit_value < 0) { 
             cout << "Sorry, but that is an invalid number, returning to main interface";
             goto answer_1;    
        } 
     } 

     else if (choice == 3) {
         cout << "How much would you like to withdraw?" << endl;
         cout << "$";
         cin  >> withdraw_value;
         
         if (withdraw_value >= 0) { 
             account_subbed  = account_base - withdraw_value;
             cout << "You now have $" << account_subbed << " in your account. Thank you for using CSC 134 banking, and have a great day!" << endl; 
        } 
         else if (withdraw_value < 0) { 
             cout << "Sorry, but that is an invalid number, returning to main interface";
             goto answer_1;    
        } 
     }
    
     else if (choice == 4) {
        cout << endl;
     }
     
     else { cout << "It's 1,2,3, or 4. Please try again please" << endl;
         
     }
     return;      // to stop runaway stuff or bugs and whatnot i guess
   
     //                            Results

    // So i know i could do a lot more when it comes to this, i could make all paths return to answer_1 so it could actually save deposits and withdrawls,
    // random variation for the starting money, more precise money via decimals for coins, etc.
    // I think I should just stop though so you need not to inspect over 100 lines of code for 1 problem

 }
 
 void question2() {

    // Declare constants and variables
    const double COST_PER_CUBIC_FOOT = 0.30;    //(Material & fabrication cost per ci ft, our cost to make)
    const double CHARGE_PER_CUBIC_FOOT = 0.52;  // (billed invoice amount per cu ft, customer cost)
    // Variables describing the crate
    double length, width, height;               // you can declare multiple of same type at once
    double volume;                              // V = 1 * w * h, in cubic ft
    double crate_cost;                          // price to make the crate, USD per cubic ft
    double crate_charge;                        // price we sell it for, USD per cubic ft
    double profit;                              // charge - cost

    // Get the dimensions of the crate
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Please enter the crate dimenstions." << endl;
    cout << "Crate length:  ";
    cin  >> length;
    cout << "Crate width:   ";
    cin  >> width;
    cout << "Crate height:  "; 
    cin  >> height;

    // Calculate the volume (everything else depends on this value)
    volume = length * width * height;           // cubic feet

    // Calculate price and cost
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    // Calculate profit (price - cost)
    profit = crate_charge - crate_cost; // What they pay us, minus what we spent

    // Display results to user
    cout << setprecision(2) << fixed;    // 2 decimals for all the values
    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft." << endl;
    cout << "Is volume: " << volume << " cubic ft. " << endl;
    cout << endl;
    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl;
}

 void question3() { 
    
     // set up intigers
     int total_pizzas, total_guests, total_slices;
     int eaten_slices, slice_per_pizza, leftovers;
   
     // actual code
     cout << endl;
     cout << endl;
     cout << endl;
     cout << "How mnay guests are coming to the party?" << endl;
     cin  >> total_guests;
     cout << "How many slices are in the pizza?" << endl;
     cin  >> slice_per_pizza;
     cout << "And how many pizza's are being ordered?" << endl;
     cin  >> total_pizzas;

     // calculations
     eaten_slices = total_guests * 3;
     total_slices = slice_per_pizza * total_pizzas; 
     leftovers = total_slices - eaten_slices;

     if (leftovers < 0) {
         cout << "You have 0 leftover slices remaining, and some go hungry" << endl;
     }   
     else if (leftovers == 0) {
         cout << "You have 0 leftover slices remaining" << endl;
     }  
     else {
         cout << "You have " << leftovers << " remaining" << endl;
     }
     cout << endl;
     cout << endl;
     cout << endl;
 }

 void question4() {
     
     //strings
     string letsGo, school, team, cheerOne, cheerTwo;

     // "calculations"
     letsGo   = "Let's go ";
     school   = "FTCC";
     team     = "Trojans";
     cheerOne = letsGo + school;
     cheerTwo = letsGo + team;
     
     //code
     cout << cheerOne << endl;
     cout << cheerOne << endl; 
     cout << cheerOne << endl;
     cout << cheerTwo << endl;

 }