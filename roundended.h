#include <stdio.h>

// Someone won by line


if (game[0][0] == '0' && game[0][1] == '0' && game[0][2] == '0' ||
    game[1][0] == '0' && game[1][1] == '0' && game[1][2] == '0' ||
    game[2][0] == '0' && game[2][1] == '0' && game[2][2] == '0'){
    printf("/n Congratulations! Player 1 wins!/n");
}
if (game[0][0] == 'X' && game[0][1] == 'X' && game[0][2] == 'X' ||
    game[1][0] == 'X' && game[1][1] == 'X' && game[1][2] == 'X'   ||
    game[2][0] == 'X' && game[2][1] == 'X' && game[2][2] == 'X'){
    printf("/n Congratulations! Player 2 wins!/n");
}

// Someone won by colun

if (game[0][0] == '0' && game[1][0] == '0' && game[1][0] == '0' ||
    game[1][0] == '0' && game[1][1] == '0' && game[1][2] == '0' ||
    game[2][0] == '0' && game[2][1] == '0' && game[2][2] == '0'){
    printf("/n Congratulations! Player 1 wins!/n");
}
if (game[0][0] == 'X' && game[1][0] == 'X' && game[1][0] == 'X' ||
    game[1][0] == 'X' && game[1][1] == 'X' && game[1][2] == 'X' ||
    game[2][0] == 'X' && game[2][1] == 'X' && game[2][2] == 'X'){
    printf("/n Congratulations! Player 2 wins!/n");
}

// Someone won by main diagonal

if(game[0][0] == '0' && game [1][1] == '0' && game [2][2]== '0'){
    printf("/n Congratulations! Player 1 wins!/n");
}
if(game[0][0] == '0' && game [1][1] == '0' && game [2][2]== '0'){
    printf("/n Congratulations! Player 2 wins!/n");
}

// Someone won by secondary diagonal
if(game[0][2] == '0' && game [1][1] == '0' && game [2][0]== '0'){
    printf("/n Congratulations! Player 1 wins!/n");
}
if(game[0][2] == '0' && game [1][1] == '0' && game [2][0]== '0'){
    printf("/n Congratulations! Player 2 wins!/n");
}

//The board has been filled
else(.){
    printf("/n Sorry, the entire board has been filled and there are no sellers/n");
}
