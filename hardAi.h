int bestMove(char board[3][3])
{
  int bestMove = -1;
  int bestScore = -1000;

  for (int i = 0; i < 9; i++)
  {
    if (board[i / 3][i % 3] == ' ')
    {
      board[i / 3][i % 3] = 'O';

      int score = minimax(board, 0, 0);

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

int minimax(char board[3][3], int depth, int isMaximizing)
{
  int result = checkWinner(board, depth);

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

        int score = minimax(board, depth + 1, 0);

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

        int score = minimax(board, depth + 1, 1);

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
