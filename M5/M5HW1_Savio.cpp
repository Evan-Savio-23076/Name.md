/* CSC 134
M3HW1 - Gold
Savio, Z
11/23/2026 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Integers / Doubles / Strings //
string month1, month2, month3;
double rain1, rain2, rain3, average1;

void Question1() {
    bool valid_month(string month) {
        for (char &c : month) {
            c = tolower(c);
        }
        return (month == "january" || month == "february"  || month == "march"     || 
                month == "april"   || month == "may"       || month == "june"      || 
                month == "july"    || month == "august"    || month == "september" || 
                month == "october" || month == "november"  || month == "december"  );
    }
    string valid_month () {
        string month;
        while (true) {
            cout << "Enter Month\n";
            cin >> month
            
            if (valid_month(month)) {
                month[0] = toupper(month[0]);
                for (int i = 1; i < month.length(); i++) {
                    month[i] = tolower(month[i]);
                }
            return month;
            }
        cout << "Invalid month. Please try again.\n";
        }
    }
    cout << endl;
    cout << "Question 1\n";
    cout << endl;
    cout << "This is a simple program to calculate the rain of 3 months.\n";
    cout << "Please insert the name of the month, and its rainfall in inches.\n";
    cout << endl;
    
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
