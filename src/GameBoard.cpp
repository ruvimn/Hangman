#include "GameBoard.h"
#include <iostream>
using namespace std;

<<<<<<< HEAD
GameBoard::GameBoard() {
    missed_guesses = 2;
=======
GameBoard::GameBoard()
{
    switch(missed_guesses)
    {
        case 0:
            cout << "   /------\ " << endl;
            cout << "   |      | " << endl;
            cout << "   |        " << endl;
            cout << "   |        " << endl;
            cout << "   |        " << endl;
            cout << "   |        " << endl;
            cout << "   \-------|" << endl;
        case 1:
            cout << "   /------\ " << endl;
            cout << "   |      | " << endl;
            cout << "   |      0 " << endl;
            cout << "   |        " << endl;
            cout << "   |        " << endl;
            cout << "   |        " << endl;
            cout << "   \-------|" << endl;
        case 2:
            cout << "   /------\ " << endl;
            cout << "   |      | " << endl;
            cout << "   |      0 " << endl;
            cout << "   |      | " << endl;
            cout << "   |        " << endl;
            cout << "   |        " << endl;
            cout << "   \-------|" << endl;
        case 3:
            cout << "   /------\  " << endl;
            cout << "   |      |  " << endl;
            cout << "   |      0  " << endl;
            cout << "   |     \|  " << endl;
            cout << "   |         " << endl;
            cout << "   |         " << endl;
            cout << "   \-------| " << endl;
        case 4:
            cout << "   /------\  " << endl;
            cout << "   |      |  " << endl;
            cout << "   |      0  " << endl;
            cout << "   |     \|/ " << endl;
            cout << "   |         " << endl;
            cout << "   |         " << endl;
            cout << "   \-------| " << endl;
        case 5:
            cout << "   /------\  " << endl;
            cout << "   |      |  " << endl;
            cout << "   |      0  " << endl;
            cout << "   |     \|/ " << endl;
            cout << "   |     /   " << endl;
            cout << "   |         " << endl;
            cout << "   \-------| " << endl;
        case 6:
            cout << "   /------\  " << endl;
            cout << "   |      |  " << endl;
            cout << "   |      0  " << endl;
            cout << "   |     \|/ " << endl;
            cout << "   |     / \ " << endl;
            cout << "   |         " << endl;
            cout << "   \-------| " << endl;
        default:
            cout << "   /------\  " << endl;
            cout << "   |      |  " << endl;
            cout << "   |      0  " << endl;
            cout << "   |     \|/ " << endl;
            cout << "   |     / \ " << endl;
            cout << "   |         " << endl;
            cout << "   \-------| " << endl;
    }
>>>>>>> origin/master
}

void GameBoard::draw_board(void) {

}

void GameBoard::user_guessed_incorrectly() {
    missed_guesses += 1;
}
