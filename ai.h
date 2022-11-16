#include "hardAi.h"
#include "basicAi.h"

void getAiMove(int iaLevel, char board[3][3])
{
  if (iaLevel == 1)
  {
    bestMove(board);
  }
  else
  {
    basicMove(board);
  }
}
