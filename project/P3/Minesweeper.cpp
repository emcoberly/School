#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
using namespace std;

// Global Constants
const int MIN_ROWS = 5;
const int MIN_COLS = 5;
const int MAX_ROWS = 26;
const int MAX_COLS = 26;

// Function Prototypes
void Introduction();
char NewOrLoad();
void BoardSize(int &height, int &width);
void MinesArray(int height, int width, int &flags, char mineBoard[][MAX_COLS], int = MAX_ROWS);
void BlankArray(int height, int width, char userBoard[][MAX_COLS], int = MAX_ROWS);
void PrintGameboard(int height, int width, char userBoard[][MAX_COLS], int = MAX_ROWS);
char ClickFlagSaveQuit(int flags);
void GetMove(int height, int width, int &userRow, int &userCol, char userBoard[][MAX_COLS], int = MAX_ROWS);
void CheckMove(bool &gotMined, int userRow, int userCol, int height, int width, char mineBoard[][MAX_COLS], char userBoard[][MAX_COLS], int = MAX_ROWS);
int CellsRemaining(int height, int width, char userBoard[][MAX_COLS], int = MAX_ROWS);
void YouLose(int flags, int userRow, int userCol, int height, int width, char mineBoard[][MAX_COLS], char userBoard[][MAX_COLS], int = MAX_ROWS);
void YouWin(int flags);

void Load(bool &loadable, int &cells, int &flags, int &height, int &width, char mineBoard[][MAX_COLS], char userBoard[][MAX_COLS], int = MAX_ROWS);
void Save(int height, int width, char mineBoard[][MAX_COLS], char userBoard[][MAX_COLS], int = MAX_ROWS);

char PlayAgain();

int main() {

    char doAgain = 'n';
    Introduction();

    do {
        // Generate seed
        srand(time(0));

        // Define variables
        char userTurn;
        bool clickedMine = false;
        bool loadableFile = true;

        int boardHeight = 0, boardWidth = 0;
        char mineBoard[MAX_ROWS][MAX_COLS];
        int userRow = 0, userCol = 0;
        char displayBoard[MAX_ROWS][MAX_COLS];
        int numFlags = 0;
        int cellsRemaining = 0;

        // Determine if there is a file to load
        do {
            char startGame = NewOrLoad();
            if (startGame == 'n') {
                BoardSize(boardHeight,boardWidth);
                MinesArray(boardHeight, boardWidth, numFlags, mineBoard);
                BlankArray(boardHeight, boardWidth, displayBoard);
                cellsRemaining = boardHeight * boardWidth;
            } else {
                Load(loadableFile, cellsRemaining, numFlags, boardHeight, boardWidth, mineBoard, displayBoard);
            }
        } while (!loadableFile);

        PrintGameboard(boardHeight, boardWidth, displayBoard);

        cout << "You have " << numFlags << " flag";
        if (numFlags != 1) {
            cout << "s";
        }
        cout << " remaining." << endl;
        
        while (cellsRemaining > 0) {
            userTurn = ClickFlagSaveQuit(numFlags);
            if (userTurn == 'q') {
                cout << "Thank you for playing!" << endl;
                return 0;
            }
            if (userTurn == 's') {
                Save(boardHeight, boardWidth, mineBoard, displayBoard);
                cout << "See you next time!" << endl;
                return 0;
            }
            GetMove(boardHeight, boardWidth, userRow, userCol, displayBoard);
            if (userTurn == 'c') {
                CheckMove(clickedMine, userRow, userCol, boardHeight, boardWidth, mineBoard, displayBoard);
                if (clickedMine) {
                    YouLose(numFlags, userRow, userCol, boardHeight, boardWidth, mineBoard, displayBoard);
                    break;
                }
            } else {
                displayBoard[userRow][userCol] = 'F';
                numFlags -= 1;
            }
            cellsRemaining = CellsRemaining(boardHeight, boardWidth, displayBoard);

            cout << endl;
            PrintGameboard(boardHeight, boardWidth, displayBoard);

            cout << "You have " << numFlags << " flag";
            if (numFlags != 1) {
                cout << "s";
            }
            cout << " remaining." << endl;
        }
        if (cellsRemaining == 0) {
            YouWin(boardHeight * boardWidth / 8);
        }
        doAgain = PlayAgain();
    } while (doAgain == 'y');

    return 0;
}

void Introduction() {
    cout << "Welcome to Minesweeper! This blast from the past will be sure to entertain you." << endl;
    cout << "The rules are simple: " << endl;
    cout << "- Click squares to check for mines or clearings." << endl;
    cout << "- Place flags where you think there could be mines." << endl;
    cout << "- Don't click a mine, or it's Game Over™!" << endl;
    cout << "- Be sure you place your flags carefully. Once you place one, you can't get it back!" << endl;
    cout << "  + Run out of flags, and you will have to watch yourself click a mine..." << endl;
    cout << "- If you successfully flag all the mines, congrats! You are the Master Minesweeper!" << endl << endl;
    cout << "So, without further ado, let's get started." << endl;
}

// Determines whether to load a new gameboard or open an old one
char NewOrLoad() {
    char selection = 'n';
    cout << "\nSelect an action:" << endl;
    cout << "- (n)ew game" << endl;
    cout << "- (l)oad game" << endl;
    cout << "- (q)uit" << endl;
    cout << "-> ";
    do {
        cin >> selection;
        cin.ignore(1000,'\n');
        if (cin.fail()) {
            cout << "WARNING: Invalid selection. Please try again. -> ";
            cin.clear();
        } else if (selection != 'n' && selection != 'l' && selection != 'q') {
            cout << "WARNING: Invalid selection. Please try again. -> ";
            cin.clear();
        } else if (selection == 'q') {
            cout << "See you around!" << endl;
            exit(0);
        }
    } while (selection != 'n' && selection != 'l');
    return selection;
}

// User decides what size they want the board to be
void BoardSize(int &height, int &width) {
    bool validInput = false;
    cout << "\nBoards range in height from 5-26 and in width from 5-26." << endl;
    cout << "Enter an integer for height and width, respectively, separated by a space. -> ";
    do {
        cin >> height >> width;
        cin.ignore(1000,'\n');
        if (cin.fail()) {
            cout << "ERROR: Your input must be two integers. Please try again. -> ";
            cin.clear();
        } else {
            if (height < MIN_ROWS || height > MAX_ROWS || width < MIN_COLS || width > MAX_COLS) {
                cout << "ERROR: Invalid dimensions. Please try again. -> ";
                cin.clear();
            } else {
                validInput = true;
            }
        }
    } while(!validInput);
}

// Gathers number and location of mines and stores coordinates in arrays
void MinesArray(int height, int width, int &flags, char mineBoard[][MAX_COLS], int MAX_ROWS) {

    // Assigns mine values
    int mineCount = (height * width) / 8;
    flags = mineCount;
    int mineRow[mineCount], mineCol[mineCount];
    for (int i = 0; i < mineCount; i++) {
        mineRow[i] = rand() % height;
        mineCol[i] = rand() % width;
        if (i > 0) {
            for (int j = i; j > 0; j--) {
                if (mineRow[i] == mineRow[i-j] && mineCol[i] == mineCol[i-j]) {
                    i--;
                    break;
                }
            }
        }
    }

    // This series of loops assigns every square in the array with a character value
    // Checks the rows
    // i = rows
    for (int i = 0; i < height; i++) {
        // Checks the columns
        // j = columns
        for (int j = 0; j < width; j++) {
            int mineSum = 0;
            // Compares columns with row/column array
            // k = index in mineRow and mineCol arrays
            for (int k = 0; k < mineCount; k++) {
                // Checks square to the S
                if (i + 1 < height) {
                    if (i + 1 == mineRow[k] && j == mineCol[k]) {
                        mineSum++;
                    }
                }
                // Checks square to the SE
                if (i + 1 < height && j + 1 < width) {
                    if (i + 1 == mineRow[k] && j + 1 == mineCol[k]) {
                        mineSum++;
                    }
                }
                // Checks square to the E
                if (j + 1 < width) {
                    if (i == mineRow[k] && j + 1 == mineCol[k]) {
                        mineSum++;
                    }
                }
                // Checks square to the NE
                if (i - 1 >= 0 && j + 1 < width) {
                    if (i - 1 == mineRow[k] && j + 1 == mineCol[k]) {
                        mineSum++;
                    }
                }
                // Checks square to the N
                if (i - 1 >= 0) {
                    if (i - 1 == mineRow[k] && j == mineCol[k]) {
                        mineSum++;
                    }
                }
                // Checks square to the NW
                if (i - 1 >= 0 && j - 1 >= 0) {
                    if (i - 1 == mineRow[k] && j - 1 == mineCol[k]) {
                        mineSum++;
                    }
                }
                // Checks square to the W
                if (j - 1 >= 0) {
                    if (i == mineRow[k] && j - 1 == mineCol[k]) {
                        mineSum++;
                    }
                }
                // Checks square to the SW
                if (i + 1 < height && j - 1 >= 0) {
                    if (i + 1 == mineRow[k] && j - 1 == mineCol[k]) {
                        mineSum++;
                    }
                }
            }
            // Separate 'for' loop to fill in spaces and numbers including spaces with mines
            // l = index in mineRow and mineCol arrays
            for (int l = 0; l < mineCount; l++) {
                if (mineSum > 0) {
                    mineBoard[i][j] = mineSum + 48;
                } else {
                    mineBoard[i][j] = ' ';
                }
            }
        }
    }
    // Explicitly replaces all numbers or blanks spaces containing mines with 'M'
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < mineCount; k++) {
                if (i == mineRow[k] && j == mineCol[k]) {
                    mineBoard[i][j] = 'M';
                }
            }
        }
    }
}

void BlankArray(int height, int width, char userBoard[][MAX_COLS], int MAX_ROWS) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            userBoard[i][j] = '-';
        }
    }
}

// Prints Gameboard
void PrintGameboard(int height, int width, char userBoard[][MAX_COLS], int MAX_ROWS) {
    cout << "\n  ";
    for (int i = 0; i <= height; i++) {
        char rowLabel = i + 64;
        for (int j = 0; j < width; j++) {
            char colLabel = j + 65;
            if (i > 0 && j == 0) {
                cout << rowLabel << " |";
            }
            if (i == 0) {
                cout << " " << colLabel;
            } else {
                cout << userBoard[i-1][j] << "|";
            }
        }
        cout << endl;
    }
}

// User chooses to click or flag
char ClickFlagSaveQuit(int flags) {
    char choice;
    bool validInput = false;

    cout << "\nWould you like to (c)lick, ";
    if (flags > 0) {
        cout << "(f)lag, "; // If User is out of flags, this won't show
    }
    cout << "(s)ave game and quit, or (q)uit without saving? -> ";

    do {
        cin >> choice;
        cin.ignore(1000,'\n');
        if (cin.fail() || (choice != 'c' && choice != 'f' && choice != 's' && choice != 'q')) {
            cout << "ERROR: You must choose 'c', 'f', 's', or 'q' to proceed. Please try again. -> ";
            cin.clear();
        } else if (choice == 'f' && flags == 0) {
            cout << "ERROR: You are out of flags!! Please try again. -> ";
            cin.clear();
        } else {
            validInput = true;
        }
    } while (!validInput);
    return choice;
}

// Gets User's move
void GetMove(int height, int width, int &userRow, int &userCol, char userBoard[][MAX_COLS], int MAX_ROWS) {
    bool validInput = false;
    char userRowChar = 0, userColChar = 0;
    cout << "Enter the row and column where you would like to go." << endl;
    cout << "Separate the two letters by a space. -> ";
    do {
        cin >> userRowChar >> userColChar;
        cin.ignore(1000,'\n');
        if (cin.fail()) {
            cout << "ERROR: Your input must appear on the board. Please try again. -> ";
            cin.clear();
        } else {
            userRow = userRowChar - 65;
            userCol = userColChar - 65;
            if (userRow >= height || userRow < 0 || userCol >= width || userCol < 0) {
                cout << "ERROR: Input out of bounds. Please try again. -> ";
                cin.clear();
            } else if (userBoard[userRow][userCol] != '-') {
                cout << "ERROR: You have already moved there. Please try again. -> ";
                cin.clear();
            } else {
                validInput = true;
            }
        }
    } while(!validInput);
}

// Determines what will be outputted for the next turn
void CheckMove(bool &gotMined, int userRow, int userCol, int height, int width, char mineBoard[][MAX_COLS], char userBoard[][MAX_COLS], int MAX_ROWS) {
    userBoard[userRow][userCol] = mineBoard[userRow][userCol];
    if (userBoard[userRow][userCol] == ' ') {
        for (int h = 0; h < height * width; h++) {
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    // Checks square to the S
                    if (i + 1 < height) {
                        if (userBoard[i + 1][j] == ' ') {
                            userBoard[i][j] = mineBoard[i][j];
                        }
                    }
                    // Checks square to the SE
                    if (i + 1 < height && j + 1 < width) {
                        if (userBoard[i + 1][j + 1] == ' ') {
                            userBoard[i][j] = mineBoard[i][j];
                        }
                    }
                    // Checks square to the E
                    if (j + 1 < width) {
                        if (userBoard[i][j + 1] == ' ') {
                            userBoard[i][j] = mineBoard[i][j];
                        }
                    }
                    // Checks square to the NE
                    if (i - 1 >= 0 && j + 1 < width) {
                        if (userBoard[i - 1][j + 1] == ' ') {
                            userBoard[i][j] = mineBoard[i][j];
                        }
                    }
                    // Checks square to the N
                    if (i - 1 >= 0) {
                        if (userBoard[i - 1][j] == ' ') {
                            userBoard[i][j] = mineBoard[i][j];
                        }
                    }
                    // Checks square to the NW
                    if (i - 1 >= 0 && j - 1 >= 0) {
                        if (userBoard[i - 1][j - 1] == ' ') {
                            userBoard[i][j] = mineBoard[i][j];
                        }
                    }
                    // Checks square to the W
                    if (j - 1 >= 0) {
                        if (userBoard[i][j - 1] == ' ') {
                            userBoard[i][j] = mineBoard[i][j];
                        }
                    }
                    // Checks square to the SW
                    if (i + 1 < height && j - 1 >= 0) {
                        if (userBoard[i + 1][j - 1] == ' ') {
                            userBoard[i][j] = mineBoard[i][j];
                        }
                    }
                }
            }
        }
    } else if (mineBoard[userRow][userCol] == 'M') {
        gotMined = true;
    }
}

// Counts the number of cells that remain, as denoted with a '-'
int CellsRemaining(int height, int width, char userBoard[][MAX_COLS], int MAX_ROWS) {
    int hyphens = 0;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (userBoard[i][j] == '-') {
                hyphens += 1;
            }
        }
    }
    return hyphens;
}

// Performs loss ceremony (displays remaining mines as 'X', tells User the number of correclty placed flags)
void YouLose(int flags, int userRow, int userCol, int height, int width, char mineBoard[][MAX_COLS], char userBoard[][MAX_COLS], int MAX_ROWS) {
    
    // Loop for checking
    int mineScore = 0;
    int flagFail = 0;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (mineBoard[i][j] == 'M') {
                // Tallies and leaves correct flags, else replaces missed mines with 'M'
                if (userBoard[i][j] == 'F') {
                    mineScore++;
                } else {
                    userBoard[i][j] = 'X';
                }
            }
            // Replaces last clicked mine from 'X' back to 'M'
            if (i == userRow && j == userCol) {
                userBoard[i][j] = 'M';
            }
            // Tallies incorrect flags and replaces them with 'O'
            if (userBoard[i][j] == 'F' && mineBoard[i][j] != 'M') {
                userBoard[i][j] = 'O';
            }
        }
    }
    flagFail = (height * width / 8) - mineScore - flags;
    
    PrintGameboard(height, width, userBoard);

    // Fun loser message
    cout << "\nOh no! You clicked a mine!" << endl;
    cout << "GAME. IS. OVER." << endl;
    cout << "Number of correctly placed flags:\t" << mineScore << endl;
    cout << "Number of incorrectly placed flags:\t" << flagFail << endl;
}

void YouWin(int flags) {
    cout << "\nC O N G R A T U L A T I O N S !" << endl;
    cout << "You are the Master Minesweeper!" << endl;
    cout << "Mines flagged: " << flags << endl;
}

void Load(bool &loadable, int &cells, int &flags, int &height, int &width, char mineBoard[][MAX_COLS], char userBoard[][MAX_COLS], int MAX_ROWS) {
    ifstream fin;
    fin.open("savegame.txt");
    if (!fin.is_open()) {
        cerr << "ERROR: No save file exists." << endl;
        loadable = false;
    } else {
        fin >> height >> width;
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                fin >> mineBoard[i][j];
                fin >> userBoard[i][j];
                if (mineBoard[i][j] == 'S') {
                    mineBoard[i][j] = ' ';
                }
                if (userBoard[i][j] == 'S') {
                    userBoard[i][j] = ' ';
                }
                if (userBoard[i][j] == 'F') {
                    flags++;
                }
                if (userBoard[i][j] == '-') {
                    cells++;
                }
            }
        }
        flags = (height * width / 8) - flags;
    }
    fin.close();
}

void Save(int height, int width, char mineBoard[][MAX_COLS], char userBoard[][MAX_COLS], int MAX_ROWS) {
    ofstream fout;
    fout.open("savegame.txt");
    if (!fout.is_open()) {
        cerr << "ERROR: Could not save game." << endl;
    } else {
        fout << height << " " << width << endl;
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (mineBoard[i][j] == ' ') {
                    mineBoard[i][j] = 'S';
                }
                if (userBoard[i][j] == ' ') {
                    userBoard[i][j] = 'S';
                }
                fout << mineBoard[i][j] << " ";
                fout << userBoard[i][j] << endl;
            }
        }
    }
    fout.close();
}

char PlayAgain() {
    char doAgain = 'n';
    cout << "\nWould you like to play again?" << endl;
    cout << "- (y)es" << endl;
    cout << "- (Any other character to quit)" << endl;
    cout << "-> ";

    cin >> doAgain;
    cin.ignore(1000,'\n');
    cin.clear();

    return doAgain;
}