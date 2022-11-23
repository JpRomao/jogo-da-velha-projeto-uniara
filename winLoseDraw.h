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

    return 1;
  }

  return 0;
}

int checkWinner(char board[3][3], int playerTurn, char player1Name[15], char player2Name[15])
{
  int i, j;
  int winner = 0;

  for (i = 0; i < 3; i++)
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
    {
      winner = playerTurn;
      break;
    }
    else if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
    {
      winner = playerTurn;
      break;
    }
    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
      winner = playerTurn;
      break;
    }
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
      winner = playerTurn;
      break;
    }
    else
    {
      winner = 0;
    }
  }

  if (winner == 1)
  {
    printf("\n%s wins!\n", player1Name);

    return 1;
  }
  else if (winner == 2)
  {
    printf("\n%s wins!\n", player2Name);

    return 1;
  }

  return 0;
}
