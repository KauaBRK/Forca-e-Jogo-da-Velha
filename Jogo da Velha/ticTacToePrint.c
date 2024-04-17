#include<stdio.h>
#include<stdlib.h>
void ticTacToePrint(char ticTacToe[3][3]) {
	int line, column;
  		printf("\n\n   ####################\n   ###JOGO DA VELHA####\n   ####################\n\n");
  		for (line = 0; line < 3; line++) {
    		for (column = 0; column < 3; column++) {
      			printf("    %c  ", ticTacToe[line][column]);
      			if (column < 2) printf("|");
        		
      			if (column == 0) printf("");
        
    		}
    		if (line < 2)   printf("\n  ---------------------\n");
  		}
  		printf("\n\n\n");
}
