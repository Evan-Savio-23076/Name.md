// CSC 134
// M4HW1
// Savio
// 10/18/26
// M4 Homework

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int firstNum, secondNum, answer;
    //firstNum = 5;
    //secondNum = 1;
    answer = firstNum + secondNum;
    

    cout << "Please input a number from 1-12" << endl;
    cin  >> firstNum;

    while (firstNum < 1 || firstNum > 12){
        cout << "sorry, please input a number from 1-12" << endl;
        cin  >> firstNum;
    }

    for (int i=1; i<=12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
    }
}