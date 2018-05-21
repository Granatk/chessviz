#include "board.h"

void board(char brd[9][9]){
   for (int i = 0; i < 9; i++){
     for (int j = 0; j < 9; j++){
	brd[i][j] = ' ';
}
}
   char k[] = {'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r'};
   char t[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
   for (int i = 1; i < 9; i++){
     brd[2][i] = 'P';
     brd[7][i] = 'p';
}
   for (int i = 1; i < 9; i++){
     brd[8][i] = k[i-1];
     brd[0][i] = t[i-1];
     brd[1][i] = k[i-1]-32;
}
   brd[1][0] = '1'; brd[2][0] = '2'; brd[3][0] = '3'; brd[4][0] = '4'; brd[5][0] = '5'; brd[6][0] = '6'; brd[7][0] = '7'; brd[8][0] = '8'; 
}
