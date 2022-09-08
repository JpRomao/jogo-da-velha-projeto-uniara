#include <stdio.h>

void gameOnePlayer()

{

  char nameplayer[15];

  printf("Player - Type here as would like to be identified: ");
  fgets(nameplayer, 15, stdin);
  printf("Hello %s", nameplayer);
  printf("Let's go to the game!!!");
}