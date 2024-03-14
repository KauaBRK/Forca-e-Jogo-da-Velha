/*ESTA PRIMEIRA FUNCAO É O QUE DENOMINA OQ É A FORCA E COMO FUNCIONARA, MOSTRANDO O BONEQUINHO.*/
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

  /*ESSES DOIS PRIMEIROS GRUPOS SAO OS QUE DENOMINAM AS CATEGORIAS DAS PALAVRAS E AS PALAVRAS EM SI*/

  char secretWord [50] , screenWord [50] , tipWord [20] , guessWord , correctSecretWord;
  /*RESPECTIVAMENTE A PALAVRA QUE O JOGADOR ESCOLHEU, A PALAVRA QUE O DESAFIADO VÃŠ, A DICA, O CHUTE E O PARAMETRO PRA FAZER COM QUE O JOGADOR SO DIGITE LETRAS*/

  int player = 1 , madeMistake , errors=0 , option , sortNumberWord , sortNumberCategory, i, continue_=1, loops, streak=0, counter;
  /*RESPECTIVAMENTE O CONTADOR QUE DITA O JOGADOR ATUAL EU PODERIA TROCAR PRA PLAYER, O VERIFICADOR DE PALAVRAS ERRADAS, OS ERROS QUE DITAM COMO A FORCA ESTÃ, OS NUMEROS SORTEADOS PRA CATEGORIA E PALAVRA, UM INTEIRO I, UM VERIFICADOR DE CONTINAR NO JOGO, AS OPCOES DO INICIO PRO JOGADOR ESCOLHER A PALAVRA ALEATORIA OU DIGITAR, OS LOOPS PRA CONTAR QUANTAS VEZES JOGOU, O VENCEDOR E AS STREAKS*/

  int playersScore[10][2]={0,0}, scoreSum[10][1]={0};
  /*EM SUMA E A PONTUACAO DE CADA PLAYER, ONDE PLAYER SCORE E A PONTUACAO ATUAL E SCORESUM E A PONTUACAO TOTAL*/
  	
  	while (continue_ == 1 || continue_ == 2){
  		/*ESTE E O PRIMEIRO LOOP DO JOGO QUE DENOMINA SE O PLAYER VAI CONTINUAR JOGANDO OU N*/

		loops++;
  		fflush (stdin);
  		system ("cls");
  		errors = 0;
  		printf("###JOGO DA FORCA###\nBem vindo jogador %d\nPara começar digite o numero para a opção que voce quer: \n1- Digitar a palavra screta.\n2- Sortear uma das palavras do banco de dados.\n",player);
  		scanf (" %d", &option );
			
  			if (option == 1 ){/*ESTE LOOP Ã‰ PRA SABER SE O JOGADOR TA DIGITANDO UMA PALAVRA OU NUMERO, ELE TAMBEM LE '-' E ' ' COMO EU TINHA DITO ANTERIORMENTE*/
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
		  		}/*FIM DO LOOP DE PALAVRA OU NUMERO ESCOLHIDO DO USARIO*/
				fflush ( stdin );
    				printf ( "\n\nAgora digite a dica para esta palavra: " );
  				fgets ( tipWord , 20 , stdin );
  			}
			if(option!=1){/*SE FOR A OPCAO DIFERENTE DE 1 ELE LE O BANCO DE DADOS ALEATORIO*/
    				srand ( time ( NULL ) );/*EU QUERO QUE A SEED SEJA BASEADA NA HORA DO CONSOLE*/
    				sortNumberWord = rand () %186;/*SORTEIO O NUMERO*/
				if ( sortNumberWord >= 0 && sortNumberWord <26 ) sortNumberCategory = 0 ;/*ESTES IF'S E ELSE IF'S SAO PRA SORTEAR A PALAVRA*/

				else if ( sortNumberWord >= 26 && sortNumberWord < 50 ) sortNumberCategory = 1;
	
				else if ( sortNumberWord >= 50 && sortNumberWord < 70 ) sortNumberCategory = 2;
		
				else if ( sortNumberWord >= 70 && sortNumberWord < 120 ) sortNumberCategory = 3;
	
				else if ( sortNumberWord >= 120 && sortNumberWord < 156 ) sortNumberCategory = 4;
	
				else if ( sortNumberWord >= 120 && sortNumberWord < 156 ) sortNumberCategory = 4;
	
				else if ( sortNumberWord >= 156 && sortNumberWord < 186 ) sortNumberCategory = 5;
	
				else if ( sortNumberWord >= 186 && sortNumberWord < 216 ) sortNumberCategory = 6;
		
				strlwr(secretWordSystem[sortNumberWord]);/*AQUI E PRA DEIXAR TUDO MINUSCULO*/
		
    				strcpy ( secretWord, secretWordSystem [ sortNumberWord ] );/*AQUI EU FIZ UMA COPIA DA PALAVRA DO BANCO DE DADOS PARA A PALAVRA SECRETA PRINCIPAL*/
    	
				strcpy ( tipWord , tipWordSystem [ sortNumberCategory ] );/*AQUI EU FIZ UMA COPIA DA CATEGORIA DO BANCO DE DADOS PARA A DICA*/
			}
	
		printf ( "\nPronto, a palavra secreta é: %s\nA dica é: %s\n\nCodificando a palavra secreta:\n" , secretWord, tipWord);
    		strcpy ( screenWord , secretWord );/*AQUI EU ESTOU DIZENDO OQ O DESAFIADO VAI VER, QUE NO CASO Ã‰ A PALAVRA DE TELA QUE SE TRANSOFORMA EM TRACOS*/
    		for ( i = 0; i < strlen ( screenWord ) ; i++){
    			screenWord [ i ]  = '_';
    			printf ( " %s\n" , screenWord );
  		}
  		printf ( "Tudo pronto pro Desafiado %d começar a jogar\n" , player );
  		system ( "pause" );
  		system ( "cls" );/*AQUI FINALIZOU A ETAPA INICIAL DO PROGRAMA*/
  	
    		while ( 1 ) {/*ESTE E O JOGO EM SI*/
    	
    			fflush(stdin);
    			madeMistake = 1;/*ESTE CONTADOR DEVE SEMPRE SER 1, POIS EU SO ZERO ELE CASO ACERTE*/
    			printf ( "\n\n###JOGO DA FORCA###\n\nBem vindo desafiado %d\n\nNúmero de letras da palavra: %lu\n\nA dica para a palavra é: %s\nPontos do desafiado n° %d: %d\n" , player , strlen ( secretWord ), tipWord, player, scoreSum[player][1]);
    			forca ( errors );/*MOSTRANDO O ESTADO DA FORCA COM BASE NOS ERROS*/
    			printf ( "\nPalavra: %s\nDigite uma letra ou a palavra inteira: " , screenWord );/*ESTOU MOSTRANDO A PALAVRA DE TELA*/
    			guessWord=getch();/*ESTOU COLETANDO A PALAVRA*/
    			for ( i = 0; i < strlen ( screenWord ) ; i++){/*ESTE LOOP SERVE PRA VER SE A LETRA ESTA CERTA INDEPENDENTE DA POSICAO E SE ESTIVER CERTA A LETRA Ã‰ ADICIONADA NA PALAVRA DE TELA*/
    				if (isalpha(guessWord)!=0 || guessWord==32 ){
    					if ( guessWord  == secretWord [ i ] ){
      					screenWord [ i ] = guessWord;
      					madeMistake = 0;/*OS ERROS NAO SAO CONTABILIZADOS QUANDO ZERO*/
					}
    				}
      		}
    			if ( madeMistake == 1 ){/*ADICIONANDO ERROS*/
      			errors++;
    			}
    			if ( strcmp ( secretWord , screenWord ) == 0){/*COMPARA SE A PALAVRA DE TELA E A PALAVRA SECRETA ESTAO IGUAIS, SE SIM O JOGADOR GANHA E ADICIONA 1 STREAK DE VITORIA NA CONTA*/
    				streak ++;
      			system ( "cls" );
      			if(streak>4){/*NUMERO DE STREAKS NECESSARIAS PRA TER MAIS PONTOS*/
					printf("\n\nO jogador %d está numa streak de %d acertos!! +2 pontos pra você\n\n",player,streak);
					playersScore[player][1]+=2;/*ADICIONANDO 2 PONTOS*/
				
				}
      			forca ( errors );
      			printf ( "\nVoce acertou a palavra: %s\n\nVOCE VENCEU PARABENS!!!!\n\nDeseja continuar a jogar no mesmo jogador, deseja trocar de jogador ou deseja sair?\n1-Jogar no mesmo\n2-Trocar de jogador\n3-Sair\n" , secretWord );
      			fflush(stdin);
      			playersScore[player][1]++;
      			scoreSum[player][1]=playersScore[player][1]+playersScore[player][2];/*E NECESSARIO POR ELE SEMPRE NESSA POSICAO POIS EU ESTOU TAMBEM MOSTRANDO QUANTOS PONTOS O JOGADOR TEM*/
      			
      			scanf ( "%d" , &continue_ );
      			if ( continue_ == 2 ){/*CASO HAJA TROCA DE JOGADOR, O LOOP ENCERRA ADICIONA O PLAYER NOVO E VOLTA AO INICIO*/
      				player++;
      				counter++;
      				streak=0;
      				break;
			  	}
      			break;/*CASO CONTRARIO O LOOP SO ENCERRA, VOLTA AO INICIO MAS NAO ADICIONA PLAYERS E O PLAYER ATUAL CONTINUA JOGANDO*/
    			}
    			else if ( strcmp ( secretWord , screenWord) != 0 && errors == 6 ){
    		
    				streak=0;
    				system ( "cls" );
      			forca ( errors );
      			printf ( "\nVoce errou a palavra: %s\n\nDeseja continuar a jogar no mesmo jogador, deseja trocar de jogador ou deseja sair?\n1-Jogar no mesmo\n2-Trocar de jogador\n3-Sair\n", secretWord );
      			fflush ( stdin );
      			playersScore[player][2]--;/*COLOQUEI COMO -- NA POSICAO 2 DA MATRIZ POIS ASSIM FICA MAIS FACIL DE ORGANIZAR*/
      			scoreSum[player][1]=playersScore[player][1]+playersScore[player][2];
      			scanf ( "%d" , &continue_ );
      			if ( continue_ == 2 ){/*CASO HAJA TROCA DE JOGADOR, O LOOP ENCERRA ADICIONA O PLAYER NOVO E VOLTA AO INICIO*/
      				player++;
      				streak=0;
      				break;
			  	}
      			break;/*CASO CONTRARIO O LOOP SO ENCERRA, VOLTA AO INICIO MAS NAO ADICIONA PLAYERS*/
    			}
    			system ( "cls" );
    		}
  	}
  	system ( "cls" );/*QUANDO O JOGO ACABA DE SER JOGADO ELE ZERA AS INFORMACOES E MOSTRA QUANTAS VEZES FOI JOGADO E O PLACAR*/
  	printf ( "OBRIGADO POR JOGAR %d VEZES MEU JOGO DA FORCA!\n\nA seguir o placar: ", loops );
  	counter=player;
  	player=1;
		for( i = 0 ; i < counter; i++){
			printf ("\nJogador n° %d\nPontos: %d\n", player, scoreSum [ player ] [ 1 ] );
			player ++;
		}
  	system ( "pause" );
}
