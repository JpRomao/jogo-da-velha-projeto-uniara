#include "board.h"
void gameOnePlayer()

{

  char playername[15];

  printf("Player - Type here as would like to be identified: ");
  fgets(playername, 15, stdin);
  playername[strcspn(playername, "\r\n")] = 0;
  printf("Hello %s", playername);
  printf("Let's go to the game!!!\n");
  board();
}