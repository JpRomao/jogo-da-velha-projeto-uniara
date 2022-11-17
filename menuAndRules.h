
#include "board.h"
#include "winLoseDraw.h"
#include "gameOnePlayer.h"
#include "gameTwoPlayers.h"
#include "ai.h"
#include "scoreboard.h"

void menu()
{
  char option;

  printf("\n");

  printf("[Select 1 - for One Player Mode]\n");
  printf("[Select 2 - for Two Players Mode]\n");
  printf("[Select 3 - to See the Rules]\n");
  printf("[Select 4 - to EXIT]\n");

  printf("\nEnter the chosen option: ");
  fflush(stdin);
  scanf("%c", &option);
  getchar();

  int selectedOption = option - '0';

  int score[2] = {0, 0};

  switch (selectedOption)
  {
  case 1:
    gameOnePlayer(score);
    break;
  case 2:
    gameTwoPlayers(score);
    break;
  case 3:
    printf("======Let's go the rules======:\n\n");
    printf("1 - The base of the game consists of a table with THREE rows and three columns;\n");
    printf("2 - Each player must choose the piece they will use: [0] or [X]\n");
    printf("3 - The objective of the game is to make a sequence of three matching symbols, either in vertical, horizontal or diagonal line, while trying to prevent your opponent from doing the same;\n");
    printf("4 - When one of the participants makes a line, he wins the game.\n\n");
    printf("======Good luck!!!=====\n\n");

    menu();
    break;
  case 4:
    printf("Goodbye!!! Until the next time!\n");
    break;
  default:
    printf("The option doesn't exist.\n\n");

    menu();
  }
}
