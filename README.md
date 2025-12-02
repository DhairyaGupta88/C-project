The final report for the Tic Tac Toe program in C covers the following key aspects:

Abstract
This project implements a classic two-player Tic Tac Toe game using C programming. It aims to enhance programming skills, especially in arrays, loops, conditionals, and functions by creating an interactive console game where two players alternate placing X and O on a 3x3 grid until a win or draw occurs.

Introduction
Tic Tac Toe is a simple, popular game requiring strategic placement of marks to align three identical marks horizontally, vertically, or diagonally. The program allows two human players to input moves, validates inputs, manages game turns, and detects winning conditions or draw.

System Requirements
The game runs in a console environment and requires a C compiler. Minimal hardware and software resources are needed due to the simple text-based interface.

Implementation
A 3x3 character array represents the board, initialized to spaces.

Functions include initializeBoard() to set up, printBoard() to display the grid, checkWin() to detect winners by checking rows, columns, and diagonals, and isBoardFull() to detect a full board draw.

The main() function handles player input, validates moves, switches turns between players X and O, and ends the game with appropriate messages.

Results and Discussion
The program runs as expected, correctly enforcing rules and displaying the board after each move. It reliably detects winners or draw states and provides a user-friendly experience by addressing players by name and indicating whose turn it is.

Conclusion
The Tic Tac Toe project successfully demonstrates fundamental programming concepts in C while creating an engaging two-player game. It provides a basis for learning game logic implementation, input handling, and modular programming.

References
Common C programming tutorials and documentation on game logic and arrays were used in development.

This report structure and content align with typical project documentation for educational programming projects in C.
