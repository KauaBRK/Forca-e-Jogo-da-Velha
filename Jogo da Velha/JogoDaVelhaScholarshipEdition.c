#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define MAXIMO_DE_PLAYERS 5

typedef struct {
	int vencedorX, vencedor0, contador, jogadas;
}Jogador;

Jogador jogadores[MAXIMO_DE_PLAYERS];

void loopJogoDaVelha(char jogoDaVelha[3][3]);
void loopJogoDaVelhaTela(char jogoDaVelha[3][3]);
int jogoDaVelhaChecaVitoria(char jogoDaVelha[3][3], char vencedor);
int jogoDaVelhaSwitchCase(char jogoDaVelha[3][3], int vezX, int par);

int main() {
	setlocale(LC_ALL, "portuguese");
	int vezX, vencedorX = 0, vencedor0 = 0, par = 1, i, continue_ = 1;
  	char jogoDaVelha[3][3];
  	char vencedor;
  	for (i = 1; i < MAXIMO_DE_PLAYERS; i++) {
    	jogadores[i].vencedor0 = 0;
    	jogadores[i].vencedorX = 0;
    	jogadores[i].jogadas = 0;
  	}
  	while (continue_ == 1 || continue_ == 2) {
		if (par < MAXIMO_DE_PLAYERS) {
		system("cls");
      	vencedor = 'n';
      	loopJogoDaVelha(jogoDaVelha);
      	vezX = 1;
      	
      	while (vencedor == 'n') {
        	printf("\n\n\tDupla %d\n", par);
        	vezX = jogoDaVelhaSwitchCase(jogoDaVelha, vezX, par);
        	vencedor = jogoDaVelhaChecaVitoria(jogoDaVelha, vencedor);

        	if (jogadores[par].jogadas == 9 && vencedor == 'n') break;
      	}
      	system("cls");
      	printf("\n\n    Dupla %d Resultados\n", par);
      	loopJogoDaVelhaTela(jogoDaVelha);
      	if (vencedor == 'X') {
        	jogadores[par].vencedorX++;
        	jogadores[par].contador = 1;
      	}
      	if (vencedor == '0') {
        	jogadores[par].vencedor0++;
        	jogadores[par].contador = 1;
      	}
      	if (vencedor != 'n') {
        	printf("O Ganhador foi o jogador: ' %c '\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n", vencedor);
        	fflush(stdin);
        	scanf("%d", & continue_);
        	if (continue_ == 2) par += 1;
        	system("cls");
      	}
		else {
        	printf("Nao houve vencedor.\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n");
        	fflush(stdin);
        	scanf(" %d", & continue_);
        	if (continue_ == 2) par += 1;
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
  	par=1;
  	for (i = 1; i < MAXIMO_DE_PLAYERS; i++) {
  		
  			if (jogadores[par].vencedor0 == 0 && jogadores[par].vencedorX == 0) printf("\n\t#################\n\t# DUPLA %d SEM PONTOS!\n\t#\n\t#\n\t#################\n\n", par);
  			
			else printf("\n\t#################\n\t# DUPLA %d\n\t#\n\t# PONTOS DO X: %d\n\t# PONTOS DO 0: %d\n\t#################\n\n", par, jogadores[i].vencedorX, jogadores[i].vencedor0);
    	par++;
  	}
}
void loopJogoDaVelha(char jogoDaVelha[3][3]) {
	jogoDaVelha[0][0] = '1';
  	jogoDaVelha[0][1] = '2';
  	jogoDaVelha[0][2] = '3';
  	jogoDaVelha[1][0] = '4';
  	jogoDaVelha[1][1] = '5';
  	jogoDaVelha[1][2] = '6';
  	jogoDaVelha[2][0] = '7';
  	jogoDaVelha[2][1] = '8';
  	jogoDaVelha[2][2] = '9';
}
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
int jogoDaVelhaChecaVitoria(char jogoDaVelha[3][3], char vencedor) {

if (jogoDaVelha[0][0] == jogoDaVelha[0][1] && jogoDaVelha[0][1] == jogoDaVelha[0][2]) vencedor = jogoDaVelha[0][0];
if (jogoDaVelha[1][0] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[1][2]) vencedor = jogoDaVelha[1][0];
if (jogoDaVelha[2][0] == jogoDaVelha[2][1] && jogoDaVelha[2][1] == jogoDaVelha[2][2]) vencedor = jogoDaVelha[2][0];

if (jogoDaVelha[0][0] == jogoDaVelha[1][0] && jogoDaVelha[1][0] == jogoDaVelha[2][0]) vencedor = jogoDaVelha[0][0];
if (jogoDaVelha[0][1] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[2][1]) vencedor = jogoDaVelha[0][1];
if (jogoDaVelha[0][2] == jogoDaVelha[1][2] && jogoDaVelha[1][2] == jogoDaVelha[2][2]) vencedor = jogoDaVelha[0][2];

if (jogoDaVelha[0][0] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[2][2]) vencedor = jogoDaVelha[0][0];
if (jogoDaVelha[0][2] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[2][0]) vencedor = jogoDaVelha[0][2];

return vencedor;
}
int jogoDaVelhaSwitchCase(char jogoDaVelha[3][3], int vezX, int par) {
  	int escolhaDeLinha;
  		loopJogoDaVelhaTela(jogoDaVelha);
  		printf("\n\nDigite qual lugar vai jogar: ");
  		scanf("%d", & escolhaDeLinha);
  		fflush(stdin);
  		switch (escolhaDeLinha) {
  			case 1:
    			if (jogoDaVelha[0][0] == '1' && jogoDaVelha[0][0] != '\n') {
      				jogadores[par].jogadas++;
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[0][0] = 'X';
        				vezX = 0;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[0][0] = '0';
        				vezX = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
				    break;
    			}
  			case 2:
    			if (jogoDaVelha[0][1] == '2') {
      				jogadores[par].jogadas++;
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[0][1] = 'X';
        				vezX = 0;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[0][1] = '0';
        				vezX = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 3:
    			if (jogoDaVelha[0][2] == '3') {
      				jogadores[par].jogadas++;
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[0][2] = 'X';
        				vezX = 0;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[0][2] = '0';
        				vezX = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 4:
    			if (jogoDaVelha[1][0] == '4') {
      				jogadores[par].jogadas++;
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[1][0] = 'X';
        				vezX = 0;
        				break;
      				}
      				if (vezX == 0) {
        			jogoDaVelha[1][0] = '0';
        			vezX = 1;
        			break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 5:
    			if (jogoDaVelha[1][1] == '5') {
      				jogadores[par].jogadas++;
      				fflush(stdin);
      				if (vezX == 1) {
        			jogoDaVelha[1][1] = 'X';
        			vezX = 0;
        			break;
      				}
      				if (vezX == 0) {
        			jogoDaVelha[1][1] = '0';
        			vezX = 1;
        			break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 6:
    			if (jogoDaVelha[1][2] == '6') {
      				jogadores[par].jogadas++;
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[1][2] = 'X';
        				vezX = 0;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[1][2] = '0';
        				vezX = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 7:
    			if (jogoDaVelha[2][0] == '7') {
      				jogadores[par].jogadas++;
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[2][0] = 'X';
        				vezX = 0;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[2][0] = '0';
        				vezX = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 8:
    			if (jogoDaVelha[2][1] == '8') {
      				jogadores[par].jogadas++;
      				fflush(stdin);
      				if (vezX == 1) {
        				jogoDaVelha[2][1] = 'X';
        				vezX = 0;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[2][1] = '0';
        				vezX = 1;
        				break;
      				}
    			}
				else {
      				printf("\nEste local ja foi jogado ou op??o invalida\n");
      				system("pause");
      				break;
    			}
  			case 9:
    			if (jogoDaVelha[2][2] == '9') {
      				fflush(stdin);
      				jogadores[par].jogadas++;
      				if (vezX == 1) {
        				jogoDaVelha[2][2] = 'X';
        				vezX = 0;
        				break;
      				}
      				if (vezX == 0) {
        				jogoDaVelha[2][2] = '0';
        				vezX = 1;
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
  		return vezX;
}