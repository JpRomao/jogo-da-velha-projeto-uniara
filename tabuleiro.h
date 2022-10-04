#include <stdio.h>
void tabuleiro()
// int main()
{

  int board[3][3];
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      board[i][j] = 3;
    }
  }
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

  // return 0;
}