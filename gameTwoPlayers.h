#include "mocks.h"

void gameTwoPlayers(int score[2], char previousPlayer1Name[15], char previousPlayer2Name[15])
{
  char player1Name[15];
  char player2Name[15];
  char board[3][3];
  int winner = 0;
  int position[2];
  int endgame = 0;
  int playerTurn = 1;

  strcpy(player1Name, previousPlayer1Name);
  strcpy(player2Name, previousPlayer2Name);

  initBoard(board);

  if (strcmp(player1Name, "") == 0)
  {
    printf("Player 1 - Type here as would you like to be identified: ");
    fgets(player1Name, 15, stdin);
    player1Name[strcspn(player1Name, "\r\n")] = 0;
  }

  printf("Hello %s\n", player1Name);

  if (strcmp(player2Name, "") == 0)
  {
    printf("Player 2 - Type here as would you like to be identified: ");
    fgets(player2Name, 15, stdin);
    player2Name[strcspn(player2Name, "\r\n")] = 0;
  }

  printf("Hello %s\n", player2Name);

  printf("\nLet's go to the game!!!\n");

  viewBoard(board);

  while (!endgame)
  {
    printf("%s type the chosen row: ", playerTurn == 1 ? player1Name : player2Name);
    fflush(stdin);
    scanf("%d", &position[0]);
    getchar();

    printf("Type the chosen column: ");
    fflush(stdin);
    scanf("%d", &position[1]);
    getchar();

    if (play(board, position, playerTurn))
    {
      viewBoard(board);

      winner = checkWinner(board, playerTurn, player1Name, player2Name);

      if (isTie(board))
      {
        printf("\nIt's a draw!\n");

        endgame = 1;
      }

      if (!winner)
      {
        if (playerTurn == 1)
        {
          playerTurn = 2;
        }
        else
        {
          playerTurn = 1;
        }
      }
      else
      {
        if (playerTurn == 1)
        {
          printf("Congratulations %s, you won!\n", player1Name);
          score[0]++;
        }
        else
        {
          printf("Congratulations %s, you won!\n", player2Name);
          score[1]++;
        }

        showScoreboard(score, player1Name, player2Name);

        endgame = 1;
      }
    }
    else
    {
      printf("Invalid position! Try again.\n\n");
    }
  }

  printf("\nDo you want to play again? (Y/N): ");
  fflush(stdin);
  char again = getchar();
  getchar();

  if (again == 'Y' || again == 'y')
  {
    gameTwoPlayers(score, player1Name, player2Name);
  }
}
