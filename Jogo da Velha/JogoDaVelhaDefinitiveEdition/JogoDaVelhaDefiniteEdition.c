#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#include "ticTacToeLoop.c"
#include "ticTacToePrint.c"
#include "ticTacToeCheckWins.c"
#include "ticTacToeSwitchCase.c"

#define MAX_PLAYERS 5

typedef struct {
	int winnerX, winner0, counter, plays;
}player;

int main() {
	setlocale(LC_ALL, "");
	player players[MAX_PLAYERS];
	int xTurn, winnerX = 0, winner0 = 0, pair = 1, i, continue_ = 1, plays;
  	char ticTacToe[3][3];
  	char winner;
  	
  	for (i = 1; i < MAX_PLAYERS; i++) {
    	players[i].winner0 = 0;
    	players[i].winnerX = 0;
  	}
  	
  	while (continue_ == 1 || continue_ == 2) {
		if (pair < MAX_PLAYERS) {
		system("cls");
      	winner = 'n';
      	ticTacToeLoop(ticTacToe);
      	for(i=1;i<MAX_PLAYERS;i++) players[i].plays = 0;
      	xTurn = 1;
      	plays=0;
      	while (winner == 'n') {
        	printf("\n\n\tDupla %d\n", pair);
        	xTurn = ticTacToeSwitchCase(ticTacToe, xTurn, pair);
        	if(xTurn==0) plays++;
        	winner = ticTacToeCheckWins(ticTacToe, winner);

        	if (plays >4 && winner == 'n') break;
      	}
      	system("cls");
      	printf("\n\n    Dupla %d Resultados\n", pair);
      	ticTacToePrint(ticTacToe);
      	if (winner == 'X') {
        	players[pair].winnerX++;
        	players[pair].counter = 1;
      	}
      	if (winner == '0') {
        	players[pair].winner0++;
        	players[pair].counter = 1;
      	}
      	if (winner != 'n') {
        	printf("O Ganhador foi o jogador: ' %c '\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n", winner);
        	fflush(stdin);
        	scanf("%d", & continue_);
        	if (continue_ == 2) pair += 1;
        	system("cls");
      	}
		else {
        	printf("Nao houve vencedor.\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n");
        	fflush(stdin);
        	scanf(" %d", & continue_);
        	if (continue_ == 2) pair += 1;
        	system("cls");
      	}
    	}
		else {
      		printf("\nNumero Maximo de jogadores alcançado. Indo pro placar.\n");
      		continue_ = 3;
      		system("pause");
    	}
  	}
  	
  	printf("\n\tObrigado por jogar :)\n\n\n\t############\n\t###PLACAR###\n\t############\n\n");
  	pair=1;
  	
  	for (i = 1; i < MAX_PLAYERS; i++) {
  		
  			if (players[pair].winner0 == 0 && players[pair].winnerX == 0) printf("\n\t####################\n\t#\n\t# DUPLA %d SEM PONTOS\n\t####################\n\n", pair);
  			
			else printf("\n\t#################\n\t# DUPLA %d\n\t#\n\t# PONTOS DO X: %d\n\t# PONTOS DO 0: %d\n\t#################\n\n", pair, players[i].winnerX, players[i].winner0);
    	pair++;
  	}
  	system("pause");
}