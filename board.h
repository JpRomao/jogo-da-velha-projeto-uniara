void viewBoard(char board[3][3])
{
  int i, j;

  printf("\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (j == 0 || j == 2)
      {
        printf("%c", board[i][j]);
      }
      else
      {
        printf("  |  %c  |  ", board[i][j]);
      }
    }
    printf("\n \n");
  }
}

void initBoard(char board[3][3])
{
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      board[i][j] = ' ';
    }
  }
}

int play(char board[3][3], int position[2], int playerTurn)
{
  int row = position[0];
  int column = position[1];

  if (!isPositionValid(board, position))
  {
    return 0;
  }

  if (playerTurn == 1)
  {
    board[row][column] = 'X';
  }
  else
  {
    board[row][column] = 'O';
  }

  return 1;
}

int isPositionValid(char board[3][3], int position[2])
{
  int row = position[0];
  int column = position[1];

  if (row >= 0 && row <= 2 && column >= 0 && column <= 2)
  {
    if (board[row][column] == ' ')
    {
      return 1;
    }
    else
    {
      printf("Position already filled. Try again.\n\n");

      return 0;
    }
  }
  else
  {
    printf("Position is invalid. Try again.\n\n");

    return 0;
  }
}
