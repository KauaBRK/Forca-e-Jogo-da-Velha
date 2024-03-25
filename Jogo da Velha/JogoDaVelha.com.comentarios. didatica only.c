#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


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
int ticTacToeCheckWins(char ticTacToe[3][3], char winner){/*FUNCAO QUE CHECA SE HOUVE GANHADOR*/

		/*VERIFICANDO GANHADOR POR LINHA*/
		/*PARA POUPAR CODIGO É MELHOR USAR ESTA TATICA POIS NUM UNICO
		 IF VERIFICA TRES DE VEZ E AO MESMO TEMPO FAZ COM QUE O GANHADOR RECEBA O CARACTERE CORRESPONDENTE*/
		 
		if(ticTacToe[0][0]==ticTacToe[0][1] && ticTacToe[0][1]==ticTacToe[0][2]) winner=ticTacToe[0][0];
				
		/*SE O GANHADOR DA PRIMEIRA LINHA	E ULTIMA LINHA TIVER O MESMO CARACTERE ENTAO ELE PELA LOGICA VENCEU,
		ENTAO O CARACTERE DA PRIMEIRA LINHA SO PRECISA SER ADICIONADO AO VENCEDOR*/
				
		if (ticTacToe[1][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[1][2]) winner=ticTacToe[1][0];
		if (ticTacToe[2][0]==ticTacToe[2][1] && ticTacToe[2][1]==ticTacToe[2][2]) winner=ticTacToe[2][0];
		/*FIM DA VERIFICACAO POR LINHA*/
				
		/*VERIFICANDO GANHADOR POR COLUNA*/
		if(ticTacToe[0][0]==ticTacToe[1][0] && ticTacToe[1][0]==ticTacToe[2][0]) winner=ticTacToe[0][0];
		if(ticTacToe[0][1]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][1]) winner=ticTacToe[0][1];
		if(ticTacToe[0][2]==ticTacToe[1][2] && ticTacToe[1][2]==ticTacToe[2][2]) winner=ticTacToe[0][2];
		/*FIM DA VERIFICACAO POR COLUNA*/
				
		/*VERIFICANDO GANHADOR POR DIAGONAL*/
		if(ticTacToe[0][0]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][2]) winner=ticTacToe[0][0];
		if(ticTacToe[0][2]==ticTacToe[1][1] && ticTacToe[1][1]==ticTacToe[2][0]) winner=ticTacToe[0][2];
		/*FIM DA VERIFICACAO POR DIAGONAL*/
	return winner;
}
int ticTacToeSwitchCase(char ticTacToe[3][3]/*Jogo da velha*/, int xOption/*Vê se X ja jogou*/){
	int lineChoose;/*
	Variavel que escolhe a linha
	
				system("cls");
				ticTacToePrint(ticTacToe);/*.PRINTEI NA TELA O JOGO DA VELHA SEGUIDO DAS OPCOES.*/
				printf("\n\nDigite qual lugar vai jogar: ");
    				scanf("%d", &lineChoose);/*.VERIFICA A LINHA QUE O JOGADOR JOGOU.*/	
				fflush(stdin);
    				switch(lineChoose){/*.ESTE PARAMETRO ATRIBUIRA O CARACTER X PARA A PRIMEIRA PESSOA QUE ESCOLHEU E
				    VAI INTERCALANDO ENTRE X E 0 A CADA JOGADA.*/
	    			case 1:
	    				if(ticTacToe[0][0]=='1' && ticTacToe[0][0]!='\n'){
	    					fflush(stdin);
	    					
	    					if(xOption==1){/*VEJO SE O JOGADOR ATUAL É X OU 0*/
	    						ticTacToe[0][0]='X';/*SE FOR X RECEBE X*/
	    						xOption=0;/*ZERANDO PARA O PROXIMO SER ZERO*/
	    						break;
							}
							if(xOption==0){/*SE FOR 0 RECEBE 0*/
	    						ticTacToe[0][0]='0';
	    						xOption=1;/*FACO O 0 VIRAR X*/
	    						break;
							}		
						}
	    				else{/* CASO O LOCAL JA ESTEJA OCUPADO EXIBE A MENSAGEM */
	    					printf("\nEste local ja foi jogado ou opção invalida\n");
	    					system("pause");
	    						break;
						}
						/*REPETE O MESMO PROCESSO PRO RESTO DO CASE*/
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


int main(){
	setlocale(LC_ALL,"portuguese");
	int plays, lineChoose, xOption, winnerX=0, winner0=0;
	/*.CONTROLE DA QUANTIDADE DE JOGADAS FEITAS.
	.ESCOLHA DA LINHA QUE VAI JOGAR, VAI DE 1 A 9.
	.ESCOLHE SE O PROXIMO JOGADOR É X OU 0.
	.PONTUACAO DO X.
	.PONTUACAO DO 0.*/
    char ticTacToe[3][3];
    /*.JOGO DA VELHA.*/
    char continue_='s', winner;
    /*.VÊ SE USUARIO QUER CONTINUAR.
    .VENDEDOR.*/
		while(continue_=='s'){/*.ENQUANTO O JOGADOR QUER JOGAR O LOOP CONTINUA.
		//ESTA PRIMEIRA PARTE SERVE APENAS PARA EU ZERAR TODOS OS PARAMETROS ANTERIORES*/
			system("cls");
			plays=0;/*ZERO A QUANTIDADE DE JOGADAS FEITAS*/
			winner='n';/*.IGUALO VENCEDOR A N OU NONE.*/
			ticTacToeLoop(ticTacToe);/*.ZERANDO O JOGO DA VELHA.*/
			xOption=1;/*.JOGADOR EM X COMEÇA PRIMEIRO SEMPRE.*/
			plays=0;/*.ZERA O NUMERO DE JOGADAS.*/
			/*. EM SUMA ESTA PRIMEIRA PARTE DO LOOP ANTES DO JOGO COMEÇAR É APENAS PARA ZERAR TODOS OS PARAMETROS EXISTENTES. */
			while(winner=='n'){/*.ENQUANTO O VENCEDOR FOR N OU NONE O JOGO CONTINUA.*/
			
				xOption=ticTacToeSwitchCase(ticTacToe, xOption);/*DECLARO A VARIAVEL XOPTION AO MESMO TEMPO QUE CHAMO O SWITCHCASE
				ESTA DECLARACAO NAO ZERA POIS XOPTION ESTA ARMAZENANDO SEMPRE O ULTIMO VALOR :)*/
				if(xOption==1 || xOption==0){/*MONITORANDO A MUDANCA DE XOPTION E ADICIONANDO JOGADAS POR MEIO DELE*/
					plays++;
				}
				winner=ticTacToeCheckWins(ticTacToe, winner);/*DEFINO O VENCEDOR PELA FUNCAO QUE CHECA VENCEDOR*/
				
				if(plays==9 && winner=='n') break;/*SE O JOGO TIVER 9 JOGADAS OU SEJA TODOS ESPAÇOS OCUPADOS, O JOGO DEU VELHA*/
				
			}
			
			system("cls");
			ticTacToePrint(ticTacToe);/*PRINTO DENOVO PARA MOSTRAR COMO O JOGO FINALIZOU*/
			if(winner=='X'){/*ATRIBUINDO UM PONTO PRA X PARA O PLACAR*/
					winnerX++;
				}
				if(winner=='0'){/*ATRIBUINDO UM PONTO PRA 0 PARA O PLACAR*/
					winner0++;
				}
			if(winner!='n'){/*SE WINNER NAO FOR MAIS NONE O GANHADOR RECEBE WINNER*/
				printf("O Ganhador foi o jogador: ' %c '\nDeseja continuar a jogar?\nSim\nNão\n", winner);/*MOSTRANDO QUEM GANHOU*/
				fflush(stdin);
				scanf("%c", &continue_);/*VENDO SE QUER CONTINUAR*/
				system("cls");
			}
			else{
				printf("Nao houve vencedor.\nDeseja continuar a jogar?\nSim\nNão");/*CASO DÊ VELHA*/
				fflush(stdin);
				scanf(" %c", &continue_);/*VENDO SE QUER CONTINUAR*/
				system("cls");
			}
			/*CASO O CONTINUE FOR NAO, MOSTRO O PLACAR COM O NUMERO DE PONTOS DE CADA SIMBOLO X E 0.*/
		}
		printf("\n\n\nObrigado por jogar :)\n\n###PLACAR###\n\nPONTOS DO X: %d\nPONTOS DO 0: %d\n\n", winnerX, winner0);
		
		/*FIM :)*/
}