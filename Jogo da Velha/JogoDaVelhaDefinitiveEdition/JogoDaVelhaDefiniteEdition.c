#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#include "ticTacToeLoop.c"
#include "ticTacToePrint.c"
#include "ticTacToeCheckWins.c"
#include "ticTacToeSwitchCase.c"
#include "ticTacToeWinner.c"

#define MAX_PLAYERS 4

typedef struct {
	int winnerX, winner0, counter, plays;
}Player;

int main() {
	setlocale(LC_ALL, "");
	Player players[MAX_PLAYERS];
	int xTurn, winnerX = 0, winner0 = 0, pair = 1, pairAux = 1, i, continue_ = 1, plays;
  	char ticTacToe[3][3];
  	char winner;
  	
  	for (i = 1; i < MAX_PLAYERS + 1; i++) {
    	players[i].winner0 = 0;
    	players[i].winnerX = 0;
    	players[i].plays = 0;
  	}
  	
  	while (continue_ == 1 || continue_ == 2) {
      
  		if (pair < MAX_PLAYERS) {
	  		system("cls");
	      	winner = 'n';
	      	ticTacToeLoop(ticTacToe);
	      	xTurn = 1;
	      	plays=0;
	      	
	      	while (winner == 'n') {  
	        	printf("\n\n\tDupla %d\n", pair);
	        	xTurn = ticTacToeSwitchCase(ticTacToe, xTurn, pair, &plays);
	        	winner = ticTacToeCheckWins(ticTacToe, winner);
	        	if (plays >=9 && winner == 'n') break;
	      	}
	      	system("cls");
	      	printf("\n\n    Dupla %d Resultados\n", pair);
	      	ticTacToePrint(ticTacToe);
	      	continue_ = ticTacToeWinner(winner, continue_, &pair);
	      		if (winner == 'X') {
			    	players[pairAux].winnerX++;
			    	players[pairAux].counter = 1;
			  	}
			  	if (winner == '0') {
			    	players[pairAux].winner0++;
			    	players[pairAux].counter = 1;
			  	}
			  	if(continue_==2) pairAux++;
	    }
		else {
      		printf("\nNumero Maximo de jogadores alcançado. Indo pro placar.\n");
      		continue_ = 3;
      		system("pause");
    	}
  	}
  	
  	printf("\n\tObrigado por jogar :)\n\n\n\t############\n\t###PLACAR###\n\t############\n\n");
  	pair=1;
  	
  	for (i = 1; i < MAX_PLAYERS + 1; i++) {  		
  			if (players[pair].winner0 == 0 && players[pair].winnerX == 0) printf("\n\t####################\n\t#\n\t# DUPLA %d SEM PONTOS\n\t####################\n\n", pair);
			else printf("\n\t#################\n\t# DUPLA %d\n\t#\n\t# PONTOS DO X: %d\n\t# PONTOS DO 0: %d\n\t#################\n\n", pair, players[i].winnerX, players[i].winner0);
    	pair++;
  	}
  	
  	system("pause");
}