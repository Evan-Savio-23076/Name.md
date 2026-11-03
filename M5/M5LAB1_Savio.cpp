/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[name]
[date]
This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/

/*
#include <iostream>
#include <limits>
using namespace std;

// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."

// Integers
int hands_hurt;
int brick;

// Void functions
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void open_front_door();
void inspect_front_door();


// TODO: add your new prototypes here

int main() {
cout << "M5LAB1 - Choose Your Own Adventure" << endl;
// Start the story.
main_menu();
// When main_menu() returns, the story is over.
cout << "Thanks for playing!" << endl;
return 0; // finished with no errors
}

// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().

void main_menu() {
// A menu that accepts 1, 2, 3, or 4 (quit).
cout << "Main Menu" << endl;
cout << "You're in front of a spooky old house..." << endl;
cout << "Do you:" << endl;
cout << "1. Try the front door" << endl;
cout << "2. Sneak around back" << endl;
cout << "3. Forget it, and go home" << endl;
cout << "4. [Quit]" << endl;
cout << "Choose: ";
int choice = 0;
cin >> choice;
if (cin.fail()) {
// The player typed something that is not a number.
cin.clear(); // reset cin so it can read again
choice = 0; // treat it as an invalid choice
}

// Throw away the rest of the line the player typed.
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
*/

#include <iostream>
#include <limits>
using namespace std;

// FUNCTION PROTOTYPES

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void inspect_area_front();
void get_key_hurt();
void inspect_area_front2();
void disarm_trap_front();
void get_key();
void open_door_front();
void unlock_door_front();
void choice_attack_door();
void attack_door2();
void attack_door3();
void unlock_door_frontalt();
void smash_knob_secret();
void open_door_back();
void inspect_area_back();
void inspect_area_back2();
void enter_house();
void choice_input();
void choice_invalid();

// Global Ints
int key;
int hand_health = 3;

int main() {
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0;
}

void choice_input(int &choice) {
  cin >> choice;
  if (cin.fail()) {
    cin.clear(); 
    choice = 0; 
  }

  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
}

void choice_invalid() {
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "That's not a valid choice, please try again." << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

void main_menu() {
  cout << "What do you choose to do?:" << endl;
  cout << endl;
  cout << "1. Check the front door?" << endl;
  cout << "2. Check the backyard?" << endl;
  cout << "3. Leave, and come back the way you came?" << endl;
  cout << "4. [Quit]" << endl;
  cout << endl;
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    choice_front_door();
  } 
  else if (2 == choice) {
    choice_back_door();
  } 
  else if (3 == choice) {
    choice_go_home();
  } 
  else if (4 == choice) {
    cout << endl;
    cout << "Ok, quitting game." << endl;
    cout << endl;
    return;
  } 
  else {
    choice_invalid();
    main_menu();
  }
}

void choice_front_door() {
  cout << "You're now at the front door, what do you do?" << endl;
  cout << endl;
  cout << "1. Inspect the area around the door? " << endl;
  cout << "2. Attempt to open the door?" << endl;
  cout << "3. Try showing the door who's boss." << endl;
  cout << "4. Leave the front door." << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    if (key == 0) {
      inspect_area_front();
    }
    else if (key == 1) {
      cout << "There is nothing left of note to see." << endl;
      cout << endl;
      choice_front_door();
    }
  } 
  else if (2 == choice) {
    open_door_front();
  } 
  else if (3 == choice) {
    choice_attack_door();
  } 
  else if (4 == choice) {
    main_menu();
  }
  else {
   choice_invalid();
   choice_front_door();
  }

}

void choice_back_door() {
  cout << "You are now in the backyard, what do you choose do now?:" << endl;
  cout << endl;
  cout << "1. Go to the Celler door?" << endl;
  cout << "2. Inspect the backyard?" << endl;
  cout << "3. Leave the backyard." << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    open_door_back();
  } 
  else if (2 == choice) {
    inspect_area_back();
  } 
  else if (3 == choice) {
    main_menu();
  }
  else {
    choice_invalid();
    choice_back_door();
  }
  
}

void choice_go_home() {
  cout << "TODO: Write something here" << endl;
}

void inspect_area_front() {
  cout << "You decide to look around in the nearby shrubs and stones, and see what looks like a key under some thick brambles." << endl;
  cout << endl;
  cout << "What do you do now?:" << endl;
  cout << endl;
  cout << "1. Inspect the placement of the key more closely." << endl;
  cout << "2. Grab the free spare key." << endl;
  cout << "3. Stop looking around, and back up a little." << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    inspect_area_front2();
  } 
  else if (2 == choice) {
    get_key_hurt();
  } 
  else if (3 == choice) {
    choice_front_door();
  }
  else {
    choice_invalid();
  }
}

void get_key_hurt() {
  cout << "You grabbed the key, but there was a mini bear trap under it, hurting your hand badly" << endl;
  cout << "You did get the key though." << endl;
  cout << endl;
  cout << "Key acquired " << endl;
  cout << endl;
  cout << "Press 1 to continue" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    hand_health = hand_health - 2;
    key = 1;
    choice_front_door();
  }
  else {
    choice_invalid();
    get_key_hurt();
  }
}

void inspect_area_front2() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. Disarm trap" << endl;
  cout << "2. get anyways" << endl;
  cout << "3. go back" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    disarm_trap_front();
  } 
  else if (2 == choice) {
    get_key_hurt();
  } 
  else if (3 == choice) {
    choice_front_door();
  }
  else {
    choice_invalid();
  }
}

void disarm_trap_front() {
  cout << "\"add press one to continue\"" << endl;
  cout << "Do you:" << endl;
  cout << "1. get key" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    get_key();
  }
  else {
    choice_invalid();
  }
}

void get_key() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. go to " << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    choice_front_door();
  }
  else {
    choice_invalid();
  }
}

void open_door_front() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. if no key" << endl;
  cout << "2. if kkey" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    choice_front_door();
  } 
  else if (2 == choice) {
    unlock_door_front();
  }
  else {
    choice_invalid();
  }
}

void unlock_door_front() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. enter house" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    enter_house();
  }
  else {
    choice_invalid();
  }
}

void choice_attack_door() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. You sure? Y" << endl;
  cout << "2. You sure? N" << endl;
  cout << "3. You sure? Y (with brick)" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    attack_door2();
  } 
  else if (2 == choice) {
    choice_front_door();
  } 
  else if (3 == choice) {
    smash_knob_secret();
  }
  else {
    choice_invalid();
  }
}

void attack_door2() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. continue? Y" << endl;
  cout << "2. stop" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    attack_door3();
  } 
  else if (2 == choice) {
    choice_front_door();
  }
  else {
    choice_invalid();
  }
}

void attack_door3() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. continue? Y" << endl;
  cout << "2. stop" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    unlock_door_frontalt();
  } 
  else if (2 == choice) {
    main_menu();
  }
  else {
    choice_invalid();
  }
}

void unlock_door_frontalt() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. enter" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    enter_house();
  }
  else {
    choice_invalid();
  }
}

void smash_knob_secret() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. enter" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    enter_house();
  }
  else {
    choice_invalid();
  }
}

void open_door_back() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. locked and unmovable" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    choice_back_door();
  }
  else {
    choice_invalid();
  }
}

void inspect_area_back() {
  cout << "Write this part of the story here." << endl;
  cout << "Do you:" << endl;
  cout << "1. search more?" << endl;
  cout << "2. No more search" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    inspect_area_back2();
  } 
  else if (2 == choice) {
    choice_back_door();
  }
  else {
    choice_invalid();
  }
}

void inspect_area_back2() {
  cout << "add brick intiger" << endl;
  cout << "Do you:" << endl;
  cout << "1. inspect_area_back2" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);

  if (1 == choice) {
    choice_back_door();
  }
  else {
    choice_invalid();
  }
}

void enter_house() {
  cout << "You see ghost" << endl;
  cout << "// make endings if statements" << endl;
}