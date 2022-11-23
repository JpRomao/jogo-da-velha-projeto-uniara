#include "hardAi.h"
#include "basicAi.h"

void getAiMove(int iaLevel, char board[3][3], char playerName[15])
{
  if (iaLevel == 1)
  {
    bestMove(board, playerName);
  }
  else
  {
    basicMove(board);
  }
}
