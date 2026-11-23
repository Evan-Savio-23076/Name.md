/* CSC 134
M3HW1 - Gold
Savio, Z
11/23/2026 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
using namespace std;

// Integers / Doubles / Strings / Variables / Functions //

    // Variables for Question 1
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
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Enter Month\n";
        cout << endl;
        cin >> month;
        cout << endl;

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
double get_rainfall(const string& month) {
    double rain;
    cout << "Enter rainfall (in inches) for " << month << ": ";
    while (!(cin >> rain) || rain < 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nInvalid input. Please enter a valid value for " << month << ": ";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return rain;
}
    // Functions for Questions 2
double length, width, height, volume;
double positive_numb(const string& dimension_name) {
    cout << "Enter a positive value for " << dimension_name << ": \n";
    double posnum;
    while (!(cin >> posnum) || posnum <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nInvalid input. Please enter a valid value for " << dimension_name << ": ";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;
    return posnum;
}
    // Functions for Questions 3

    // Functions for Questions 4

    // Functions for Questions 5

    // Functions for Questions 6

void Question1() {
    prev1 = "";
    prev2 = "";
    cout << "Question 1\n";
    cout << endl;
    cout << "Please answer when prompted to calculate the average rainfall of 3 given months.\n";
    cout << endl;

month1 = valid_month();
prev1 = month1;
rain1 = get_rainfall(month1);

month2 = valid_month();
prev2 = month2;
rain2 = get_rainfall(month2);

month3 = valid_month();
rain3 = get_rainfall(month3);

// Calculate average
average = (rain1 + rain2 + rain3) / 3.0;

// Output formatted to 2 decimal places
cout << fixed << setprecision(2);
cout << "\nThe average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches.\n";
}
void Question2(){
    cout << "Question 2\n";
    cout << endl;
    cout << "Please input the length, width, and height, to calculate the volume of a box.\n";
    length = positive_numb("length");
    width = positive_numb("width");
    height = positive_numb("height");
    volume = length * width * height;
    cout << "The volume of the box is: " << volume << endl;
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
    //Question1();
    Question2();
    Question3();
    Question4();
    Question5();
    Question6();

    return 0;
}
