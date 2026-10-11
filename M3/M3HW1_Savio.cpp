// CSC 134
// M3HW1 - Gold
// Savio, Z
// 10/5/2026

#include <iostream>
#include <iomanip>
 #include <cstdlib>         // for random  // copied from another asignment
 #include <ctime>           // for time()  // also copied from another asignment
using namespace std;    

// Question 1



void question1() {

    string answer_1; 
    const string YES = "yes";
    const string NO = "no";


    cout << "Question 1" << endl;
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin  >> answer_1;
    if (answer_1 == "yes" || answer_1 == "Yes" || answer_1 == "YES") {
        cout << "I’m glad you like me!" << endl;
    }
    else if (answer_1 == "no" || answer_1 == "No" || answer_1 == "NO") {
        cout << "Well, maybe you’ll learn to like me later" << endl;
    }
    else {
        cout << "If you’re not sure… that’s OK." << endl;
    }

}

// Question 2

void question2() {
    cout << "Question 2" << endl;
    string item = "Pizza";
    double item_price = 5.99;
    double tax_percent = 0.08;  // 8% is 8/100
    double tip_percent = 0.15;  // 15% is 15/100
    double tax_amount;          // tax in $
    double tip_amount;          // tip in $
    double total;               // price * tax 
    double total_sitin;         // total + tip
    int order_type;             // 1 = dine in, 2 = to go

    // Greet user and take the order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "."  << endl;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go" << endl; 
    cin  >> order_type;

    // Calculate the meal price
    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // take 8% of the item
    total = item_price + tax_amount;
    

    // Calculate the sales tax and the total price
    tip_amount = total * tip_percent; // take 15% of the item
    total_sitin = total + tip_amount;

    // Print the receipts
    if (order_type == 1) {
        cout << "Your order is dine in." << endl;
        cout << setprecision(2) << fixed;
        cout << "Thank you for shopping with us"  << endl;
        cout << "------------------------------"  << endl;
        cout << item << "\t\t$" << item_price     << endl;
        cout << "Tax" << "\t\t$" << tax_amount    << endl;
        cout << "Tip" << "\t\t$" << tip_amount    << endl;
        cout << "------------------------------"  << endl;
        cout << "Total" << "\t\t$" << total_sitin << endl;
        cout << endl;
    }
    else if (order_type == 2) {
        cout << "Your order is to go." << endl;
        cout << setprecision(2) << fixed;
        cout << "Thank you for shopping with us" << endl;
        cout << "------------------------------" << endl;
        cout << item << "\t\t$" << item_price    << endl;
        cout << "Tax" << "\t\t$" << tax_amount   << endl;
        cout << "------------------------------" << endl;
        cout << "Total" << "\t\t$" << total      << endl;
        cout << endl;
    }
    else {
        cout << "Invalid input. Please enter 1 or 2." << endl;
    }
}
// Question 3
void question3() {
    cout << "Question 3"     << endl;
    // intigers
    int choice, choice2, choice3;
      // ask the question
  cout << "Hello Traveler, there appears to be a fork in the road on you are on" << endl;
  cout << "Where on this path would you like to go?" << endl;
  cout << "1. The thorny path that leads far out of sight." << endl;
  cout << "2. The Clear path straight ahead" << endl;
  cout << "3. The path that leads to the dark forest of doom and despair and nothing good at all in any way shape or form." << endl;
  cout << "4. Turn back and go home." << endl;
  cout << "Type 1, 2, 3, or 4: " << endl;
  cin  >> choice;

  // using if, make a decision based on the user's choice
  // also the skeleton for this code is just copied and pasted from previous labs/hw

  if (1 == choice) {
  	cout << "You chose the thorny path, and you are pricked and prodded a bajillion times, leading to your demise." << endl;
    cout << "You are dead. Game over." << endl;
  }
  else if (2 == choice) {
  	cout << "You chose the most logical path, and you continue on your journey safely." << endl;
    cout << "Press 1 to continue on your journey" << endl;
    cin >> choice2;
    if (1 == choice2) {
      cout << "You continue on your journey and find a clearing with a treasure chest, but it is locked" << endl;
      cout << "1. Try to find the key in the clearing." << endl;
      cout << "2. Try lockpicking the lock" << endl;
      cout << "3. Punch the lock" << endl;
      cin >> choice3;
      if (1 == choice3) {
        cout << "You find the key and open the chest, finding a treasure trove of gold and jewels." << endl;
        cout << "You are rich! You win!" << endl;
      }
      else if (2 == choice3) {
        cout << "This lock is too difficult, Lock level: Master." << endl;
        cout << "Next time ask dogmeat. Game over." << endl;
      }
      else if (3 == choice3) {
        cout << "You punch the lock, but your hand explodes on impact." << endl;
        cout << "You are not dead but down a hand and some pride. Game over." << endl;
      }
      else {
        cout << "I'm sorry, that is not a valid choice. No more journey for you." << endl;
      }
    }
    else {
        cout << "wrong input, you do not continue on your journey." << endl;
    }
  }
  else if (3 == choice) {
  	cout << "You chose the path that leads to the dark forest of doom and despair and nothing good at all in any way shape or form." << endl;
    cout << "You don't die but you become lost. Game over." << endl;
  }
  else if (4 == choice) {
  	cout << "You chose to turn back and go home safely, like a coward." << endl;
    cout << "You are basically dead, in terms of your journey. Game over." << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

}

// Question 4
void question4() {
    cout << "Question 4" << endl;
    srand(time(0)); // current seed is the time right now
    int answer;
    int roll1 = (rand() % 6) + 1;
    int roll2 = (rand() % 6) + 1;
    int total = roll1 + roll2;
    int point; // only if you roll a point
    cout << "What is " << roll1 << " + " << roll2 << "?" << endl;
    cin >> answer;
    if (total == answer) {
        cout << "Correct!, " << roll1 << " + " << roll2 << " = " << total << endl;
    }
    else {
        cout << "WRONG! " << roll1 << " + " << roll2 << " does NOT equal " << answer << "." << endl;
    }
}

int main() {
    question1();
    question2();
    question3();
    question4();
    return 0;
}