// CSC 134
// M2LAB1
// Savio, Z
// 9/9/26
// C++ Homework, that i am REALLY late on doing

#include <iostream>
using namespace std;

int main() {
    // Variables
    string movie_name = "Interstellar";
    string movie_director = "Christopher Nolan";
    int movie_year = 2014;
    int millions_made = 783;

    //Output
    cout << "============================"           << endl; 
    cout << "=        Movie Talk        ="           << endl;
    cout << "============================"           << endl;  
    cout << "Title:          " << movie_name         << endl;
    cout << "Director:   " << movie_director         << endl;
    cout << "Release year:       " << movie_year     << endl;
    cout << "Money made:        $" << millions_made << "M" << endl;
    cout << endl;  
    cout << movie_name << " was a movie directed by " << movie_director << " in the year " << movie_year << endl;
    cout << "It was a legendary movie for its phenomenal music composer, " << endl;
    cout << "practical effects, and black hole simulation so high quality," << endl;
    cout << "it actually furthered research in black holes in it of itself." << endl;

    return 0; // no errors
}