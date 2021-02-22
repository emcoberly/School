/****************************************************************************
 *
 * hw10: A basic dungeon crawler adventure game
 *
 * File Name: dungeonCrawl.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <cstdlib>  // for random number generator
#include <iostream> // for cout and cin
using namespace std;

/*--------------------------------------------------------------------
 * Precodition: None
 * Postcondition:
 *   Prompts the user for a valid direction (n,s,e,w, or r for random)
 *   and loops with error message until one is given.
 */
char getValidDirection();

/*--------------------------------------------------------------------
 * Precondition: None
 * Postcondition:
 *   Randomly picks a direction to move, returning n,s,e, or w
 */
char randomDirection();

/*--------------------------------------------------------------------
 * Precondition: room is an int from 1-9, direction is n,s,e,w, or r
 * Postcondition:
 *   Move from a starting room in an indicated direction.  If we run
 *   into a wall, we will stay in the same room.  Return new room #.
 */
int move(int room, char direction);

/*--------------------------------------------------------------------
 * Precondition: player and dragon are integers between 1 and 9.
 * Postcondition:
 *   Print an ASCII map starting with room 1 in the top left corner
 *   with room numbers layed out as shown.
 *   Indicating empty rooms with a '.',         1 2 3
 *   player's room with a 'P', and the          4 5 6
 *   dragon's room with a 'D'.                  7 8 9
 */
void printMap(int player, int dragon);

// The main program
int main() {
  // starting room for player and dragon and random seed
  int player, dragon, seed, score = 0;

  // seed random number generator with input
  cout << "Enter random seed: ";
  cin >> seed;
  srand(seed);

  // pick different random starting points for the player and dragon
  do {
    player = rand() % 9 + 1;
    dragon = rand() % 9 + 1;
  } while (player == dragon);

  // print out welcome message
  cout << "You have become trapped in a 3 x 3 dungeon with a hungry dragon!"
       << endl;

  // game loop runs until the dragon catches us
  while (player != dragon) {
    printMap(player, dragon);
    player = move(player, getValidDirection());
    dragon = move(dragon, randomDirection());
    score++;
  }

  // the dragon wins
  cout << "The hungry dragon has devoured you." << endl;
  cout << "But on the bright side, you survived " << score << " rounds!"
       << endl;

  return 0;
}

// define functions

char getValidDirection() {
  char playerDirection;
  do {
    cout << "Whence will you flee? ";
    cout << "(n)orth, (s)outh, (e)ast, (w)est, or (r)andom: ";
    cin >> playerDirection;
    if (playerDirection != 'n' && playerDirection != 's' &&
        playerDirection != 'e' && playerDirection != 'w' &&
        playerDirection != 'r') {
      cout << "Invalid entry. ";
    }
  } while (playerDirection != 'n' && playerDirection != 's' &&
           playerDirection != 'e' && playerDirection != 'w' &&
           playerDirection != 'r');
  return playerDirection;
}

int move(int room, char direction) {

  // Borrowed this snippet from down below
  if (direction == 'r') {
    int dir = rand() % 4 + 1;
    if (dir == 4) {
      direction = 'n';
    } else if (dir == 3) {
      direction = 's';
    } else if (dir == 2) {
      direction = 'e';
    } else {
      direction = 'w';
    }
  }

  if (direction == 'n' && room - 3 > 0) {
    room -= 3;
  } else if (direction == 's' && room + 3 < 10) {
    room += 3;
  } else if (direction == 'e' && room % 3 != 0) {
    room += 1;
  } else if (direction == 'w' && room % 3 != 1) {
    room -= 1;
  }
  return room;
}

void printMap(int player, int dragon) {
  int tracker = 0;
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
      tracker += 1;
      if (tracker == player) {
        cout << "P";
        continue;
      } else if (tracker == dragon) {
        cout << "D";
        continue;
      }
      cout << ".";
    }
    cout << endl;
  }
}

char randomDirection() {
  int dir = rand() % 4 + 1;
  if (dir == 4)
    return 'n';
  else if (dir == 3)
    return 's';
  else if (dir == 2)
    return 'e';
  else
    return 'w';
}
