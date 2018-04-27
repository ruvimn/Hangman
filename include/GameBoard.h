#ifndef GAMEBOARD_H
#define GAMEBOARD_H


class GameBoard {
    public:
        GameBoard();

        void draw_board(void);

    private:
        int missed_guesses;
};

#endif // GAMEBOARD_H
