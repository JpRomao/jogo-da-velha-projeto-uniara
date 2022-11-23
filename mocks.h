#include <stdlib.h>

// BOARD MOCKS
char **emptyBoard()
{
  char **board = (char **)malloc(sizeof(char *) * 9);

  for (int i = 0; i < 9; i++)
  {
    board[i] = (char *)malloc(sizeof(char) * 9);
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      board[i][j] = ' ';
    }
  }

  return board;
}

char **filledXBoard()
{
  char **board = (char **)malloc(sizeof(char *) * 9);

  for (int i = 0; i < 9; i++)
  {
    board[i] = (char *)malloc(sizeof(char) * 9);
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      board[i][j] = 'X';
    }
  }

  return board;
}

char **filledOBoard()
{
  char **board = (char **)malloc(sizeof(char *) * 9);

  for (int i = 0; i < 9; i++)
  {
    board[i] = (char *)malloc(sizeof(char) * 9);
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      board[i][j] = 'O';
    }
  }

  return board;
}

void tieBoard(char board[3][3])
// char **tieBoard()
{
  board[0][0] = 'X';
  board[0][1] = 'O';
  board[0][2] = 'X';
  board[1][0] = 'O';
  board[1][1] = 'X';
  board[1][2] = 'O';
  board[2][0] = 'O';
  board[2][1] = 'X';
  board[2][2] = 'O';

  // char **board = (char **)malloc(sizeof(char *) * 9);

  // for (int i = 0; i < 9; i++)
  // {
  //   board[i] = (char *)malloc(sizeof(char) * 9);
  // }

  // return board;
}

void oWin(char board[3][3])
{
  board[0][0] = 'O';
  board[0][1] = 'O';
  board[0][2] = 'O';
  board[1][0] = 'X';
  board[1][1] = 'X';
  board[1][2] = 'O';
  board[2][0] = 'X';
  board[2][1] = 'O';
  board[2][2] = 'X';
}

// GAME MOCKS
void passTurn(int playerTurn)
{
  playerTurn = playerTurn == 1 ? 2 : 1;
}
