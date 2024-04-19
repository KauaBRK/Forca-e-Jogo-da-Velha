#include<stdio.h>
#include<stdlib.h>

void loopJogoDaVelhaTela(char jogoDaVelha[3][3]) {
	int linha, coluna;
	
  		printf("\n\n   ####################\n   ###JOGO DA VELHA####\n   ####################\n\n");
  		for (linha = 0; linha < 3; linha++) {
    		for (coluna = 0; coluna < 3; coluna++) {
      			printf("    %c  ", jogoDaVelha[linha][coluna]);
      			if (coluna < 2) printf("|");
        		
      			if (coluna == 0) printf("");
        
    		}
    		if (linha < 2)   printf("\n  ---------------------\n");
  		}
  		printf("\n\n\n");
}