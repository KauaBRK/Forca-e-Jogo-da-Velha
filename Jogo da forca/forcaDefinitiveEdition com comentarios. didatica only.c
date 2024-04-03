#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<locale.h>

#include<time.h>

#include <ctype.h>

#include<conio.h>

#define MAX_NUMBER_OF_CHAR 70 /*DEFINI O MAXIMO DE CARACTERES*/
#define MAX_NUMBER_OF_WORDS 216 /*DEFINI O MAXIMO DE PALAVRAS EM 216 QUE ESTOU USANDO NO MOMENTO*/
#define MAX_NUMBER_OF_CATEGORY 10 /*NUMERO DE PALAVRAS DISTRIBUIDAS EM 10 CATEGORIAS*/

typedef struct {
  int scoreSum[10][1];
  char playerName[50];
}
Player; /*STRUCT PRA ARMAZENAR OS DADOS DE ATE 10 PLAYERS*/
typedef struct {
  int topTier;
  char playerName[50];
}
HighScore; /*STRUCT PRA ARMAZENAR OS DADOS DE HIGHSCORE*/

Player players[10];
HighScore topScore;

void hangMan(int errors) {
  /*DETERMINA O ESTADO ATUAL DA FORCA*/
  if (errors == 0) {
    printf("\n|________________");
    printf("\n|               |");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
  }
  if (errors == 1) {
    printf("\n|________________");
    printf("\n|               |");
    printf("\n|               O");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
  }
  if (errors == 2) {
    printf("\n|________________");
    printf("\n|               |");
    printf("\n|               O");
    printf("\n|               |");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
  }
  if (errors == 3) {
    printf("\n|________________");
    printf("\n|               |");
    printf("\n|               O");
    printf("\n|              /|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
  }
  if (errors == 4) {
    printf("\n|________________");
    printf("\n|               |");
    printf("\n|               O");
    printf("\n|              /|\\");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|VOCE SO TEM MAIS 2 CHANCES!!");
  }
  if (errors == 5) {
    printf("\n|________________");
    printf("\n|               |");
    printf("\n|               O");
    printf("\n|              /|\\");
    printf("\n|              /");
    printf("\n|");
    printf("\n|");
    printf("\n|VOCE SO TEM MAIS 1 CHANCE!");
  }
  if (errors == 6) {
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
int hangManOption() {
  /*É UMA FUNCAO PARA DELIMITAR AS OPCOES DO USUARIO*/
  int i, correctOption = 0, tryNumber = 0;
  /*INTEIRO QUALQUER PARA CONTADOR
  OPCAO CORRETA CASO HAJA
  NUMERO DE TENTATIVAS*/
  int option, aux;
  /*VARIAVEL QUE ESCOLHE AS OPCOES, VAI DE 1 ATE 3
  AUXILIAR PARA NAO PASSAR LETRAS OU NUMEROS MAIORES QUE 3*/

  do {
    /*PRIMEIRO LOOP*/
    aux = scanf("%d", & option); /*ESTA VARIAVEL AUXILIAR VAI VER SE ESTA DIGITANDO UM NUMERO, SE FOR LETRA NAO TERMINA A FUNCAO E REINICIA O LOOP*/
    fflush(stdin);
    while (correctOption != 1) {
      /*SEGUNDO LOOP PARA VER SE A OPCAO DIGITADA É VALIDA*/
      fflush(stdin);
      for (i = 0; i <= 51; i++) {
        /*ESTE FOR VAI DE 0 A 51 QUE É O NUMERO DE TENTATIVAS MAXIMAS*/
        if (option == 1 || option == 2 || option == 3) {
          /*CASO A OPCAO SEJA VALIDA O LOOP ACABA*/
          fflush(stdin);
          correctOption = 1; /*CASO ESTEJA CERTO VIRA 1 E TERMINA O 2DO LOOP*/
        } else {

          fflush(stdin);
          printf("\nOpção inválida. Digite novamente.\n "); /*CASO O LOOP DO FOR REINICIE APARECE ESTA MENSAGEM*/
          correctOption = 0;
          aux = scanf("%d", & option);
          fflush(stdin);
          tryNumber++; /*ACUMULANDO TENTATIVAS*/
        }
        if (tryNumber == 51) {
          /*CASO AS TENTATIVAS EXCEDAM 51 O PROGRAMA ENCERRA.*/
          printf("\nNumero de tentativas excedidas. Encerrando programa");
          option = 2; /*DEFAULT*/
          break;
        }
      }
      system("cls");
    }
  } while (aux == 0 && option <= 3);
  /*ESTA VARIAVEL AUXILIAR TEM DE SER = 1 POIS SO PODE SER NUMERO
  	FIM DO 1RO LOOP*/
  return option; /*RETORNEI A OPCAO SELECIONADA*/
}
void hangManWordUser(char secretWord[MAX_NUMBER_OF_CHAR], char tipWord[MAX_NUMBER_OF_CHAR], char screenWord[MAX_NUMBER_OF_CHAR]) {
  /*ESTA É A FUNCAO QUE DA VIDA A FORCA
  A PRIMEIRA VARIAVEL É O QUE VAI POSSIBILITAR A FORCA FUNCIONAR RETORNANDO UMA STRING, ESTA VARIAVEL É A PALAVRA SECRETA
  A SEGUNDA VARIAVEL DETERMINA A DICA
  A TERCEIRA VARIAVEL  DETERMINA A PALAVRA QUE O USUARIO TEM ACESSO EM QUE SO É MOSTRADO OS CARACTERES "----" */

  char secretWordSystem[MAX_NUMBER_OF_WORDS][50] = {
    "aguia",
    "alpaca",
    "beluga",
    "cagado",
    "chinchila",
    "dromedario",
    "escaravelho",
    "gnu",
    "hamster",
    "lemure",
    "lhama",
    "lince",
    "marreco",
    "ornitorrinco",
    "ourico",
    "pelicano",
    "percevejo",
    "pirilampo",
    "quati",
    "kiwi",
    "rouxinol",
    "sanguessuga",
    "surucucu",
    "tapir",
    "texugo",
    "zebu",
    "apicultor",
    "auditor",
    "bartender",
    "cerimonialista",
    "chef",
    "desembargador",
    "despachante",
    "endocrinologista",
    "embaixador",
    "gerente",
    "hepatologista",
    "interprete",
    "juiz",
    "nanotecnologo",
    "nutrologo",
    "pizzaiolo",
    "perito",
    "quiromante",
    "quiroprata",
    "roteirizador",
    "silvicultor",
    "trader",
    "taquigrafo",
    "turismologo",
    "UVA",
    "FIGO",
    "MAMAO",
    "AMORA",
    "CAJU",
    "LARANJA",
    "CUPUACU",
    "MORANGO",
    "CEREJA",
    "ABACAXI",
    "MARMELO",
    "JACA",
    "BANANA",
    "FRAMBOESA",
    "ACAI",
    "PERA",
    "PITANGA",
    "COCO",
    "ACEROLA",
    "MANGA",
    "Afrodite",
    "Apolo",
    "Ares",
    "Artemis",
    "Atena",
    "Demeter",
    "Dionisio",
    "Eos",
    "Eros",
    "Hades",
    "Helios",
    "Hermes",
    "Hera",
    "Hestia",
    "Horas",
    "Mnemosine",
    "Persefone",
    "Poseidon",
    "Selene",
    "Temis",
    "Zeus",
    "Belerofonte",
    "Perseu",
    "Teseu",
    "Heracles",
    "Prometeu",
    "Orfeu",
    "Ulisses",
    "Aquiles",
    "Hercules",
    "Eolo",
    "Cronos",
    "Atlas",
    "Pan",
    "Narciso",
    "Tantalo",
    "Euridice",
    "Icaro",
    "Medeia",
    "Pandora",
    "Tritao",
    "Cerbero",
    "Minos",
    "Nemesis",
    "Nix",
    "Tique",
    "Quiron",
    "Clio",
    "Euterpe",
    "Talia",
    "Melpomene",
    "Terpsicore",
    "Erato",
    "Polimnia",
    "Urania",
    "Caliope",
    "Mickey Mouse",
    "Pato Donald",
    "Pateta",
    "Pluto",
    "Minnie Mouse",
    "Margarida",
    "Tom",
    "Jerry",
    "Scooby Doo",
    "Fred Flintstone",
    "Barney Rubble",
    "George Jetson",
    "Elroy Jetson",
    "Pernalonga",
    "Patolino",
    "Popeye",
    "Olivia Palito",
    "Brutus",
    "Papa-Leguas",
    "Coelho Ricochete",
    "Frajola",
    "Piu-Piu",
    "Ze Colmeia",
    "Catatau",
    "Guarda Smith",
    "Bart Simpson",
    "Homer Simpson",
    "Marge Simpson",
    "Lisa Simpson",
    "Maggie Simpson",
    "Abecasia",
    "Afeganistao",
    "Africa do Sul",
    "Albania",
    "Alemanha",
    "Andorra",
    "Angola",
    "Antigua",
    "Arabia Saudita",
    "Argelia",
    "Argentina",
    "Armenia",
    "Australia",
    "Austria",
    "Azerbaijao",
    "Bahamas",
    "Bahrein",
    "Bangladesh",
    "Barbados",
    "Belgica",
    "Belize",
    "Benim",
    "Bielorrussia",
    "Bolivia",
    "Bosnia",
    "Botswana",
    "Brasil",
    "Brunei",
    "Bulgaria",
    "Burkina",
    "Feijoada",
    "Pao de Queijo",
    "Coxinha",
    "Pastel",
    "Moqueca",
    "Bobo de Camarão",
    "Tapioca",
    "Baiao de Dois",
    "Vatapa",
    "Carne de Sol",
    "Acai",
    "Tutu de Feijao",
    "Canjica",
    "Cuscuz Paulista",
    "Pamonha",
    "Quindim",
    "Pacoca",
    "Escondidinho",
    "Torta de Frango",
    "Caldinho de Feijao",
    "Bolo de Fuba",
    "Cocada",
    "Rabada",
    "Bolo de Rolo",
    "Casquinha de Siri",
    "Empadao",
    "Buchada de Bode",
    "Camarao na Moranga",
    "Bolo de Milho Verde",
    "Canjiquinha"
  };
  /*ESTA STRING DETERMINA O BANCO DE DADO DE PALAVRAS*/

  char tipWordSystem[MAX_NUMBER_OF_CATEGORY][25] = {
    "Animal",
    "Profissão",
    "Fruta",
    "Seres mitólogicos",
    "Personagens de Cartoon",
    "Países",
    "Comidas"
  };
  /*ESTA STRING DETERMINA A CATEGORIA OU DICA QUE VAI CONFORME O BANCO DE PALAVRAS*/

  char secretWordAux;
  int sortNumberWord, sortNumberCategory, i, option = 0;
  /*
  NUMERO SORTEADO PARA SORTEAR A PALAVRA
  NUMERO BASEADO NA PALAVRA PARA DETERMINAR A CATEGORIA EX: CATEGORIA ANIMAIS VAI ATE 26 ENTAO DO NUMERO 1 AO 26 É DICA NUMERO 1 ANIMAIS
  INTEIRO QUALQUER PARA CONTADOR
  OPCAO*/

  printf("\n   ##################\n   # JOGO DA FORCA  #\n   ##################\n\nPara começar digite o numero para a opção que voce quer: \n1- Digitar a palavra secreta.\n2- Sortear uma das palavras do banco de dados.\n");
  /*PRINTANDO AS OPCOES DO JOGADOR*/

  option = hangManOption(); /*AO MESMO TEMPO QUE ATRIBUO A VARIAVEL "OPCAO" COM A FUNCAO "OPCAO" EU CHAMO A FUNCAO DENTRO DA VARIAVEL*/
  while (1) {
    /*INICIO PRIMEIRO LOOP*/
    while (2) {
      /*INICIO SEGUNDO LOOP*/
      system("cls");

      if (option == 1) {
        /*CASO O JOGADOR ESCOLHA DIGITAR A PALAVRA ELE ESTÁ QUERENDO DESAFIAR OUTRA PESSOA*/
        fflush(stdin);
        printf("\n\nBoa escolha!\nDigite qual vai ser a palavra secreta:");

        for (i = 0; i < MAX_NUMBER_OF_CHAR; i++) {

          scanf("%c", & secretWordAux); /*RECOLHO A PALAVRA*/
          secretWord[i] = secretWordAux; /*PALAVRA SECRETA RECEBE A AUXILIAR*/

          if (secretWordAux == '\n') {
            /*CASO HAJA QUEBRA LINHA OU SEJA, ENTER, O FOR ACABA*/
            break;
          }
        }

        secretWord[i - 0] = '\0'; /*IGUALO A PALAVRA EM NULO PARA QUE NAO HAJA ESPAÇOS SOBRESSALENTES*/
        fflush(stdin);
        printf("\n\nAgora digite a dica para esta palavra: "); /*RECOLHO A DICA*/
        gets(tipWord);
        break; /*FIM LOOP 2*/
      }
      if (option == 2) {
        /*CASO O JOGADOR QUEIRA O BANCO DE DADOS*/
        fflush(stdin);
        srand(time(NULL));
        /*BASEIO A SEED DO NUMERO SORTEADO NO HORARIO. 
        					OQ É SEED? É O ENDEREÇO QUE TODO PROGRAMA POSSUI, QUANDO EU NAO BASEIO NO HORARIO A SEED NAO É ALEATORIA*/
        sortNumberWord = rand() % 186; /*SORTEIO UM NUMERO ALEATORIO DE 0 A 186 E ATRIBUO NO NUMERO SORTEADO PARA PALAVRAS*/

        /*ESTES IF SERVEM PARA DEFINIR A CATEGORIA DA PALAVRA*/
        if (sortNumberWord >= 0 && sortNumberWord < 26) sortNumberCategory = 0;
        else if (sortNumberWord >= 26 && sortNumberWord < 50) sortNumberCategory = 1;
        else if (sortNumberWord >= 50 && sortNumberWord < 70) sortNumberCategory = 2;
        else if (sortNumberWord >= 70 && sortNumberWord < 120) sortNumberCategory = 3;
        else if (sortNumberWord >= 120 && sortNumberWord < 156) sortNumberCategory = 4;
        else if (sortNumberWord >= 120 && sortNumberWord < 156) sortNumberCategory = 4;
        else if (sortNumberWord >= 156 && sortNumberWord < 186) sortNumberCategory = 5;
        else if (sortNumberWord >= 186 && sortNumberWord < 216) sortNumberCategory = 6;
        /*FIM DEFINICAO*/

        strlwr(secretWordSystem[sortNumberWord]); /*DEIXO TUDO EM MINUSCULO MENOS A DICA*/
        strcpy(secretWord, secretWordSystem[sortNumberWord]); /*COPIANDO A PALAVRA SORTEADA PARA A PALAVRA SECRETA NORMAL*/
        strcpy(tipWord, tipWordSystem[sortNumberCategory]); /*COPIANDO A DICA SORTEADA PARA A DICA NORMAL*/
        break; /*FIM DO SEGUNDO LOOP DETERMINADO PELO BREAK*/
      } else if (option > 2) {
        /*ESTE ELSE IF SERVE PARA DETERMINAR QUE O USUARIO NAO VAI DIGITAR 3.
        				LEMBRA QUE EU DISSE QUE OPTION ACEITA ATE 3?*/
        system("cls");
        printf("\n   ##################\n   # JOGO DA FORCA  #\n   ##################\n\nPara começar digite o numero para a opção que voce quer: \n1- Digitar a palavra secreta.\n2- Sortear uma das palavras do banco de dados.\n");
        printf("\nOpção inválida. Digite novamente.\n ");
        option = hangManOption(); /*REINICIO O LOOP NAO DANDO FIM AO PRIMEIRO WHILE ENTAO CONTABILIZO A OPCAO DENOVO*/
      }
    } /*FIM DO SEGUNDO LOOP*/
    break;
  } /*FIM DO PRIMEIRO LOOP*/
  strlwr(secretWord); /*ESTOU DEIXANDO A PALAVRA SECRETA EM MINUSCULO*/
  strcpy(screenWord, secretWord); /*ESTOU COPIANDO A PALAVRA SECRETA PARA A PALAVRA QUE VAI PRO USUARIO*/

  for (i = 0; i < strlen(screenWord); i++) screenWord[i] = '_'; /*ESTE FOR SERVE PARA CODIFICAR A PALAVRA EM "----"*/

  printf("\n #########################################\n  Tudo pronto pro jogador começar a jogar \n #########################################\n\n");
  system("pause");
  system("cls");
} /*FIM FUNCAO*/

int main() {
  setlocale(LC_ALL, "portuguese");
  char secretWord[MAX_NUMBER_OF_CHAR], tipWord[MAX_NUMBER_OF_CHAR], screenWord[MAX_NUMBER_OF_CHAR], guessWord;
  /*//PALAVRA SECRETA//
  //DICA//
  //PALAVRA QUE USUARIO TEM ACESSO (CODIFICADA)//
  //CHUTE DO USUARIO*/
  int player = 1, playerAux = 1, madeMistake, errors = 0, i, continue_ = 1, loops = 0, streak = 0;
  /*JOGADOR ATUAL
  AUXILIAR PARA O PLAYER
  VERIFICADOR DE ERROS
  ERROS
  INTEIRO QUALQUER
  CONTINUAR A JOGAR
  LOOPS DE GAMEPLAY
  MECANICA DE STREAK*/
  int playersScore[10][2] = {
    0,
    0
  }, scoreSum[10][1] = {
    0
  };
  /*QUANTIDADE DE PONTOS QUE CADA JOGADOR TEM EM ERROS E ACERTOS
  SOMA OU SUBTRACAO DESSES PONTOS*/
  FILE * highScore;
  while (continue_ == 1 || continue_ == 2) {
    /*PRIMEIRO LOOP ENQUANTO O JOGADOR CONTINUE QUERENDO JOGAR*/
    /*ESTA PRIMEIRA PARTE SERVE APENAS PRA ZERAR TODOS OS PARAMETROS*/
    if (player < 10) {
      /*DETERMINA APENAS 9 players no total*/
      loops += 1; /*ADICIONA UM AO LOOP DE GAMEPLAY*/
      system("cls");
      errors = 0; /*ZERA OS ERROS*/
      if (playerAux == player) {
        /*VEJO QUAL PLAYER ATUAL*/
        printf("\n   ##################\n   # JOGO DA FORCA  #\n   ##################\n\n Boas vindas! Digite o nome do jogador atual: ");
        gets(players[player].playerName);
      }
      system("cls");
      hangManWordUser(secretWord, tipWord, screenWord);
      /*CHAMANDO A FUNCAO PARA DIZER A PALAVRA SECRETA, DICA E AFINS ATRIBUINDO ÀS MINHAS
      			VARIAVEIS ATUAIS*/
      while (1) {
        /*SEGUNDO LOOP*/

        fflush(stdin);
        madeMistake = 1; /*IGUALO SEMPRE O MADEMISTAKE A 1, POIS SE EU NAO CONSIDERO O JOGADOR ERRAR SEMPRE FICA MAIS DIFICIL DIZER SE ELE VAI ACERTAR*/
        printf("\n   ##################\n   # JOGO DA FORCA  #\n   ##################\n\n Bem vindo Jogador %s\n\n Número de letras da palavra: %lu\n\n A dica para a palavra é: %s\n\n Pontos do Jogador %s: %d\n\n", players[player].playerName, strlen(secretWord), tipWord, players[player].playerName, players[player].scoreSum[player][1]);
        hangMan(errors); /*MOSTRO A FORCA BASEADA NOS ERROS*/
        printf("\nPalavra: %s\nDigite uma letra ou a palavra inteira: ", screenWord);
        guessWord = getch(); /*DOU UM GETCH PARA CAPTURAR TUDO OQ O USUARIO DIGITA E FICANDO MAIS DINAMICO*/
        for (i = 0; i < strlen(screenWord); i++) {
          /*ESTE FOR DETERMINA SE O JOGADOR ACERTOU A LETRA.
          																    CASO SIM O JOGADOR NAO COMETEU ERRO
          																    CASO NAO O JOGADO COMETEU ERRO*/

          if (guessWord == secretWord[i]) {
            /*SE MEU CHUTE ATUAL FOR IGUAL A MINHA PALAVRA SECRETA NO CONTADOR I*/
            screenWord[i] = guessWord; /*MINHA PALAVRA CODIFICADA RECEBE O CONTADOR I*/
            madeMistake = 0; /*ERRO NAO CONTABILIZADO*/
          }
        }
        if (madeMistake == 1) errors++; /*SE O MADEMISTAKE NAO FOR ZERADO OS ERROS SAO ADMITIDOS*/

        if (strcmp(secretWord, screenWord) == 0) {
          /*VERIFICANDO QUE O GANHADOR GANHOU*/

          streak++; /*GANHA UMA STREAK DE VITORIA CONSECUTIVA*/
          system("cls");

          if (streak > 4) {
            /*SE O JOGADOR GANHOU 5 PARTIDAS SEGUIDAS ELE RECEBE +2 PONTOS A CADA ACERTO SUBSEQUENTE*/
            printf("\n\nO Jogador %d está numa streak de %d acertos!! +2 pontos pra você\n\n", player, streak);
            playersScore[player][1] += 2; /*ADICIONANDO 2 PONTOS PRA CONTA DO PAI :)*/
          }

          hangMan(errors); /*MOSTRA A FORCA FINAL E FINALIZA O JOGO*/
          printf("\nVoce acertou a palavra: %s\n\nVOCE VENCEU PARABENS!!!!\n\nDeseja continuar a jogar no mesmo jogador, deseja trocar de jogador ou deseja sair?\n1-Jogar no mesmo\n2-Trocar de jogador\n3-Sair\n", secretWord);
          fflush(stdin);
          playersScore[player][1]++; /*ADICIONANDO UM ACERTO PARA O SCORE DO JOGADOR*/
          scoreSum[player][1] = playersScore[player][1] - playersScore[player][2]; /*SUBTRAINDO OS ACERTOS PELOS ERROS PARA O PLACAR FINAL*/
          players[player].scoreSum[player][1] = scoreSum[player][1]; /*ATRIBUINDO O SCORE DO PLAYER ATUAL AO MEUS STRUCT*/
          playerAux = player; /*VARIAVEL PARA TORNAR POSSIVEL PERCEBER SE O USUARIO TROCOU OU NAO*/
          playerAux += 1; /*DIFERE O PLAYERAUX DO PLAYER E SENDO ASSIM NAO FOI CONTABILIZADO A TROCA DE USUARIO*/
          continue_ = hangManOption(); /*CHAMO A FUNCAO DE OPCOES*/

          if (continue_ == 2) {
            /*SE O JOGADOR QUER TROCAR*/
            player++; /*ADICIONO UM PLAYER*/
            playerAux = player; /*O PLAYERAUX É A MESMA COISA DO PLAYER*/
            streak = 0; /*ZERO AS STREAKS DE VITORIAS */
            break;
          }
          break;
          /*CASO NAO QUEIRA MUDAR DE PLAYER SO REINICIA O LOOP
          						 	LEMBRANDO QUE O LOOP SO CONTINUA SE CONTINUE FOR IGUAL A SIM*/
        } else if (strcmp(secretWord, screenWord) != 0 && errors == 6) {
          /*CASO O JOGADOR PERCA*/

          streak = 0; /*AS STREAKS DE VITORIA SAO ZERADAS*/
          system("cls");
          hangMan(errors); /*MOSTRANDO FORCA FINAL*/
          printf("\nVoce errou a palavra: %s\n\nDeseja continuar a jogar no mesmo jogador, deseja trocar de jogador ou deseja sair?\n1-Jogar no mesmo\n2-Trocar de jogador\n3-Sair\n", secretWord);
          fflush(stdin);
          playersScore[player][2]++; /*ADICIONANDO ERROS*/
          scoreSum[player][1] = playersScore[player][1] - playersScore[player][2]; /*SUBTRAINDO ERROS POR ACERTOS PARA O PLACAR FINAL*/
          players[player].scoreSum[player][1] = scoreSum[player][1]; /*ATRIBUINDO O SCORE AO STRUCT*/
          if (players[player].scoreSum[player][1] < 0) {
            /*CASO O SALDO DO SCORE ESTEJA NEGATIVO O SCORE É AUTOMATICAMENTE 0*/
            players[player].scoreSum[player][1] = 0;
            playersScore[player][2] = 0;
          }
          playerAux = player; /*VARIAVEL PARA TORNAR POSSIVEL PERCEBER SE O USUARIO TROCOU OU NAO*/
          playerAux += 1; /*DIFERE O PLAYERAUX DO PLAYER E SENDO ASSIM NAO FOI CONTABILIZADO A TROCA DE USUARIO*/

          continue_ = hangManOption(); /*NOVAMENTE CHAMO A FUNCAO DE OPCOES*/
          if (continue_ == 2) {
            /*SE O JOGADOR QUER TROCAR*/
            player++; /*ADICIONO UM PLAYER*/
            playerAux = player; /*O PLAYERAUX É A MESMA COISA DO PLAYER*/
            streak = 0; /*ZERO AS STREAKS DE VITORIAS */
            break;
          }
          break;
          /*CASO NAO QUEIRA MUDAR DE PLAYER SO REINICIA O LOOP
          						 	LEMBRANDO QUE O LOOP SO CONTINUA SE CONTINUE FOR IGUAL A SIM*/
        }
        system("cls");
      }
    } else {
      printf("\nNúmero maximo de players, encerrando o jogo da forca.");
      system("pause");
      continue_ = 3;
    }
  }
  system("cls");
  printf("\n\n\nOBRIGADO POR JOGAR %d VEZES O JOGO DA FORCA!\n\n ##########\n # Placar #\n ##########\n\n", loops);
  playerAux = player; /*IGUALO O CONTADOR AUXILIAR AO NUMERO DE PLAYERS*/
  player = 1; /*IGUALO OS PLAYERS EM 1*/
  int auxScore; /*AUXILIAR PRA TOPSCORE*/
  highScore = fopen("HighScore.txt", "r"); /*CHAMO O TEXTO DE HIGHSCORE E DOU READ*/
  fscanf(highScore, "%d", & topScore.topTier); /*ATRIBUO O HIGHSCORE CONTIDO NA VARIAVEL TOP TIER*/
  while (fgets(topScore.playerName, 50, highScore) != NULL); /*ATRIBUO O NOME DE HIGHSCORE CONTIDO NA VARIAVEL PLAYER NAME*/
  for (i = 0; i < playerAux; i++) {
    /*ESTE FOR VAI COMPARAR OS DADOS*/
    auxScore = players[player].scoreSum[player][1]; /*ATRIBUO AUXILIAR NO SCORE TOTAL*/
    if (auxScore >= topScore.topTier) {
      /*VEJO SE O SCORE TOTAL ATUAL É MAIOR QUE O HIGHSCORE
      												CASO SIM ESTE IF EXECUTA*/
      fclose(highScore); /*FECHO O HIGHSCORE.TXT READ*/
      topScore.topTier = auxScore; /*TOPSCORE É IGUALADO AO SCORE ATUAL*/
      strcpy(topScore.playerName, players[player].playerName); /*COPIANDO O NOME DO SCORE ATUAL PRO TOPSCORE*/
      highScore = fopen("HighScore.txt", "w"); /*COMEÇO A SOBRESCREVER O CODIGO*/
      fprintf(highScore, "%d", auxScore); /*ATRIBUO AUXSCORE IGUALADO*/
      fprintf(highScore, "\n%s", topScore.playerName); /*ATRIBUO O NOME SOBRESCRITO*/
      fclose(highScore); /*FECHO O WRITE*/
    }
    printf("\n XXXXXXXXXXXXXXXXX\n X %s \n X Pontos: %d \n XXXXXXXXXXXXXXXXX\n\n", players[player].playerName, players[player].scoreSum[player][1]);
    /*MOSTRO OS PONTOS DE CADA UM*/
    player++;
  }
  printf("\n *****************\n * O HIGHSCORE É DE %s \n * Pontos: %d \n *****************\n\n", topScore.playerName, topScore.topTier);
  /*NO FIM O HIGHSCORE É MOSTRADO*/
  system("pause");
}