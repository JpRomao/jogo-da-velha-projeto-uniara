int basicMove(char board[3][3])
{
  int position[2];

  position[0] = rand() % 3;
  position[1] = rand() % 3;

  int played = play(board, position, 2);

  if (!played)
  {
    return basicMove(board);
  }

  return played;
}
