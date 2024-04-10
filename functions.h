#ifndef FUNC_H
#define FUNC_H

#include "Board.h"

void fillBoard(array<array <string, MAX_SIZE>, MAX_SIZE>& grid, int size);

bool checkX(array<array <string, MAX_SIZE>, MAX_SIZE>& grid, int size, int x, int y);

bool checkY(array<array <string, MAX_SIZE>, MAX_SIZE>& grid, int size, int x, int y);

bool checkXY(array<array <string, MAX_SIZE>, MAX_SIZE>& grid, int size, int x, int y);

#endif