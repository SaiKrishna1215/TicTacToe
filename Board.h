#ifndef BOARD_H
#define BOARD_H

#include<string>
    using std::string;
#include<array>
    using std::array;
#include<fstream>
    using std::istream;
    using std::ostream;

const int MAX_SIZE=10;

class Board
{
    private:
        int size;
        int xCo;
        int yCo;
        int totalPossible;
        string playerVal;
        string cVal;
        array<array <string, MAX_SIZE>, MAX_SIZE> grid;

    public:
        Board();
        Board(int size, string xo);

        int getTotal();
        int getXCo();
        int getYCo();
        array<array <string, MAX_SIZE>, MAX_SIZE> getGrid;

        void displayBoard();
        bool checkBoard();
        void computerTurn();

        friend istream& operator>>(istream&, Board&);
        friend ostream& operator<<(ostream&, Board&);
};

#endif 