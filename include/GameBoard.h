#ifndef GAMEBOARD_H
#define GAMEBOARD_H


class GameBoard {
    public:
        GameBoard();

        void draw_board(void);
        void user_guessed_incorrectly();

    private:
        int missed_guesses;
};

#endif // GAMEBOARD_H
