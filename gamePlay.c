#include <stdio.h>
#include "board.h"

int main()
{

  int row, column, end = 0;
  char board[3][3];
  char player1 = 'X';
  char player2 = 'O';
  int gamePlay = player1;

  fillsBoard(board);

  printf("Player 1 - start your move:\n");

  do
  {
    viewBoard(board);
    printf("Enter the row: ");
    fflush(stdin);
    scanf("%d", &row);
    printf("Enter the column: ");
    fflush(stdin);
    scanf("%d", &column);

    if (board[row][column] == ' ')
    {
      board[row][column] = gamePlay;

      if (gamePlay == player1)
      {
        printf("Player 2 - enter your move:\n\n");
        gamePlay = player2;
      }
      else
      {
        printf("Player 1 - enter your move:\n\n");
        gamePlay = player1;
      }
    }
    else
    {
      printf("Position invalidates. Try again.\n\n");
    }

  } while (end == 0);
}