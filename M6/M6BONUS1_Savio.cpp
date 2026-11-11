// m6lab2_0002.cpp - Text adventure starter, version 2
//
// You will use: enums, arrays, parallel arrays, a 2D array, and a game loop.
//
// HOW TO READ THE COMMENTS
// EDIT: change this line to make the game your own.
// KEEP: the game needs this line as it is.
// TRY: a question. Predict the answer. Then run the program to check.
// AI: reserved for you. Use it to cite AI help, as the assignment says.

#include <iostream>
#include <string>
using namespace std;
// KEEP: do not write "= number" after these names. Let the compiler count.
enum Direction {
    NORTH,
    EAST,
    SOUTH,
    WEST,
    UP,
    DOWN,
    NUM_DIRECTIONS // KEEP: always the last name
};
// KEEP: the words must be in the same order as the Direction enum.
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west", "up", "down" 
};
// ADD A ROOM, step 1 of 4: add the new name above NUM_ROOMS.
// EDIT: rename the rooms. The order here must match every list below.
enum Room {
    MAIN_ENTRANCE,
    LIBRARY,
    KITCHEN,
    GARDEN,
    BASEMENT,
    ATTIC,
    NUM_ROOMS // KEEP: always the last name
};

int main() {
string roomNames[NUM_ROOMS] = {
    "Main Enterance", // EDIT: use any names you like
    "Library",
    "Kitchen",
    "Garden",
    "Basement",
    "Attic",
};
string roomDescriptions[NUM_ROOMS] = {
    "A grand main entrance hall with a dusty chandelier hanging above.",
    "Walls lined with ancient books. The air smells of old paper.",
    "A spacious kitchen with an old stove and wooden counter.",
    "An overgrown garden with stone pathways and a small fountain.",
    "A dark, damp basement with cobwebs in the corners.",
    "A cramped attic. Sunlight comes through one small window."

};
int connections[NUM_ROOMS][NUM_DIRECTIONS];
// KEEP: set every cell to -1 first. Then set only the exits that exist.
for (int i = 0; i < NUM_ROOMS; i++) {
    for (int j = 0; j < NUM_DIRECTIONS; j++) {
        connections[i][j] = -1;
    }
}
connections[MAIN_ENTRANCE][NORTH] = LIBRARY;
connections[MAIN_ENTRANCE][EAST] = KITCHEN;
connections[MAIN_ENTRANCE][WEST] = GARDEN;
connections[LIBRARY][SOUTH] = MAIN_ENTRANCE; // the way back
connections[KITCHEN][SOUTH] = BASEMENT;
connections[KITCHEN][WEST] = MAIN_ENTRANCE;
connections[GARDEN][EAST] = MAIN_ENTRANCE;
connections[BASEMENT][NORTH] = KITCHEN;
connections[LIBRARY][UP] = ATTIC;
connections[ATTIC][DOWN] = LIBRARY;
int currentRoom = MAIN_ENTRANCE; // EDIT: start in any room
bool gameRunning = true; // KEEP: the loop runs while this is true
while (gameRunning) {
// Step 1: show the room.
cout << "\nYou are in the " << roomNames[currentRoom] << endl;
cout << roomDescriptions[currentRoom] << endl;
cout << "Exits: ";
bool hasExits = false;
for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
// Match full word ("north") or first letter ("n")
if (command == DIRECTION_NAMES[dir] || (command.length() == 1 && command[0] == DIRECTION_NAMES[dir][0])) {
    validDirection = true;
    if (connections[currentRoom][dir] != -1) {
        currentRoom = connections[currentRoom][dir];
    } else {
        cout << "You can't go " << DIRECTION_NAMES[dir] << " from here." << endl;
    }
    break;
}
}
for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
    if (connections[currentRoom][dir] != -1) {
        cout << DIRECTION_NAMES[dir] << " ";
        hasExits = true;
    }
}
    if (!hasExits) {
        cout << "none";
    }
    cout << endl;
    string command;
    cout << "\nWhat would you like to do? ";
    if (!(cin >> command)) {
        break; // KEEP: input ended (Ctrl+D). Stop the loop. Without this line, the game never ends.
    }
if (command == "north" || command == "n" || command == "N") {
    if (connections[currentRoom][NORTH] != -1) {
        currentRoom = connections[currentRoom][NORTH]; // move to the new room
    } 
    else {
        cout << "You can't go that way." << endl;
    }
} 
else if (command == "east" || command == "e" || command == "E") {
    if (connections[currentRoom][EAST] != -1) {
        currentRoom = connections[currentRoom][EAST];
    } 
    else {
        cout << "You can't go that way." << endl;
    }
}
else if (command == "up" || command == "u" || command == "U") {
    if (connections[currentRoom][UP] != -1) {
        currentRoom = connections[currentRoom][UP];
    } 
    else {
        cout << "You can't go up that way." << endl;
    }
}
else if (command == "down" || command == "d" || command == "D") {
    if (connections[currentRoom][DOWN] != -1) {
        currentRoom = connections[currentRoom][DOWN];
    } 
    else {
        cout << "You can't go down that way." << endl;
    }
}
else if (command == "south" || command == "s" || command == "S") {
    if (connections[currentRoom][SOUTH] != -1) {
        currentRoom = connections[currentRoom][SOUTH];
    } 
    else {
        cout << "You can't go that way." << endl;
    }
} 
else if (command == "west" || command == "w" || command == "W") {
    if (connections[currentRoom][WEST] != -1) {
        currentRoom = connections[currentRoom][WEST];
    } 
    else {
        cout << "You can't go that way." << endl;
    }
} 
else if (command == "quit" || command == "q" || command == "Q") {
    gameRunning = false; // Step 4 will end the loop
} 
else {
    cout << "I don't understand that command." << endl;
}
}
// EDIT: write your own goodbye.
cout << "Thanks for playing!" << endl;
return 0;
}
