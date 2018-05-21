#include "boardprint.h"
#include <stdio.h>
#include <stdlib.h>

void boardprint(char brd[9][9]){
   for (int i = 0; i < 9; i++){
     for (int j = 0; j < 9; j++){
	printf("%c ", brd[i][j]);
}
printf("\n");
}
}

