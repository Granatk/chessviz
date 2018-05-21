#include "board.h"
#include "boardprint.h"
#include "boardmove.h"

//void board(char brd[9][9]);
//void boardmove(char brd[9][9]);
//void boardprint(char brd[9][9]);

int main(){
 int t = 1;
 char brd[9][9];
 board(brd);
 while (t){
  boardprint(brd);
  boardmove(brd);
 }
 return 0;
}
