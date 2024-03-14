#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include <conio.h>
#include<time.h>
#include <ctype.h>
#define MAX_WORD 216
#define MAX_CATEGORY 10
void forca(int errors){
  if(errors==0){
  printf("\n|________________");
  printf("\n|               |");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  }
  if(errors==1){
  printf("\n|________________");
  printf("\n|               |");
  printf("\n|               O");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  }
  if(errors==2){
  printf("\n|________________");
  printf("\n|               |");
  printf("\n|               O");
  printf("\n|               |");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  }
  if(errors==3){
  printf("\n|________________");
  printf("\n|               |");
  printf("\n|               O");
  printf("\n|              /|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  }
  if(errors==4){
  printf("\n|________________");
  printf("\n|               |");
  printf("\n|               O");
  printf("\n|              /|\\");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|VOCE SO TEM MAIS 2 CHANCES!!");
  }
  if(errors==5){
  printf("\n|________________");
  printf("\n|               |");
  printf("\n|               O");
  printf("\n|              /|\\");
  printf("\n|              /");
  printf("\n|");
  printf("\n|");
  printf("\n|VOCE SO TEM MAIS 1 CHANCE!");
  }
  if(errors==6){
  printf("\n|________________");
  printf("\n|               |");
  printf("\n|               O");
  printf("\n|              /|\\");
  printf("\n|              / \\");
  printf("\n|");
  printf("\n|");
  printf("\n|VOCE PEREDEU!!");
  }

}
int main(){
  setlocale(LC_ALL,"portuguese");
  char secretWordSystem [MAX_WORD] [50] = {"aguia", "alpaca", "beluga", "cagado", "chinchila", "dromedario", "escaravelho", "gnu", "hamster", "lemure", "lhama", "lince", "marreco", "ornitorrinco", "ourico", "pelicano", "percevejo", "pirilampo", "quati", "kiwi", "rouxinol", "sanguessuga", "surucucu", "tapir", "texugo", "zebu", "apicultor", "auditor", "bartender", "cerimonialista", "chef", "desembargador", "despachante", "endocrinologista", "embaixador", "gerente", "hepatologista", "interprete", "juiz", "nanotecnologo", "nutrologo", "pizzaiolo", "perito", "quiromante", "quiroprata", "roteirizador", "silvicultor", "trader", "taquigrafo", "turismologo", "UVA", "FIGO", "MAMAO", "AMORA","CAJU", "LARANJA","CUPUACU","MORANGO","CEREJA", "ABACAXI" , "MARMELO" , "JACA", "BANANA" , "FRAMBOESA" , "ACAI", "PERA" , "PITANGA" , "COCO" , "ACEROLA" , "MANGA", "Afrodite","Apolo","Ares","Artemis","Atena","Demeter","Dionisio","Eos","Eros","Hades","Helios","Hermes","Hera","Hestia","Horas","Mnemosine","Persefone","Poseidon","Selene","Temis","Zeus","Belerofonte","Perseu","Teseu","Heracles","Prometeu","Orfeu","Ulisses","Aquiles","Hercules","Eolo","Cronos","Atlas","Pan","Narciso","Tantalo","Euridice","Icaro","Medeia","Pandora","Tritao","Cerbero","Minos","Nemesis","Nix","Tique","Quiron","Clio","Euterpe","Talia","Melpomene","Terpsicore","Erato","Polimnia","Urania","Caliope","Mickey Mouse", "Pato Donald", "Pateta", "Pluto", "Minnie Mouse", "Margarida", "Tom", "Jerry", "Scooby Doo", "Fred Flintstone", "Barney Rubble", "George Jetson", "Elroy Jetson", "Pernalonga", "Patolino", "Popeye", "Olivia Palito", "Brutus", "Papa-Leguas", "Coelho Ricochete", "Frajola", "Piu-Piu", "Ze Colmeia", "Catatau", "Guarda Smith", "Bart Simpson", "Homer Simpson", "Marge Simpson", "Lisa Simpson", "Maggie Simpson","Abecasia","Afeganistao","Africa do Sul","Albania","Alemanha","Andorra","Angola","Antigua","Arabia Saudita","Argelia","Argentina","Armenia","Australia","Austria","Azerbaijao","Bahamas","Bahrein","Bangladesh","Barbados","Belgica","Belize","Benim","Bielorrussia","Bolivia","Bosnia","Botswana","Brasil","Brunei","Bulgaria","Burkina","Feijoada","Pao de Queijo","Coxinha","Pastel","Moqueca","Bobo de Camarão","Tapioca","Baiao de Dois","Vatapa","Carne de Sol","Acai","Tutu de Feijao","Canjica","Cuscuz Paulista","Pamonha","Quindim","Pacoca","Escondidinho","Torta de Frango","Caldinho de Feijao","Bolo de Fuba","Cocada","Rabada","Bolo de Rolo","Casquinha de Siri","Empadao","Buchada de Bode","Camarao na Moranga","Bolo de Milho Verde","Canjiquinha"};
  char tipWordSystem [MAX_CATEGORY] [25] = {"Animal","Profissão","Fruta","Deuses mitólogicos","Personagens de Cartoon","Países","Comidas"};
  
  char secretWord [50] , screenWord [50] , tipWord [20] , guessWord , correctSecretWord;
  
  int player = 1 , madeMistake , errors=0 , option , sortNumberWord , sortNumberCategory, i, continue_=1, loops, streak=0, counter;
  
  int playersScore[10][2]={0,0}, scoreSum[10][1]={0};
  
  	
  	while (continue_ == 1 || continue_ == 2){
  		
		loops++;
  		fflush (stdin);
  		system ("cls");
  		errors = 0;
  		printf("###JOGO DA FORCA###\nBem vindo jogador %d\nPara começar digite o numero para a opção que voce quer: \n1- Digitar a palavra screta.\n2- Sortear uma das palavras do banco de dados.\n",player);
  		scanf (" %d", &option );
			
  			if (option == 1 ){
  				fflush(stdin);
    				printf ( "Boa escolha!\nDigite qual vai ser a palavra secreta:" );
    				scanf (" %s", secretWord);
				
    				while ( correctSecretWord != 'c'){
    					fflush ( stdin );
  						for(i = 0; i < strlen(secretWord); i++){
  							if (isalpha(secretWord[i])!=0 || secretWord[i]==32 ){
  								correctSecretWord='c';
				  			}
				  			else{
				  			system ( "cls" );
				  			fflush ( stdin );
				  			printf ( "\nCaracter incorreto. Digite novamente: " );
				  			correctSecretWord = 'w';
				  			scanf (" %s", secretWord);
				  			}
			  			}
		  		}
				fflush ( stdin );
    				printf ( "\n\nAgora digite a dica para esta palavra: " );
  				fgets ( tipWord , 20 , stdin );
  			}
			if(option!=1){
    				srand ( time ( NULL ) );
    				sortNumberWord = rand () %186;
				if ( sortNumberWord >= 0 && sortNumberWord <26 ) sortNumberCategory = 0 ;

				else if ( sortNumberWord >= 26 && sortNumberWord < 50 ) sortNumberCategory = 1;
	
				else if ( sortNumberWord >= 50 && sortNumberWord < 70 ) sortNumberCategory = 2;
		
				else if ( sortNumberWord >= 70 && sortNumberWord < 120 ) sortNumberCategory = 3;
	
				else if ( sortNumberWord >= 120 && sortNumberWord < 156 ) sortNumberCategory = 4;
	
				else if ( sortNumberWord >= 120 && sortNumberWord < 156 ) sortNumberCategory = 4;
	
				else if ( sortNumberWord >= 156 && sortNumberWord < 186 ) sortNumberCategory = 5;
	
				else if ( sortNumberWord >= 186 && sortNumberWord < 216 ) sortNumberCategory = 6;
		
				strlwr(secretWordSystem[sortNumberWord]);
		
    				strcpy ( secretWord, secretWordSystem [ sortNumberWord ] );
    	
				strcpy ( tipWord , tipWordSystem [ sortNumberCategory ] );
			}
		
    		strcpy ( screenWord , secretWord );
		
    		for ( i = 0; i < strlen ( screenWord ) ; i++){
			
    			screenWord [ i ]  = '_';
  		}
  		printf ( "Tudo pronto pro Jogador %d começar a jogar\n" , player );
		
  		system ( "pause" );
		
  		system ( "cls" );
  	
    		while ( 1 ) {
    	
    			fflush(stdin);
    			madeMistake = 1;
    			printf ( "\n\n###JOGO DA FORCA###\n\nBem vindo Jogador %d\n\nNúmero de letras da palavra: %lu\n\nA dica para a palavra é: %s\nPontos do Jogador n° %d: %d\n" , player , strlen ( secretWord ), tipWord, player, scoreSum[player][1]);
    			forca ( errors );
    			printf ( "\nPalavra: %s\nDigite uma letra ou a palavra inteira: " , screenWord );
    			guessWord=getch();
			
    			for ( i = 0; i < strlen ( screenWord ) ; i++){
				
    				if (isalpha(guessWord)!=0 || guessWord==32 ){
    					if ( guessWord  == secretWord [ i ] ){	
      					screenWord [ i ] = guessWord;
      					madeMistake = 0;
						}
    				}
      			}	
    			if ( madeMistake == 1 ) errors++;
      			
    			if ( strcmp ( secretWord , screenWord ) == 0){
    				streak ++;
      				system ( "cls" );
      				if(streak>4){
						printf("\n\nO Jogador %d está numa streak de %d acertos!! +2 pontos pra você\n\n",player,streak);
						playersScore[player][1]+=2;
					}
      				forca ( errors );
      				printf ( "\nVoce acertou a palavra: %s\n\nVOCE VENCEU PARABENS!!!!\n\nDeseja continuar a jogar no mesmo jogador, deseja trocar de jogador ou deseja sair?\n1-Jogar no mesmo\n2-Trocar de jogador\n3-Sair\n" , secretWord );
      				fflush(stdin);
      				playersScore[player][1]++;
      				scoreSum[player][1]=playersScore[player][1]-playersScore[player][2];
      				scanf ( "%d" , &continue_ );
				
      				if ( continue_ == 2 ){
      					player++;
      					counter++;
      					streak=0;
      					break;
			  		}
      				break;
    			}
    			else if ( strcmp ( secretWord , screenWord) != 0 && errors == 6 ){
    		
    				streak=0;
    				system ( "cls" );
      				forca ( errors );
      				printf ( "\nVoce errou a palavra: %s\n\nDeseja continuar a jogar no mesmo jogador, deseja trocar de jogador ou deseja sair?\n1-Jogar no mesmo\n2-Trocar de jogador\n3-Sair\n", secretWord );
      				fflush ( stdin );
      				playersScore[player][2]++;
      				scoreSum[player][1]=playersScore[player][1]-playersScore[player][2];
      				
      				if(scoreSum[player][1]<0){
						scoreSum[player][1]=0;
						playersScore[player][2]=0;
					}
      				scanf ( "%d" , &continue_ );
				
      				if ( continue_ == 2 ){
      					player++;
      					streak=0;
      					break;
			  		}
      				break;
    			}
    				system ( "cls" );
    		}
  	}
  	system ( "cls" );
  	printf ( "OBRIGADO POR JOGAR %d VEZES MEU JOGO DA FORCA!\n\nA seguir o placar: ", loops );
  	counter=player;
  	player=1;
  	
		for( i = 0 ; i < counter; i++){
			
			if(scoreSum[player][1]<0){
				scoreSum[player][1]=0;
			}
			
			printf ("\nJogador n° %d\nPontos: %d\n", player, scoreSum [ player ] [ 1 ] );
			player ++;
		}
  	system ( "pause" );
}
