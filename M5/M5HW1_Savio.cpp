/* CSC 134
M3HW1 - Gold
Savio, Z
11/23/2026 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

// Integers / Doubles / Strings //

string month1, month2, month3, prev1, prev2;
double rain1, rain2, rain3, average;

bool valid_month(string month) {
    for (char &c : month) {
        c = tolower(c);
    }
    return (month == "january" || month == "february"  || month == "march"     || 
            month == "april"   || month == "may"       || month == "june"      || 
            month == "july"    || month == "august"    || month == "september" || 
            month == "october" || month == "november"  || month == "december"  );
}

string valid_month() {
    string month;
    while (true) {
        cout << "Enter Month\n";
        cin >> month;
        
        if (valid_month(month)) {
            month[0] = toupper(month[0]);
            for (int i = 1; i < month.length(); i++) {
                month[i] = tolower(month[i]);
            }
        
        if (month == prev1 || month == prev2) {
            cout << "You have already entered this month. Please enter a different month.\n";
        }
        else {
            return month;
        }
        }
        else {
            cout << "Invalid month. Please try again.\n";
        }
    }
}


void Question1() {
    cout << endl;
    cout << "Question 1\n";
    cout << endl;
    cout << "This is a simple program to calculate the rain of 3 months.\n";
    cout << endl;

month1 = valid_month();
prev1 = month1;
cout << "Enter rainfall (in inches) for " << month1 << ": ";
cin >> rain1;

month2 = valid_month();
prev2 = month2;
cout << "Enter rainfall (in inches) for " << month2 << ": ";
cin >> rain2;

month3 = valid_month();
cout << "Enter rainfall (in inches) for " << month3 << ": ";
cin >> rain3;

// Calculate average
average = (rain1 + rain2 + rain3) / 3.0;

// Output formatted to 2 decimal places
cout << fixed << setprecision(2);
cout << "\nThe average rainfall for " << month1 << ", " << month2 
        << ", and " << month3 << " is " << average << " inches.\n";
}

void Question2(){
}

void Question3(){
}

void Question4(){
}

void Question5(){
}

void Question6(){
}

int main() {
    Question1();
    Question2();
    Question3();
    Question4();
    Question5();
    Question6();

    return 0;
}
