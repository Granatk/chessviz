#include "movep.h"
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void movep(char brd[9][9], int i, int j, int n1, int n2) {
 char k[] = {'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r'};
 int r;
 char ch;
 if (abs(j-i) > 1) { printf("You can't do this\n"); n1 = 0; n2 = 0;} //если движение по горизонтали больше 1
 if (abs(j-i) == 1 && brd[n2][j] == ' ') { printf("You can't do this\n"); n1 = 0; n2 = 0;} //если при движении по диагонали в конечном пункте нет фигуры
 if (brd[n1][i] == 'P'){ //для белых фигур
  switch(n1){ //данное - точка отправления, место по вертикали
   case 2:{
    if (n2-n1 > 2 || (abs(j-i) == 0 && brd[n2][i] != ' ')) { printf("You can't do this\n"); break; }
    else { 
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;}
   }
   case 7:{
   if (n2-n1 != 1) { printf("You can't do this\n"); break; }
    else {
     printf("\nYou can turn a pawn into any other figure except the king. "); //замена фигуры при полном прохождении доски
     do {
      printf("Your choice (keep register): ");
      cin >> ch;
      int r = 0;
      for (int l = 0; l < 8; l++) {if (ch == k[l]-32) r = 1;}
      if (ch == 'K' || r == 0) printf("\nNot right. ");
      else {
       if (brd[n2][j] == 'k') printf("Checkmate!\n");
       brd[n2][j] = ch; brd[n1][i] = ' '; break;}
     } while (ch == 'K');
    }
   }
   case 8:{ printf("You can't do anything\n"); break; }
   case 0:{ break;}
   default: { 
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;}
  }
 }
 if (brd[n1][i] == 'p'){ //для черных фигур
  switch(n1){ //данное - точка отправления, место по вертикали
   case 7:{
    if (n1-n2 > 2 || (abs(j-i) == 0 && brd[n2][j] != ' ')) { printf("You can't do this\n"); break; }
    else { 
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;
	 }
   }
   case 2:{
   if (n1-n2 != 1) {printf("You can't do this\n"); break; }
    else {
     printf("\nYou can turn a pawn into any other figure except the king."); //замена фигуры при полном прохождении доски
     do {
      printf("Your choice (keep register): ");
      cin >> ch;
      r = 0;
      for (int l = 0; l < 8; l++) {if (ch == k[l]) r = 1;}
      if (ch == 'k' || r == 0) printf("\nNot right. ");
      else {
       if (brd[n2][j] == 'k') printf("Checkmate!\n");
       brd[n2][j] = ch; brd[n1][i] = ' '; break;}
     } while (ch == 'k');
    }
   }
   case 1:{ printf("You can't do anything\n"); break; }
   case 0:{ break;}
   default: { 
     if (brd[n2][j] == 'k') printf("Checkmate!\n");
     brd[n2][j] = brd[n1][i]; brd[n1][i] = ' '; break;}
  }
 }
}
