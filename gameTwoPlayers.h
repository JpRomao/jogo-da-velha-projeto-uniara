#include <stdio.h>

void gameTwoPlayers()

{
  char name1player[15];
  char name2player[15];

  printf("Player One - Type here as would like to be identified: ");
  fgets(name1player, 15, stdin);
  printf("Player Two - Type here as would like to be identified: ");
  fgets(name2player, 15, stdin);

  printf("Hello %s", name1player);
  printf("Hello %s", name2player);
  printf("Let's go to the game!!!");
}
