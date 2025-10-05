#include "sudoku.h"

int UNSOLVED = 81;
int SIZE_ROWS = 9;
int SIZE_COLUMNS = 9;


int main()
{   
    int ** puzzle;
    int progress = 0;
    Suduko * sudoku;
    
    puzzle = createPuzzle(); //this just creates the puzzle and displays it


    sudoku = setUpPuzzle(puzzle);

    printPuzzle(sudoku -> squares);

    while (UNSOLVED > 0){
    progress = checkPuzzle(sudoku -> squares, sudoku -> boxes);
        if (progress == 0){
            printf( "Failed to solve the puzzle! \n\n");
    }
}

    printf("\n\n");

    printPuzzle(sudoku -> squares);

    return 0;
}