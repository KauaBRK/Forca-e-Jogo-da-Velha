#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define MAX_PLAYERS 5

typedef struct {
	int winnerX, winner0, counter, plays;
}player;

player players[MAX_PLAYERS];

void ticTacToeLoop(char ticTacToe[3][3]);
void ticTacToePrint(char ticTacToe[3][3]);
int ticTacToeCheckWins(char ticTacToe[3][3], char winner);
int ticTacToeSwitchCase(char ticTacToe[3][3], int xTurn, int pair);

int main() {
	setlocale(LC_ALL, "");
	int xTurn, winnerX = 0, winner0 = 0, pair = 1, i, continue_ = 1;
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
      	
      	while (winner == 'n') {
        	printf("\n\n\tDupla %d\n", pair);
        	xTurn = ticTacToeSwitchCase(ticTacToe, xTurn, pair);
        	winner = ticTacToeCheckWins(ticTacToe, winner);

        	if (players[pair].plays == 9 && winner == 'n') break;
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
void ticTacToeLoop(char ticTacToe[3][3]) {
	ticTacToe[0][0] = '1';
  	ticTacToe[0][1] = '2';
  	ticTacToe[0][2] = '3';
  	ticTacToe[1][0] = '4';
  	ticTacToe[1][1] = '5';
  	ticTacToe[1][2] = '6';
  	ticTacToe[2][0] = '7';
  	ticTacToe[2][1] = '8';
  	ticTacToe[2][2] = '9';
}
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
int ticTacToeCheckWins(char ticTacToe[3][3], char winner) {

if (ticTacToe[0][0] == ticTacToe[0][1] && ticTacToe[0][1] == ticTacToe[0][2]) winner = ticTacToe[0][0];
if (ticTacToe[1][0] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[1][2]) winner = ticTacToe[1][0];
if (ticTacToe[2][0] == ticTacToe[2][1] && ticTacToe[2][1] == ticTacToe[2][2]) winner = ticTacToe[2][0];

if (ticTacToe[0][0] == ticTacToe[1][0] && ticTacToe[1][0] == ticTacToe[2][0]) winner = ticTacToe[0][0];
if (ticTacToe[0][1] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[2][1]) winner = ticTacToe[0][1];
if (ticTacToe[0][2] == ticTacToe[1][2] && ticTacToe[1][2] == ticTacToe[2][2]) winner = ticTacToe[0][2];

if (ticTacToe[0][0] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[2][2]) winner = ticTacToe[0][0];
if (ticTacToe[0][2] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[2][0]) winner = ticTacToe[0][2];

return winner;
}
int ticTacToeSwitchCase(char ticTacToe[3][3], int xTurn, int pair) {
  	int lineChoose;
  		ticTacToePrint(ticTacToe);
  		printf("\n\nDigite qual lugar vai jogar: ");
  		scanf("%d", & lineChoose);
  		fflush(stdin);
  		switch (lineChoose) {
  			case 1:
    			if (ticTacToe[0][0] == '1' && ticTacToe[0][0] != '\n') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[0][0] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[0][0] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
				    break;
    			}
  			case 2:
    			if (ticTacToe[0][1] == '2') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[0][1] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[0][1] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 3:
    			if (ticTacToe[0][2] == '3') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[0][2] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[0][2] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 4:
    			if (ticTacToe[1][0] == '4') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[1][0] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        			ticTacToe[1][0] = '0';
        			xTurn = 1;
        			break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 5:
    			if (ticTacToe[1][1] == '5') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        			ticTacToe[1][1] = 'X';
        			xTurn = 0;
        			break;
      				}
      				if (xTurn == 0) {
        			ticTacToe[1][1] = '0';
        			xTurn = 1;
        			break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 6:
    			if (ticTacToe[1][2] == '6') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[1][2] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[1][2] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 7:
    			if (ticTacToe[2][0] == '7') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[2][0] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[2][0] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 8:
    			if (ticTacToe[2][1] == '8') {
      				players[pair].plays++;
      				fflush(stdin);
      				if (xTurn == 1) {
        				ticTacToe[2][1] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[2][1] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 9:
    			if (ticTacToe[2][2] == '9') {
      				fflush(stdin);
      				players[pair].plays++;
      				if (xTurn == 1) {
        				ticTacToe[2][2] = 'X';
        				xTurn = 0;
        				break;
      				}
      				if (xTurn == 0) {
        				ticTacToe[2][2] = '0';
        				xTurn = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  		}
  		system("cls");
  		return xTurn;
}