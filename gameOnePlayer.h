void gameOnePlayer(int score[2], char previousPlayerName[15])
{
  char playerName[15];
  char board[3][3];
  int endgame = 0;
  int position[2];
  int playerTurn = 1;
  int aiLevel = 2;
  int winner = 0;

  strcpy(playerName, previousPlayerName);

  initBoard(board);

  if (strcmp(playerName, "") == 0)
  {
    printf("Type here as would you like to be identified: ");
    fgets(playerName, 15, stdin);
    playerName[strcspn(playerName, "\r\n")] = 0;
  }

  printf("Hello %s!\n", playerName);

  printf("Let's go to the game!!!\n");

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
      winner = checkWinner(board, playerTurn, playerName, "Computer");

      if (!winner)
      {
        playerTurn = 2;

        getAiMove(aiLevel, board, playerName);

        winner = checkWinner(board, playerTurn, playerName, "Computer");

        if (!winner)
        {
          playerTurn = 1;
        }
      }

      viewBoard(board);
    }
    else
    {
      printf("Invalid position! Try again.\n\n");

      continue;
    }

    if (checkWinner(board, playerTurn, playerName, "Computer"))
    {
      if (playerTurn == 1)
      {
        printf("Congratulations %s, you won!\n", playerName);

        score[0]++;

        showScoreboard(score, playerName, "Computer");
      }
      else
      {
        printf("You lose!\n");

        score[1]++;

        showScoreboard(score, playerName, "Computer");
      }

      endgame = 1;
    }
    else if (isTie(board))
    {
      printf("\nIt's a draw!\n");

      showScoreboard(score, playerName, "Computer");

      endgame = 1;
    }
  }

  printf("\nDo you want to play again? (Y/N): ");
  fflush(stdin);
  char option = getchar();
  getchar();

  if (option == 'Y' || option == 'y')
  {
    gameOnePlayer(score, playerName);
  }
  else
  {
    menu();
  }
}
