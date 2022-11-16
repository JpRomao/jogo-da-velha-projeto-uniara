int isTie(char board[3][3])
{
  int i, j;
  int draw = 0;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (board[i][j] != ' ')
      {
        draw++;
      }
    }
  }

  if (draw == 9)
  {
    printf("\nIt's a draw!\n");

    return 1;
  }

  return 0;
}

int checkWinner(char board[3][3], int playerTurn)
{
  int i, j;
  int winner = 0;

  for (i = 0; i < 3; i++)
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
    {
      winner = playerTurn;
    }
    else if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
    {
      winner = playerTurn;
    }
    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
      winner = playerTurn;
    }
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
      winner = playerTurn;
    }
    else
    {
      winner = 0;
    }
  }

  if (winner == 1)
  {
    printf("\nPlayer 1 wins!\n");

    return 1;
  }
  else if (winner == 2)
  {
    printf("\nPlayer 2 wins!\n");

    return 1;
  }

  return 0;
}
