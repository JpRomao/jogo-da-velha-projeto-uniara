/*
 Participantes:
   João Pedro Romão - 04722-037
   Maria Eduarda Garcia - 04722-069
   Ana Beatriz - 04722-501
   Isadora - 04722-017
   Lucimara Prado - 04722-057
   Erika Cayano - 04722-043
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#include "menuAndRules.h"

int main()
{
  srand(time(NULL));

  printf("========== Welcome to Tic Tac Toe! ==========\n");

  menu();

  return 0;
}
