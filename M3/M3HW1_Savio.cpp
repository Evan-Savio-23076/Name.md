// CSC 134
// M3HW1 - Gold
// Savio, Z
// 10/5/2026

#include <iostream>
#include <iomanip>
using namespace std;    

// Question 1
string answer_1; 
const string YES = "yes";
const string NO = "no";


void question1() {

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
}

// Question 4
void question4() {
    cout << "Question 4" << endl;
}

int main() {
    question2();
    question3();
    question4();
    return 0;
}