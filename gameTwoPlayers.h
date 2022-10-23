#include <stdio.h>
#include "board.h"
void gameTwoPlayers()

{
  char player1name[15];
  char player2name[15];

  printf("Player One - Type here as would like to be identified: ");
  fgets(player1name, 15, stdin);
  player1name[strcspn(player1name, "\r\n")] = 0;
  printf("Player Two - Type here as would like to be identified: ");
  fgets(player2name, 15, stdin);
  player2name[strcspn(player2name, "\r\n")] = 0;

  printf("Hello %s\n", player1name);
  printf("Hello %s\n", player2name);
  printf("\nLet's go to the game!!!\n");
  board();
}
