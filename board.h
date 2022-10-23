void viewBoard(char board[3][3])

{
  int i, j;

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

void fillsBoard(char board[3][3])
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
