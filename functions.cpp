#include "functions.h"
#include<iostream>
    using std::cout;
    using std::endl;
    using std::cin;

void fillBoard(array<array <string, MAX_SIZE>, MAX_SIZE>& grid, int size)
{
    for (int row=0; row < size; row++)
    {
        for (int column=0; column < size; column++)
        {
            grid[row][column] = "-";
        }
    }
}


bool checkX(array<array <string, MAX_SIZE>, MAX_SIZE>& grid, int size, int x, int y)
{
    if (x-2 >= 0)
    {
        if ((grid[x-2][y] == grid[x-1][y]) && (grid[x-1][y] == grid[x][y]))
        {
            return true;
        }
    }

    if ((x-1 >= 0) && (x+1 < size))
    {
        if ((grid[x-1][y] == grid[x][y]) && (grid[x+1][y] == grid[x][y]))
        {
            return true;
        }
    }

    if (x+2 < size)
    {
        if ((grid[x][y] == grid[x+1][y]) && (grid[x+1][y] == grid[x+2][y]))
        {
            return true;
        }
    }

    return false;
}


bool checkY(array<array <string, MAX_SIZE>, MAX_SIZE>& grid, int size, int x, int y)
{
    // cout << x << " " << y << endl;
    if (y-2 >= 0)
    {
        if ((grid[x][y] == grid[x][y-1]) && (grid[x][y] == grid[x][y-2]))
        {
            // cout << x << " " << y << endl;
            return true;
        }
    }

    if ((y-1 >= 0) && (y+1 < size))
    {
        if ((grid[x][y] == grid[x][y-1]) && (grid[x][y] == grid[x][y+1]))
        {
            // cout << x << " " << y << endl;
            return true;
        }
    }

    if (y+2 < size)
    {
        if ((grid[x][y] == grid[x][y+1]) && (grid[x][y] == grid[x][y+2]))
        {
            // cout << x << " " << y << endl;
            return true;
        }
    }

    return false;
}



bool checkXY(array<array <string, MAX_SIZE>, MAX_SIZE>& grid, int size, int x, int y)
{
    if ((x-2 >= 0) && (y-2 >= 0))
    {
        if ((grid[x][y] == grid[x-1][y-1]) && (grid[x][y] == grid[x-2][y-2]))
        {
            return true;
        }
    }

    if ((x-1 >= 0) && (y-1 >= 0) && (x+1 < size) && (y+1 < size))
    {
        if ((grid[x][y] == grid[x-1][y-1]) && (grid[x][y] == grid[x+1][y+1]))
        {
            return true;
        }
    }

    if ((x+2 < size) && (y+2 < size))
    {
        if ((grid[x][y] == grid[x+1][y+1]) && (grid[x][y] == grid[x+2][y+2]))
        {
            return true;
        }
    }


    if ((x-2 >= 0) && (y+2 < size))
    {
        if ((grid[x][y] == grid[x-1][y+1]) && (grid[x][y] == grid[x-2][y+2]))
        {
            return true;
        }
    }

    if ((x-1 >= 0) && (y+1 < size) && (x+1 < size) && (y-1 >= 0))
    {
        if ((grid[x][y] == grid[x-1][y+1]) && (grid[x][y] == grid[x+1][y-1]))
        {
            return true;
        }
    }

    if ((x+2 < size) && (y-2 >= 0))
    {
        if ((grid[x][y] == grid[x+1][y-1]) && (grid[x][y] == grid[x+2][y-2]))
        {
            return true;
        }
    }

    return false;
}
