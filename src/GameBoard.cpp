#include "GameBoard.h"
#include <iostream>
using namespace std;

GameBoard::GameBoard() {
    missed_guesses = 2;
}

void GameBoard::draw_board(void) {

}

void GameBoard::user_guessed_incorrectly() {
    missed_guesses += 1;
}
