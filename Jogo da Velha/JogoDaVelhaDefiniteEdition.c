#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void ticTacToeLoop(char ticTacToe[3][3]);
void ticTacToePrint(char ticTacToe[3][3]);
int ticTacToeCheckWins(char ticTacToe[3][3], char winner);
int ticTacToeSwitchCase(char ticTacToe[3][3], int xOption);

int main(){
	setlocale(LC_ALL,"portuguese");
	int lineChoose, xOption, winnerX=0, winner0=0, plays=0;
    char ticTacToe[3][3];
    char continue_='s', winner;
		while(continue_=='s'){
			plays=0;
			system("cls");
			winner='n';
			ticTacToeLoop(ticTacToe);
			xOption=1;
			plays=0;
			while(winner=='n'){
				xOption=ticTacToeSwitchCase(ticTacToe,xOption);
				if(xOption==1 || xOption==0){
					plays++;
				}
				winner=ticTacToeCheckWins(ticTacToe, winner);
				
				if(plays==9 && winner=='n') break;	
			}
			system("cls");
			ticTacToePrint(ticTacToe);
			if(winner=='X'){
					winnerX++;
				}
			if(winner=='0'){
					winner0++;
				}
			if(winner!='n'){
				printf("O Ganhador foi o jogador: ' %c '\nDeseja continuar a jogar?\nSim\nNão\n", winner);
				fflush(stdin);
				scanf("%c", &continue_);
				system("cls");
			}
			else{
				printf("Nao houve vencedor.\nDeseja continuar a jogar?\nSim\nNão\n");
				fflush(stdin);
				scanf(" %c", &continue_);
				system("cls");
			}
		}
		printf("\n\n\nObrigado por jogar :)\n\n###PLACAR###\n\nPONTOS DO X: %d\nPONTOS DO 0: %d\n\n", winnerX, winner0);
}
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
int ticTacToeCheckWins(char ticTacToe[3][3], char winner){

	if(ticTacToe[0][0]==ticTacToe[0][1] && ticTacToe[0][1]==ticTacToe[0][2]) winner=ticTacToe[0][0];
	if (ticTacToe[1][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[1][2]) winner=ticTacToe[1][0];
	if (ticTacToe[2][0]==ticTacToe[2][1] && ticTacToe[2][1]==ticTacToe[2][2]) winner=ticTacToe[2][0];
				
	if(ticTacToe[0][0]==ticTacToe[1][0] && ticTacToe[1][0]==ticTacToe[2][0]) winner=ticTacToe[0][0];
	if(ticTacToe[0][1]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][1]) winner=ticTacToe[0][1];
	if(ticTacToe[0][2]==ticTacToe[1][2] && ticTacToe[1][2]==ticTacToe[2][2]) winner=ticTacToe[0][2];
				
	if(ticTacToe[0][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][2]) winner=ticTacToe[0][0];
	if(ticTacToe[0][2]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][0]) winner=ticTacToe[0][2];
				
	return winner;
}
int ticTacToeSwitchCase(char ticTacToe[3][3], int xOption){
	int lineChoose;
		system("cls");
		ticTacToePrint(ticTacToe);
		printf("\n\nDigite qual lugar vai jogar: ");
    	scanf("%d", &lineChoose);
		fflush(stdin);
    	switch(lineChoose){	    	
	    	case 1:
	    		if(ticTacToe[0][0]=='1' && ticTacToe[0][0]!='\n'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[0][0]='X';
	    				xOption=0;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[0][0]='0';
	    				xOption=1;
	    				break;
					}		
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
				}
	    	case 2:
	    		if(ticTacToe[0][1]=='2'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[0][1]='X';
	    				xOption=0;
	    				break;
					}
					if(xOption==0){
						ticTacToe[0][1]='0';
	    				xOption=1;
	    				break;
					}			
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
				}
	    	case 3:
	    		if(ticTacToe[0][2]=='3'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[0][2]='X';
	    				xOption=0;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[0][2]='0';
	    				xOption=1;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
				}
	    	case 4:
	    		if(ticTacToe[1][0]=='4'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[1][0]='X';
	    				xOption=0;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[1][0]='0';
	    				xOption=1;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 5:
	    		if(ticTacToe[1][1]=='5'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[1][1]='X';
	   					xOption=0;
	  					break;
					}
					if(xOption==0){
						ticTacToe[1][1]='0';
	    				xOption=1;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 6:
	    		if(ticTacToe[1][2]=='6'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[1][2]='X';
	    				xOption=0;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[1][2]='0';
	    				xOption=1;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 7:
	    		if(ticTacToe[2][0]=='7'){						
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[2][0]='X';
	    				xOption=0;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[2][0]='0';
	    				xOption=1;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 8:
	    		if(ticTacToe[2][1]=='8'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[2][1]='X';
	    				xOption=0;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[2][1]='0';
	    				xOption=1;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}
			case 9:
	    		if(ticTacToe[2][2]=='9'){
	    			fflush(stdin);
	    			if(xOption==1){
	    				ticTacToe[2][2]='X';
	    				xOption=0;
	    				break;
					}
					if(xOption==0){
	    				ticTacToe[2][2]='0';
	    				xOption=1;
	    				break;
					}
				}
	    		else{
	    			printf("\nEste local ja foi jogado ou opção invalida\n");
	    			system("pause");
	    			break;
	    		}						    					
		}
		return xOption;
}
