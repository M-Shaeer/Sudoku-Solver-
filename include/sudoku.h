#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern int UNSOLVED;
extern int SIZE_ROWS;
extern int SIZE_COLUMNS;

typedef struct Suduko{

    struct Square *** squares;
    struct Box ** boxes;

}Suduko;

typedef struct Box{
    struct Square ** squares;
    int numbers;
    int possible[9];
    int solvable;
    struct Box * next;
} Box;

typedef struct Square {
    int number;
    /* [1] [1] [1] [1] [0] [1] [1] [1] [1]
       [9] [8] [7] [6] [5] [4] [3] [2] [1] index*/
    int possible[9];
    int solvable;
    Box * box;
    int row;
    int column;
} Square;


int ** createPuzzle ();

void printPuzzle (Square *** puzzle);

Suduko * setUpPuzzle(int ** puzzle);

Suduko * createSudoku(Square *** puzzle, Box ** boxes);

int updateSudoku(Square ***sudoku, int row, int column);

int checkPuzzle(Square *** sudoku, Box ** boxes);


int solveSquare(Square *square);   


Box ** createBoxes();

int updateBoxes (Square *** suduko, int row, int column);

int boxSingles(Square *** suduko, Box ** boxes);

int checkRows(Square *** sudoku, Box ** boxes);

#endif