int bestMove(char board[3][3], char playerName[15])
{
  int bestMove = -1;
  int bestScore = -1000;

  for (int i = 0; i < 9; i++)
  {
    if (board[i / 3][i % 3] == ' ')
    {
      board[i / 3][i % 3] = 'O';

      int score = minimax(board, 0, 0, playerName);

      board[i / 3][i % 3] = ' ';

      if (score > bestScore)
      {
        bestScore = score;

        bestMove = i;
      }
    }
  }

  return bestMove;
}

int minimax(char board[3][3], int depth, int isMaximizing, char playerName[15])
{
  int result = checkWinner(board, depth, playerName, "Computer");

  if (result != 0)
  {
    return result;
  }

  if (isMaximizing)
  {
    int bestScore = -1000;

    for (int i = 0; i < 9; i++)
    {
      if (board[i / 3][i % 3] == ' ')
      {
        board[i / 3][i % 3] = 'O';

        int score = minimax(board, depth + 1, 0, playerName);

        board[i / 3][i % 3] = ' ';

        if (score > bestScore)
        {
          bestScore = score;
        }
      }
    }

    return bestScore;
  }
  else
  {
    int bestScore = 1000;

    for (int i = 0; i < 9; i++)
    {
      if (board[i / 3][i % 3] == ' ')
      {
        board[i / 3][i % 3] = 'X';

        int score = minimax(board, depth + 1, 1, playerName);

        board[i / 3][i % 3] = ' ';

        if (score < bestScore)
        {
          bestScore = score;
        }
      }
    }

    return bestScore;
  }
}
