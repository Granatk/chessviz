#include "boardmove.h"
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "movep.h"
#include "movef.h"
using namespace std;

void boardmove(char brd[9][9]){
  int n1, n2, k = 0, i, j;
  char ch1, ch2;
  
  printf("Input format: *#-*#,\nwhere '*' - letter, '#' - figure\n");
  while (k == 0) {
  	n1 = 2; n2 = 4; ch1 = 'a'; ch2 = 'a';
    cin >> ch1 >> n1 >> ch2 >> n2; //cout << "ch1: "; cin >> ch1;
  //  cout << "n2: "; cin >> n2; cout << "ch2: "; cin >> ch2;
//   n2 = n1 + 1;
 //  printf ("%c  %c\n", ch1, ch2);
   if (ch1 > 'h' || ch1 < 'a' || ch2 > 'h' || ch2 < 'a' || n1 < 1 || n1 > 8 || n2 < 1 || n2 > 8){
   //  if (ch1 == '0') {t = 0; break;}  // выход из программы
     printf(" Error, enter again: ");
   }
   else k = 1;
   if (ch1 == ch2 && n1 == n2){ printf("You don't move. Enter again: "); k = 0;}
  }
  i = -1*('a'-ch1)+1;
  j = -1*('a'-ch2)+1;
//  printf ("%d  %d  %d  %d", i, j, n1, n2);
//  printf ("%c  %c  %c\n", brd[n1][i], ch1, ch2);
  if (brd[n1][i] == 'P' || brd[n1][i] == 'p') movep(brd, i, j, n1, n2);
  else movef(brd, i, j, n1, n2);
}
