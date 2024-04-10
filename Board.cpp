#include "Board.h"
#include "functions.h"

#include<iostream>
    using std::cout;
    using std::endl;
    using std::cin;
#include <time.h>


Board::Board()
{
    size = MAX_SIZE;
    fillBoard(grid, size);
    playerVal = "X";
    cVal = "O";
    totalPossible = size*size;
}


Board::Board(int size, string xo)
{
    this->size = size;
    fillBoard(grid, size);
    playerVal = xo;
    totalPossible = size*size;

    if (playerVal == "X")
    {
        cVal = "O";
    }

    else
    {
        cVal = "X";
    }
}

int Board::getTotal()
{
    return totalPossible;
}


ostream& operator<<(ostream& output, Board& board)
{
    for (int row=0; row < board.size; row++)
    {
        for (int column=0; column < board.size; column++)
        {
            output << board.grid[row][column] << " ";
        }
        output << "\n";
    } 
    return output;
}


istream& operator>>(istream& input, Board& board)
{
    int x, y;
    bool valid = false;
    while(!valid)
    {
        input >> x;
        input.ignore();
        input >> y;
        input.ignore();

        if ((x < board.size) && (y < board.size))
        {
            if (board.grid[x][y] == "-")
            {
                valid = true;
            }
        }
        
        if (valid == false)
        {
            cout << "Invalid Input. Try again!" << endl;
        }
    }

    board.xCo = x;
    board.yCo = y;
    board.grid[x][y] =  board.playerVal;
    board.totalPossible--;

    return input;
}


void Board::computerTurn()
{
    int x, y;
    bool valid = false;
    srand(time(NULL));
    while(!valid)
    {
        x = rand()%size;
        y = rand()%size;

        if (grid[x][y] == "-")
        {
            valid = true;
        }
    }

    this->xCo = x;
    this->yCo = y;

    grid[x][y] = cVal;
    totalPossible--;
}





bool Board::checkBoard()
{
    int x = xCo;
    int y = yCo;

    bool win = false;
    
    win = checkX(grid, size, x, y);
    if (!win)
    {
        win = checkY(grid, size, x, y);
    }
    
    if (!win)
    {
        win = checkXY(grid, size, x, y);
    }
    // cout << win << endl;

    if (win == true)
    {
        if (grid[x][y] == playerVal)
        {
            cout << "Player wins..." << endl;
        }
        else
        {
            cout << "Computer wins..." << endl;
        }
        return win;
    }

    return false;
}



int Board::getXCo()
{
    return yCo;
}

int Board::getYCo()
{
    return yCo;
}

