#include "board.h"
#include "winLoseDraw.h"

int bestMove()
{
  int bestMove = -1;
  int bestScore = -1000;
  for (int i = 0; i < 9; i++)
  {
    if (board[i] == 0)
    {
      board[i] = 1;

      int score = minimax(board, 0, false);

      board[i] = 0;
      if (score > bestScore)
      {
        bestScore = score;
        bestMove = i;
      }
    }
  }
  return bestMove;
}

int minimax()
{
}
