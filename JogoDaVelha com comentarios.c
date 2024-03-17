#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
void ticTacToeLoop(char ticTacToe[3][3]){
	/*essa primeira funcao serve apenas pra zerar todos os parametros caso o jogador queira jogar mais uma vez*/
		ticTacToe[0][0]='1';
		ticTacToe[0][1]='2';
		ticTacToe[0][2]='3';
		ticTacToe[1][0]='4';
		ticTacToe[1][1]='5';
		ticTacToe[1][2]='6';
		ticTacToe[2][0]='7';
		ticTacToe[2][1]='8';
		ticTacToe[2][2]='9';
		
}
void ticTacToePrint(char ticTacToe[3][3]){
	/*essa segunda funcao serve pra imprimir o jogo da velha sempre que chamada*/
	int line, column;
		printf("\n\n\n");
			for(line = 0; line <3; line++){
				for(column = 0; column <3; column++){
					printf("    %c  ", ticTacToe[line][column]);         
					if(column < 2){
						printf("|");
					}
					if(column == 0){
						printf("");
					}
				}
				if(line < 2){
					printf("\n  ---------------------\n");
				}
			}
		printf("\n\n\n");
		
}	
int ticTacToeCorpo(char ticTacToe[3][3]){
	/*esta é a funcao que faz o jogo todo funcionar, ja que ela diz pra main onde o jogador quer
	jogar, e o que ele quer jogar X ou O*/
	int plays;
	char lineChoose, charChoose, winner,continue_='s';
		scanf("%c", &lineChoose);
    		switch(lineChoose){
    			case '1':
    				if(ticTacToe[0][0]=='1'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[0][0]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
					}
    			case '2':
    				if(ticTacToe[0][1]=='2'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[0][1]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
					}
    			case '3':
    				if(ticTacToe[0][2]=='3'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[0][2]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
					}
    			case '4':
    					if(ticTacToe[1][0]=='4'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[1][0]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}
				case '5':
    				if(ticTacToe[1][1]=='5'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[1][1]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}
				case '6':
    				if(ticTacToe[1][2]=='6'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[1][2]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}
				case '7':
    				if(ticTacToe[2][0]=='7'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[2][0]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}
				case '8':
    				if(ticTacToe[2][1]=='8'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[2][1]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}
				case '9':
    				if(ticTacToe[2][2]=='9'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &charChoose);
    					ticTacToe[2][2]=charChoose;
    					plays++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}						    					
			}
			
}
int main(){
	int plays;
    char ticTacToe[3][3];
    char winner,continue_='s';
		while(continue_=='s'){
			system("cls");
			winner='n';/*zerando o vencedor da ultima partida*/
			ticTacToeLoop(ticTacToe);/*chamando a funcao pra terminar de zerar tudo*/
			while(winner=='n'){
				system("cls");
				ticTacToePrint(ticTacToe);/*chamando a funcao pra imprimir na tela o jogo*/
				printf("\n\nDigite qual lugar vai jogar: ");
				ticTacToeCorpo(ticTacToe);/*chamando a funcao que da vida ao jogo todo*/
				plays++;
				/*vitorias por line*/
				if(ticTacToe[0][0]==ticTacToe[0][1] && ticTacToe[0][1]==ticTacToe[0][2]) winner=ticTacToe[0][0];
					if (ticTacToe[1][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[1][2]) winner=ticTacToe[1][0];
						if (ticTacToe[2][0]==ticTacToe[2][1] && ticTacToe[2][1]==ticTacToe[2][2]) winner=ticTacToe[2][0];
				/*vitorias por column*/
				if(ticTacToe[0][0]==ticTacToe[1][0] && ticTacToe[1][0]==ticTacToe[2][0]) winner=ticTacToe[0][0];
					if(ticTacToe[0][1]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][1]) winner=ticTacToe[0][1];
						if(ticTacToe[0][2]==ticTacToe[1][2] && ticTacToe[1][2]==ticTacToe[2][2]) winner=ticTacToe[0][2];
				/*vitorias por diagonal*/
				if(ticTacToe[0][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][2]) winner=ticTacToe[0][0];
					if(ticTacToe[0][2]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][0]) winner=ticTacToe[0][2];
					
				if(plays==9) break;
	}
	system("cls");
			ticTacToePrint(ticTacToe);/*imprimindo o jogo mais uma vez pra mostrar o tabuleiro final*/
				if(winner!='n'){/*declarando qual o nome do vencedor*/
					printf("O Ganhador foi o jogador: ' %c '\nDeseja continuar a jogar? ", winner);
					fflush(stdin);
					scanf("%c", &continue_);/*vendo se continua*/
					system("cls");
				}
				else{/*declarando se deu velha*/
					printf("Nao houve vencedor.\nDeseja continuar a jogar? ");
					fflush(stdin);
					scanf(" %c", &continue_);/*vendo se continua*/
					system("cls");
				}
			}
		printf("\nObrigado por jogar :)\n");
}
	


