#include "movef.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//char k[] = {'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r'};

void movef(char brd[9][9], int i, int j, int n1, int n2) {
 switch(brd[n1][i]){ //switch wor white
  case 'R':{
   if ((abs(j-i) == 0 && abs(n1-n2) > 0) || (abs(j-i) > 0 && abs(n1-n2) == 0)){
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
   }
   else { printf("You can't do this\n"); break;} 
  }
  case 'N':{
   if ((abs(j-i) == 2 && abs(n1-n2) == 1) || (abs(j-i) == 1 && abs(n1-n2) == 2)){
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
   }
   else {printf("You can't do this\n"); break;}
  }
  case 'B':{
   if (abs(j-i) == abs(n1-n2)){
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
   }
   else { printf("You can't do this\n"); break;}   
  }
  case 'K':{ 
   if (abs(j-i) > 1 || abs(n1-n2) > 1) { printf("You can't do this\n"); break;}
   else { 
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;}
  }
  case 'Q':{
   if ((abs(j-i) == 0 && abs(n1-n2) > 0) || (abs(j-i) > 0 && abs(n1-n2) == 0) || abs(j-i) == abs(n1-n2)){
    if (brd[n2][j] == 'k') printf("Checkmate!\n");
    brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
   }
   else { printf("You can't do this\n"); break;}
  }
  //for black:
  case 'r':{
   if ((abs(j-i) == 0 && abs(n1-n2) > 0) || (abs(j-i) > 0 && abs(n1-n2) == 0)){
    if (brd[n2][j] == 'k') printf("Checkmate!\n");
    brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
   }
   else { printf("You can't do this\n"); break;} 
  }
  case 'n':{
   if ((abs(j-i) == 2 && abs(n1-n2) == 1) || (abs(j-i) == 1 && abs(n1-n2) == 2)){
    if (brd[n2][j] == 'k') printf("Checkmate!\n");
    brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
   }
   else { printf("You can't do this\n"); break;}
  }
  case 'b':{
   if (abs(j-i) == abs(n1-n2)){
    if (brd[n2][j] == 'k') printf("Checkmate!\n");
    brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
   }
   else { printf("You can't do this\n"); break;}   
  }
  case 'k':{ 
   if (abs(j-i) > 1 || abs(n1-n2) > 1 ) { printf("You can't do this\n"); break;}
   else { 
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;}
  }
  case 'q':{
   if ((abs(j-i) == 0 && abs(n1-n2) > 0) || (abs(j-i) > 0 && abs(n1-n2) == 0) || abs(j-i) == abs(n1-n2)){
    if (brd[n2][j] == 'k') printf("Checkmate!\n");
    brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
   } else { printf("You can't do this\n"); break;}
  }
 }
}
