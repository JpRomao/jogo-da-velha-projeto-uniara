#include <stdlib.h>

// BOARD MOCKS
char **emptyBoard()
{
  char **board = (char **)malloc(sizeof(char *) * 8);

  for (int i = 0; i < 8; i++)
  {
    board[i] = (char *)malloc(sizeof(char) * 8);
  }

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      board[i][j] = ' ';
    }
  }

  return board;
}

char **filledXBoard()
{
  char **board = (char **)malloc(sizeof(char *) * 8);

  for (int i = 0; i < 8; i++)
  {
    board[i] = (char *)malloc(sizeof(char) * 8);
  }

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      board[i][j] = 'X';
    }
  }

  return board;
}

char **filledOBoard()
{
  char **board = (char **)malloc(sizeof(char *) * 8);

  for (int i = 0; i < 8; i++)
  {
    board[i] = (char *)malloc(sizeof(char) * 8);
  }

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      board[i][j] = 'O';
    }
  }

  return board;
}

// GAME MOCKS
void passTurn(int playerTurn)
{
  playerTurn = playerTurn == 1 ? 2 : 1;
}
