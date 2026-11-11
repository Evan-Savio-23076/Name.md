/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Savio
11/11 (when it was finished)
This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
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
void open_door_front();
void unlock_door_front();
void choice_attack_door();
void open_door_back();
void enter_house();
void choice_input();
void choice_invalid();
void hand_damaged();
void door_damaged();
void brick_damaged();
void End1();
void End2();
void End3();
void End4();
void End5();

// Global Ints
int key;
int brick;
int hand_health = 3;
int door_health = 3;
int brick_health = 2;

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

void hand_damaged() {
  if (hand_health == 2) {
    cout << "Your hand was hurt a bit" << endl;
    cout << endl;
  } 
  else if (hand_health == 1) {
    cout << "Your hand was hurt badly" << endl;
    cout << endl;
  }
  else if (hand_health <= 0) {
    cout << "Your hand is now too hurt to want to do anything" << endl;
    cout << endl;
  }
  else {
    cout << "error" << endl;
    cout << endl;
  }
}

void door_damaged() {
  if (door_health == 2) {
    cout << "The door was damaged a bit, doesn't look like it'd stand a strong hit." << endl;
    cout << endl;
  }
  else if (door_health == 1) {
    cout << "The door was damaged badly, it looks like it'd break with just one more hit." << endl;
    cout << endl;
  }
  else if (door_health <= 0) {
    cout << "The door is now broken open and busted in." << endl;
    cout << endl;
  }
  else {
    cout << "error" << endl;
    cout << endl;
  }
}

void brick_damaged() {
  if (brick_health == 1) {
    cout << "The brick was damaged a bit, doesn't look like it'd stand another strike." << endl;
    cout << endl;
  }
  else if (brick_health <= 0) {
    cout << "The brick is now broken and can't be used anymore." << endl;
    cout << endl;
  }
  else {
    cout << "error" << endl;
    cout << endl;
  }
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
  else if (2 == choice && brick == 0) {
    cout << "You investigate the backyard and find nothing of note besides a brick, " << endl;
    cout << "you decide to grab and equip it" << endl;
    cout << endl;
    brick = 1;
    choice_back_door();
  } 
  else if (2 == choice && brick == 1) {
    cout << "The backyard is completely empty." << endl;
    choice_back_door();
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
  cout << "You decide to forgo the adventure and go home." << endl;
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
    hand_health -= 2;
    hand_damaged();
    get_key_hurt();
  } 
  else if (3 == choice) {
    choice_front_door();
  }
  else {
    choice_invalid();
    inspect_area_front();
  }
}

void get_key_hurt() {
  cout << "You grabbed the key, but hurt your hand on the trap gaurding it." << endl;
  cout << "You did get the key though." << endl;
  cout << endl;
  cout << "Key acquired " << endl;
  cout << endl;
  cout << "Press 1 to continue" << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);
  if (1 == choice) {
    key = 1;
    choice_front_door();
  }
  else {
    choice_invalid();
    get_key_hurt();
  }
}

void inspect_area_front2() {
  cout << "You see the key is actually trapped!" << endl;
  cout << endl;
  cout << "Do you:" << endl;
  cout << endl;
  cout << "1. Disarm the trap." << endl;
  cout << "2. Go get the key anyways." << endl;
  cout << "3. Go back to looking at the front door." << endl;
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
    inspect_area_front2();
  }
}

void disarm_trap_front() {
  cout << "You disarm the trap and get the key." << endl;
  cout << endl;
  cout << "Press 1 to continue" << endl;
  int choice = 0;
  choice_input(choice);
  if (1 == choice) {
    key = 1;
    choice_front_door();
  }
  else {
    choice_invalid();
    disarm_trap_front();
  }
}

void open_door_front() {
  cout << "You approach the front door. " << endl;
  cout << "It appears to be locked with a comedically large padlock." << endl;
  cout << endl;
  cout << "Do you try opening the lock?" << endl;
  cout << endl;
  cout << "1. Yes" << endl;
  cout << "2. No" << endl;
  cout << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);
  if (choice == 1) {
    if (key == 0) {
      cout << "Unfortunetly you cannot stare at the lock until it opens by itself." << endl;
      cout << endl;
      cout << "Press any key (within reason) to move backwards a little." << endl;
      int choice = 0;
      choice_input(choice);
      choice_front_door();
    }
    else if (key == 1){
      cout << "You open the lock and prepare to enter." << endl;
      cout << endl;
      cout << "Press any key (within reason) to move backwards a little." << endl;
      int choice = 0;
      choice_input(choice);
      unlock_door_front();
    }
  }
  else if (choice == 2) {
    choice_front_door();
  }
  else {
    choice_invalid();
    open_door_front();
  }
}

void unlock_door_front() {
  cout << "You open the door and enter the house." << endl;
  cout << endl;
  enter_house();
}

void choice_attack_door() {
  if (door_health <= 0) {
    cout << "The door is destroyed." << endl;
    cout << endl;
    enter_house();
    return;
  }
  cout << "You feel like attacking the door for whatever reason," << endl;
  cout << "but are you sure its a good idea?" << endl;
  cout << endl;
  cout << "Do you:" << endl;
  cout << endl;
  cout << "1. YES!" << endl;
  cout << "2. No." << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);
  if (choice == 1) {
    if (brick == 1) {
        cout << "You attack the door with the brick." << endl;
        cout << endl;
        door_health -= 2;
        brick_health -= 1;
        door_damaged();
        brick_damaged();
        choice_attack_door();
      }
        else if (hand_health >=1) {
        cout << "You attack the door without the brick." << endl;
        cout << endl;
        door_health -= 1;
        hand_health -= 1;
        door_damaged();
        hand_damaged();
        choice_attack_door();
      }
      else if (hand_health <= 0) {
        cout << "Your hand is too hurt to try attacking the door again, " << endl;
        cout << "so you back away a little bit." << endl;
        cout << endl;
        choice_front_door();
      }
  }
  else if (choice == 2) {
    cout << "You decide attacking a door isn't a good idea, and back up a little bit" << endl;
    cout << endl;
    choice_front_door();
  }
  else {
    choice_invalid();
    choice_attack_door();
  }
}

void open_door_back() {
  cout << "There appears to be a cellar welded shut, " << endl;
  cout << "do you try to open it?" << endl;
  cout << endl;
  cout << "Do you:" << endl;
  cout << endl;
  cout << "1. Try to open the back door?" << endl;
  cout << "2. Leave it." << endl;
  cout << "Choose: ";
  int choice = 0;
  choice_input(choice);
  if (choice == 1) {
    cout << "You really think for a moment and give up, " << endl;
    cout << "your hands are doing nothing to that welded frame." << endl;
    cout << endl;
    choice_back_door();
  }
  else if (choice == 2) {
    cout << "You leave the door and go back into the backyard" << endl;
    cout << endl;
    choice_back_door();
  }
  else {
    choice_invalid();
    open_door_back();
  }
}

void enter_house() {
cout << "You enter the house and see what you suspect to be a Ghost!" << endl;
cout << endl;
cout << "What do you do?" << endl;
cout << endl;
cout << "1. Run away!" << endl;
cout << "2. Attack the ghost!" << endl;
cout << "3. Try talking to the ghost." << endl;
cout << "Choose: " << endl;
int choice = 0;
choice_input(choice);
  if (choice == 1) {
    cout << "You run away from the ghost, " << endl;
    cout << "which seems confused at your actions." << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "You escape and run away from the house, " << endl;
    cout << "with a admittedly boring tale to go with it." << endl;
    cout << endl;
    cout << "You got ending 1 of 5 (Coward!)" << endl;
  }
  else if (choice == 2) {
    if (brick == 1) {
      if (hand_health >= 1) {
      cout << "Do you wish to attack with your hands or the brick?" << endl;
      cout << endl;
      cout << "1. Hands" << endl;
      cout << "2. Brick" << endl;
      cout << endl;
      cout << "Choose: " << endl;
      choice = 0;
      choice_input(choice);
      if (choice == 1) {
        cout << "You attack the ghost with your hands, " << endl;
        cout << "knocking it out in one clean punch." << endl;
        cout << endl;
        cout << "Turns out it was just a homeless squatter... oops..." << endl;
        cout << endl;
        cout << "You got ending 2 of 5 (Homeless Hate Crime!)" << endl;
      }
      else if (choice == 2) {
        cout << "You throw the brick at the ghost, " << endl;
        cout << "and it falls witha dull thud." << endl;
        cout << endl;
        cout << "Turns out it was just a homeless squatter... oops..." << endl;
        cout << endl;
        cout << "You got ending 3 of 5 (Homeless Hate Crime! (Brick edition))" << endl;
      }
    }
      else if (hand_health <= 0) {
      cout << "You throw the brick at the ghost, " << endl;
      cout << "and it falls witha dull thud." << endl;
      cout << endl;
      cout << "Turns out it was just a homeless squatter... oops..." << endl;
      cout << endl;
      cout << "You got ending 3 of 5 (Homeless Hate Crime! (Brick edition))" << endl;
    }  
    }
    else if (brick == 0) {
      if (hand_health >= 1) {
      cout << "You attack the ghost with your hands, " << endl;
      cout << "knocking it out in one clean punch." << endl;
      cout << endl;
      cout << "Turns out it was just a homeless squatter... oops..." << endl;
      cout << endl;
      cout << "You got ending 2 of 5 (Homeless Hate Crime!)" << endl;
    }
      else if (hand_health <= 0) {
      cout << "You attack the ghost with your hands, " << endl;
      cout << "but your hands are too weak to do any damage." << endl;
      cout << endl;
      cout << "Turns out the ghost was a homeless squatter, " << endl;
      cout << "and he beats you up for attacking him." << endl;
      cout << endl;
      cout << "You got ending 4 of 5 (Self Defense!)" << endl;
    }  
    }  
  }
  else if (choice == 3) {
    cout << "You try talking to the ghost, " << endl;
    cout << "and it talks back to you." << endl;
    cout << endl;
    cout << "Turns out it was some hobo squatting in the house." << endl;
    cout << "He's actually a pretty nice guy." << endl;
    cout << endl;
    cout << "You got ending 5 of 5 (Good Ending)" << endl;
  }
  else {
    choice_invalid();
    enter_house();
  }
}