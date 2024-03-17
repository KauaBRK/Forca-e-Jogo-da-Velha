#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
void ticTacToeLoop(char ticTacToe[3][3]){
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
	int line, column;
		printf("\n\n\n   ###JOGO DA VELHA####\n\n\n");
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
			winner='n';
			ticTacToeLoop(ticTacToe);
			while(winner=='n'){
				system("cls");
				ticTacToePrint(ticTacToe);
				printf("\n\nDigite qual lugar vai jogar: ");
				ticTacToeCorpo(ticTacToe);
				plays++;
				
				if(ticTacToe[0][0]==ticTacToe[0][1] && ticTacToe[0][1]==ticTacToe[0][2]) winner=ticTacToe[0][0];
					if (ticTacToe[1][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[1][2]) winner=ticTacToe[1][0];
						if (ticTacToe[2][0]==ticTacToe[2][1] && ticTacToe[2][1]==ticTacToe[2][2]) winner=ticTacToe[2][0];
				
				if(ticTacToe[0][0]==ticTacToe[1][0] && ticTacToe[1][0]==ticTacToe[2][0]) winner=ticTacToe[0][0];
					if(ticTacToe[0][1]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][1]) winner=ticTacToe[0][1];
						if(ticTacToe[0][2]==ticTacToe[1][2] && ticTacToe[1][2]==ticTacToe[2][2]) winner=ticTacToe[0][2];
				
				if(ticTacToe[0][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][2]) winner=ticTacToe[0][0];
					if(ticTacToe[0][2]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][0]) winner=ticTacToe[0][2];
				
				if(plays==9) break;
			}
			system("cls");
			ticTacToePrint(ticTacToe);
			if(winner!='n'){
				printf("O Ganhador foi o jogador: ' %c '\nDeseja continuar a jogar? ", winner);
				fflush(stdin);
				scanf("%c", &continue_);
				system("cls");
			}
			else{
				printf("Nao houve vencedor.\nDeseja continuar a jogar? ");
				fflush(stdin);
				scanf(" %c", &continue_);
				system("cls");
			}
		}
		printf("\n\n\nObrigado por jogar :)\n");
}
	


