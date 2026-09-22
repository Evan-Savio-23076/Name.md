 // CSC 134
 // M1Lab1 - The Apple Orchard
 // Savio
 // 9/22/2026
 // We're going to make the simplest possible
 // "checkout" machine.
 #include <iostream>
 #include <iomanip> // for the 2 decimal places
 using namespace std;


int main() {
     
    //Set up all the variables
    string first_name, last_name, full_name; // holds customer name
    string product = "Burgers"; // change to whatever you like
    int amount_purchased;
    double cost_each = 4.99;
    double total_cost;


    //Greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin  >> first_name;
    cout << "What's your last name? ";
    cin  >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like to buy?";
    cin  >> amount_purchased;

    // Calculate total price
    total_cost = amount_purchased * cost_each;

    // Formatting: Set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // Give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; //no errors
}