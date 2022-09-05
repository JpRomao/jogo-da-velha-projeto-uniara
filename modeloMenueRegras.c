#include <stdio.h>

int main()
{
  int option;
  int player1;
  int player2;
  int exit;

  printf("========== Welcome to Tic Tac Toe! ==========\n\n");

  while (option != 4)
  {
    printf("[Select 1 - for One Player Mode]\n");
    printf("[Select 2 - for Two Players Mode]\n");
    printf("[Select 3 - to See the Rules]\n");
    printf("[Select 4 - to EXIT]\n");
    // como colocar para ele não entender letras?
    printf("\nEnter the desired option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      printf("You chose the mode One Player. \n");
      scanf("%i", &player1);
      break;
    case 2:
      printf("You chose the mode Two Players. \n");
      scanf("%i", &player2);
      break;
    case 3:
      printf("======Let's go the rules======: \n\n");
      printf("1 - The base of the game consists of a table with THREE rows and three columns; \n");
      printf("2 - Each player must choose the piece they will use: [0] or [X]\n");
      printf("3 - The objective of the game is to make a sequence of three matching symbols, either in vertical, horizontal or diagonal line, while trying to prevent your opponent from doing the same;\n");
      printf("4 - When one of the participants makes a line, he wins the game;\n\n");
      printf("======Good luck!!!=====\n\n");
      break;
    case 4:
      printf("You chose to EXIT. \n");
      scanf("%i", &exit);
    default:
      printf("The option doesn't exist.\n\n");
    }
  }
}
