// copy 10 numbers between files
// open the files
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream inFile("input.txt", ios::in);
    fstream outFile("output.txt", ios::out);
    int num;
    for (int i = 0; i < 10; i++) {
        inFile >> num;   // use the files
        outFile << num << "," << endl;
    }
    inFile.close();      // close the files
    outFile.close();
}