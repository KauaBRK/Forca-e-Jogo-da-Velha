#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
void jogoDaVelha(){
}
	
int main(){

	int jogadas;
 	int linha, col;
    char jogo[3][3]={'1','2','3','4','5','6','7','8','9'};
    char escolha, choose, winner='n',continue_='s';
    
	while(continue_=='s'){
		system("cls");
		printf("\n\n\n");
		for(linha = 0; linha <3; linha++){
			for(col = 0; col <3; col++){
				printf("    %c  ", jogo[linha][col]);         
				if(col < 2){
					printf("|");
				}
				if(col == 0){
					printf("");
				}
			}
			if(linha < 2){
				printf("\n  ---------------------\n");
			}
		}
		printf("\n\nDigite qual lugar vai jogar: ");
		scanf("%c", &escolha);
		
    		switch(escolha){
    			case '1':
    				if(jogo[0][0]=='1'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[0][0]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
					}
    			case '2':
    				if(jogo[0][1]=='2'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[0][1]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
					}
    			case '3':
    				if(jogo[0][2]=='3'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[0][2]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
					}
    			case '4':
    					if(jogo[1][0]=='4'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[1][0]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    			}
				case '5':
    				if(jogo[1][1]=='5'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[1][1]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    			}
				case '6':
    				if(jogo[1][2]=='6'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[1][2]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}
				case '7':
    				if(jogo[2][0]=='7'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[2][0]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}
				case '8':
    				if(jogo[2][1]=='8'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[2][1]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}
				case '9':
    				if(jogo[2][2]=='9'){
    					fflush(stdin);
    					printf("\nX ou O ?\n");
    					scanf("%c", &choose);
    					jogo[2][2]=choose;
    					jogadas++;
    						break;
					}
    				else{
    					printf("\nEste local ja foi jogado\n");
    					system("pause");
    						break;
    				}						    					
			}
			/*vitorias por linha*/
			if(jogo[0][0]==jogo[0][1] && jogo[0][1]==jogo[0][2]) winner=jogo[0][0];
				if (jogo[1][0]==jogo[1][1] && jogo[1][1]==jogo[1][2]) winner=jogo[1][0];
					if (jogo[2][0]==jogo[2][1] && jogo[2][1]==jogo[2][2]) winner=jogo[2][0];
			/*vitorias por coluna*/
			if(jogo[0][0]==jogo[1][0] && jogo[1][0]==jogo[2][0]) winner=jogo[0][0];
			if(jogo[0][1]==jogo[1][1] && jogo[1][1]==jogo[2][1]) winner=jogo[0][1];
			if(jogo[0][2]==jogo[1][2] && jogo[1][2]==jogo[2][2]) winner=jogo[0][2];
			/*vitorias por diagonal*/
			if(jogo[0][0]==jogo[1][1] && jogo[1][1]==jogo[2][2]) winner=jogo[0][0];
			if(jogo[0][2]==jogo[1][1] && jogo[1][1]==jogo[2][0]) winner=jogo[0][2];
    	if(winner!='n' || jogadas==9){
			system("cls");
			printf("\n\n\n");
			for(linha = 0; linha <3; linha++){
				for(col = 0; col <3; col++){
					printf("    %c  ", jogo[linha][col]);
			             
					if(col < 2){
						printf("|");
					}
					if(col == 0){
						printf("");
					}
				}
				if(linha < 2){
					printf("\n  ---------------------\n");
				}
			}
			printf("\n\n\n");
			if(winner!='n'){
				printf("O Ganhador foi o jogador: ' %c '\nDeseja continuar a jogar?", winner);
				fflush(stdin);
				scanf("%c", &continue_);
				system("cls");
			}
			else{
				printf("Nao houve vencedor.\nDeseja continuar a jogar?");
				fflush(stdin);
				scanf(" %c", &continue_);
				system("cls");
			}
		}
	}
	return 0;	
}
	


