void gameOnePlayer(int score[2])
{
  char playername[15];
  char board[3][3];
  int endgame = 0;
  int position[2];
  int playerTurn = 1;
  int aiLevel = 2;
  int winner = 0;

  initBoard(board);

  printf("Type here as would you like to be identified: ");
  fgets(playername, 15, stdin);
  playername[strcspn(playername, "\r\n")] = 0;

  printf("Hello %s!\n", playername);

  printf("Let's go to the game!!!\n");

  viewBoard(board);

  while (!endgame)
  {
    printf("Type the position you want to play: ");
    fflush(stdin);
    scanf("%d %d", &position[0], &position[1]);
    getchar();

    if (play(board, position, 1))
    {

      winner = checkWinner(board, playerTurn);

      if (!winner)
      {
        playerTurn = 2;

        getAiMove(aiLevel, board);

        winner = checkWinner(board, playerTurn);

        if (!winner)
        {
          playerTurn = 1;
        }
      }

      viewBoard(board);
    }

    if (checkWinner(board, 1))
    {
      printf("Congratulations %s, you won!\n", playername);

      score[0]++;

      showScoreboard(score);

      endgame = 1;
    }
    else if (checkWinner(board, 2))
    {
      printf("You lose!\n");

      score[1]++;

      showScoreboard(score);

      endgame = 1;
    }
    else if (isTie(board))
    {
      endgame = 1;
    }
  }

  char option = "";

  printf("Do you want to play again? (Y/N): ");
  fflush(stdin);
  scanf("%c", &option);
  getchar();

  if (option == 'Y' || option == 'y')
  {
    gameOnePlayer(score);
  }
  else
  {
    menu();
  }
}
