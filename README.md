# Sudoku-Solver-

A C-based Sudoku solver that models the puzzle using dynamic memory structures for rows, columns, and 3×3 boxes. Each square tracks candidates and solvability, with functions to update constraints and apply logical rules (rows, columns, boxes). Includes puzzle initialization, validation, and a formatted console display.

## ✨ Features
- 9×9 Sudoku grid with dynamic memory allocation  
- Each square tracks possible values and solvability  
- Constraint propagation for rows, columns, and boxes  
- Functions to update puzzle state and check validity  
- Console-based output using `ncurses`  



## 🔧 Custom Puzzle Input
To use your own Sudoku puzzle, edit the createPuzzle function in puzzle.c.
This function initializes the grid. Fill in the 2D array with your puzzle values (use 0 for empty cells). Example:

    int preset[9][9] = {
        {5,3,0, 0,7,0, 0,0,0},
        {6,0,0, 1,9,5, 0,0,0},
        {0,9,8, 0,0,0, 0,6,0},
        {8,0,0, 0,6,0, 0,0,3},
        {4,0,0, 8,0,3, 0,0,1},
        {7,0,0, 0,2,0, 0,0,6},
        {0,6,0, 0,0,0, 2,8,0},
        {0,0,0, 4,1,9, 0,0,5},
        {0,0,0, 0,8,0, 0,7,9}
    };

    
## 🛠️ Setup & Run

### Build the project
  ```bash
  make
