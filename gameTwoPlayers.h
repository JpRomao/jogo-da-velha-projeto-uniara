void gameTwoPlayers(int score[2], char previousPlayer1Name[15], char previousPlayer2Name[15])
{
  char player1name[15];
  char player2name[15];
  char board[3][3];
  int winner = 0;
  int position[2];
  int endgame = 0;
  int playerTurn = 1;

  strcpy(player1name, previousPlayer1Name);
  strcpy(player2name, previousPlayer2Name);

  initBoard(board);

  if (strcmp(player1name, "") == 0)
  {
    printf("Player 1 - Type here as would you like to be identified: ");
    fgets(player1name, 15, stdin);
    player1name[strcspn(player1name, "\r\n")] = 0;
  }

  printf("Hello %s\n", player1name);

  if (strcmp(player2name, "") == 0)
  {
    printf("Player 2 - Type here as would you like to be identified: ");
    fgets(player2name, 15, stdin);
    player2name[strcspn(player2name, "\r\n")] = 0;
  }

  printf("Hello %s\n", player2name);

  printf("\nLet's go to the game!!!\n");

  viewBoard(board);

  while (!endgame)
  {
    printf("Player %d type the chosen row: ", playerTurn);
    fflush(stdin);
    scanf("%d", &position[0]);
    getchar();
    printf("Type the chosen column: ");
    fflush(stdin);
    scanf("%d", &position[1]);
    getchar();

    if (play(board, position, playerTurn))
    {
      winner = checkWinner(board, playerTurn);

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
          printf("Congratulations %s, you won!\n", player1name);
          score[0]++;
        }
        else
        {
          printf("Congratulations %s, you won!\n", player2name);
          score[1]++;
        }

        showScoreboard(score);

        endgame = 1;
      }
      viewBoard(board);
    }
  }

  printf("\nDo you want to play again? (Y/N): ");
  fflush(stdin);
  char again = getchar();
  getchar();

  if (again == 'Y' || again == 'y')
  {
    gameTwoPlayers(score, player1name, player2name);
  }
}
