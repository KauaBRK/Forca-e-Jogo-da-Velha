#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#include "loopJogoDaVelha.c"
#include "loopJogoDaVelhaTela.c"
#include "jogoDaVelhaChecaVitoria.c"
#include "jogoDaVelhaSwitchCase.c"
#include "jogoDaVelhaVencedor.c"//Função nova

#define MAXIMO_DE_PLAYERS 5

typedef struct {
	int vencedorX, vencedor0, contador, jogadas;
}Jogador;

int main() {
	setlocale(LC_ALL, "portuguese");
	Jogador jogadores[MAXIMO_DE_PLAYERS];
	int vezX, vencedorX = 0, vencedor0 = 0, par = 1,parAux=1, i, continue_ = 1, jogadas;
  	char jogoDaVelha[3][3];
  	char vencedor;
  	
	  	for (i = 1; i < MAXIMO_DE_PLAYERS; i++) {
	    	jogadores[i].vencedor0 = 0;
	    	jogadores[i].vencedorX = 0;
	  	}
	  	
	  	while (continue_ == 1 || continue_ == 2) {
			if (par < MAXIMO_DE_PLAYERS) {
				system("cls");
		      	vencedor = 'n';
		      	loopJogoDaVelha(jogoDaVelha);
		      	vezX = 1;
		      	jogadas=0;
		      	
			    	for(i=1;i<MAXIMO_DE_PLAYERS;i++) jogadores[i].jogadas = 0;
			      	while (vencedor == 'n') {
			        	printf("\n\n\tDupla %d\n", par);
			        	vezX = jogoDaVelhaSwitchCase(jogoDaVelha, vezX, par, &jogadas);
			        	vencedor = jogoDaVelhaChecaVitoria(jogoDaVelha, vencedor);
			        	if (jogadas >=9 && vencedor == 'n') break;
			      	}
			      	system("cls");
			      	printf("\n\n    Dupla %d Resultados\n", par);
			      	loopJogoDaVelhaTela(jogoDaVelha);
			      	continue_=jogoDaVelhaVencedor(vencedor, continue_, &par);//Função nova
		      		if (vencedor == 'X') {
				    	jogadores[parAux].vencedorX++;
				    	jogadores[parAux].contador = 1;
				  	}
				  	if (vencedor == '0') {
				    	jogadores[parAux].vencedor0++;
				    	jogadores[parAux].contador = 1;
				  	}
				  	if(continue_==2) parAux++;
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
		system("pause");
}
