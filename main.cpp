
#include "Board.h"

#include<iostream>
    using std::cout;
    using std::endl;
    using std::cin;

int main()
{
    int x, y;
    Board ticTacToe = Board(3, "X");
    cout << ticTacToe;
    while (ticTacToe.getTotal() > 0)
    {
        cout << "Player turn..." << endl;
        cin >> ticTacToe;
        cout << ticTacToe;
        if (ticTacToe.getTotal() == 0)
        {
            break;
        }
        x = ticTacToe.getXCo();
        y = ticTacToe.getYCo();
        if (ticTacToe.checkBoard())
        {
            break;
        }
        cout << "Computer Turn..." << endl;
        ticTacToe.computerTurn();
        cout << ticTacToe;
        x = ticTacToe.getXCo();
        y = ticTacToe.getYCo();
        if (ticTacToe.checkBoard())
        {
            break;
        }
    }
}