#include <stdio.h>

char board[3][3]; //global variable for the
 // Tic Tac Toe board

// Function to initialize the board
void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to print the board
void printBoard() {
    printf("\n");
    printf("  0   1   2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf(" | ");
        }
        printf("\n");
        if (i < 2) printf(" ---+---+---\n");
    }
    printf("\n");
}

// Function to check winner
char checkWin() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2] &&
            board[i][0] != ' ')
            return board[i][0];
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i] &&
            board[0][i] != ' ')
            return board[0][i];
    }

    // Check diagonals
    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2] &&
        board[0][0] != ' ')
        return board[0][0];

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0] &&
        board[0][2] != ' ')
        return board[0][2];

    return ' '; // No winner yet
}

// Function to check if board is full
int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

int main() {
    int row, col;
    char currentPlayer = 'X';
    char winner;

    char player1[50], player2[50];

    // Input player names
    printf("Enter Player X name: ");
    scanf("%s", player1);

    printf("Enter Player O name: ");
    scanf("%s", player2);

    // Greet the players
    printf("\nWelcome %s (X) and %s (O) to Tic-Tac-Toe!\n", player1, player2);

    initializeBoard();

    while (1) {
        printBoard();

        // Display player turn using names
        if (currentPlayer == 'X')
            printf("%s's turn (X). Enter row and column: ", player1);
        else
            printf("%s's turn (O). Enter row and column: ", player2);

        scanf("%d %d", &row, &col);

        // Validate move
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (board[row][col] != ' ') {
            printf("This spot is already taken! Try again.\n");
            continue;
        }

        // Place move
        board[row][col] = currentPlayer;

        // Check winner
        winner = checkWin();
        if (winner != ' ') {
            printBoard();
            if (winner == 'X')
                printf("Congratulations %s! You win!\n", player1);
            else
                printf("Congratulations %s! You win!\n", player2);
            break;
        }

        // Check draw
        if (isBoardFull()) {
            printBoard();
            printf("Game Drawn! Well played both %s and %s.\n", player1, player2);
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}