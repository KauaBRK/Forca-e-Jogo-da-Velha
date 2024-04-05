#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<locale.h>

#include<time.h>

#include <ctype.h>

#include<conio.h>

#define MAX_NUMBER_OF_CHAR 70
#define MAX_NUMBER_OF_WORDS 216
#define MAX_NUMBER_OF_CATEGORY 10

typedef struct {
  int scoreSum[10][1];
  char playerName[50];
}
Player;
typedef struct {
  int topTier;
  char playerName[50];
}
HighScore;

Player players[10];
HighScore topScore;

void hangMan(int errors);
int hangManOption();
void hangManWordUser(char secretWord[MAX_NUMBER_OF_CHAR], char tipWord[20], char screenWord[MAX_NUMBER_OF_CHAR]);

int main() {
  setlocale(LC_ALL, "portuguese");
  int player = 1, playerAux = 1, madeMistake, option, errors = 0, i, continue_ = 1, loops = 0, streak = 0;
  int playersScore[10][2] = {
    0,
    0
  }, scoreSum[10][1] = {
    0
  };
  char secretWord[MAX_NUMBER_OF_CHAR], tipWord[MAX_NUMBER_OF_CHAR], screenWord[MAX_NUMBER_OF_CHAR], guessWord;
  FILE * highScore;
  while (continue_ == 1 || continue_ == 2) {
    if (player < 10) {
      loops += 1;
      system("cls");
      errors = 0;
      if (playerAux == player) {
        printf("\n   ##################\n   # JOGO DA FORCA  #\n   ##################\n\n Boas vindas!\n Digite o nome do jogador atual: ");
        gets(players[player].playerName);
      }
      system("cls");
      hangManWordUser(secretWord, tipWord, screenWord);
      while (1) {
        fflush(stdin);
        madeMistake = 1;
        printf("\n   ##################\n   # JOGO DA FORCA  #\n   ##################\n\n Bem vindo Jogador %s\n\n Número de letras da palavra: %lu\n\n A dica para a palavra é: %s\n\n Pontos do Jogador %s: %d\n\n", players[player].playerName, strlen(secretWord), tipWord, players[player].playerName, players[player].scoreSum[player][1]);
        hangMan(errors);
        printf("\nPalavra: %s\nDigite uma letra ou a palavra inteira: ", screenWord);
        guessWord = getch();
        for (i = 0; i < strlen(screenWord); i++) {
          if (guessWord == secretWord[i]) {
            screenWord[i] = guessWord;
            madeMistake = 0;
          }
        }
        if (madeMistake == 1) errors++;

        if (strcmp(secretWord, screenWord) == 0) {

          streak++;
          system("cls");

          if (streak > 4) {
            printf("\n\nO Jogador %d está numa streak de %d acertos!! +2 pontos pra você\n\n", player, streak);
            playersScore[player][1] += 2;
          }
          hangMan(errors);
          printf("\nVoce acertou a palavra: %s\n\nVOCE VENCEU PARABENS!!!!\n\nDeseja continuar a jogar no mesmo jogador, deseja trocar de jogador ou deseja sair?\n1-Jogar no mesmo\n2-Trocar de jogador\n3-Sair\n", secretWord);
          fflush(stdin);
          playersScore[player][1]++;
          scoreSum[player][1] = playersScore[player][1] - playersScore[player][2];
          players[player].scoreSum[player][1] = scoreSum[player][1];
          playerAux = player;
          playerAux += 1;
          continue_ = hangManOption();

          if (continue_ == 2) {
            player++;
            playerAux = player;
            streak = 0;
            break;
          }
          break;
        } else if (strcmp(secretWord, screenWord) != 0 && errors == 6) {

          streak = 0;
          system("cls");
          hangMan(errors);
          printf("\nVoce errou a palavra: %s\n\nDeseja continuar a jogar no mesmo jogador, deseja trocar de jogador ou deseja sair?\n1-Jogar no mesmo\n2-Trocar de jogador\n3-Sair\n", secretWord);
          fflush(stdin);
          playersScore[player][2]++;
          scoreSum[player][1] = playersScore[player][1] - playersScore[player][2];
          players[player].scoreSum[player][1] = scoreSum[player][1];
          if (players[player].scoreSum[player][1] < 0) {
            players[player].scoreSum[player][1] = 0;
            playersScore[player][2] = 0;
          }
          playerAux = player;
          playerAux += 1;
          continue_ = hangManOption();

          if (continue_ == 2) {
            player++;
            playerAux = player;
            streak = 0;
            break;
          }
          break;
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
  playerAux = player;
  player = 1;
  int auxScore;
  highScore = fopen("HighScore.txt", "r");
  fscanf(highScore, "%d", & topScore.topTier);
  while (fgets(topScore.playerName, 50, highScore) != NULL);
  for (i = 0; i < playerAux; i++) {

    auxScore = players[player].scoreSum[player][1];
    if (auxScore >= topScore.topTier) {
      fclose(highScore);
      topScore.topTier = auxScore;
      strcpy(topScore.playerName, players[player].playerName);
      highScore = fopen("HighScore.txt", "w");
      fprintf(highScore, "%d", auxScore);
      fprintf(highScore, "\n%s", topScore.playerName);
      fclose(highScore);
    }
    printf("\n XXXXXXXXXXXXXXXXX\n X %s \n X Pontos: %d \n XXXXXXXXXXXXXXXXX\n\n", players[player].playerName, players[player].scoreSum[player][1]);
    player++;
  }
  printf("\n *****************\n * O HIGHSCORE É DE %s \n * Pontos: %d \n *****************\n\n", topScore.playerName, topScore.topTier);
  system("pause");
}
void hangManWordUser(char secretWord[MAX_NUMBER_OF_CHAR], char tipWord[MAX_NUMBER_OF_CHAR], char screenWord[MAX_NUMBER_OF_CHAR]) {
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
  char tipWordSystem[MAX_NUMBER_OF_CATEGORY][25] = {
    "Animal",
    "Profissão",
    "Fruta",
    "Seres mitólogicos",
    "Personagens de Cartoon",
    "Países",
    "Comidas"
  };
  char secretWordAux;
  int sortNumberWord, sortNumberCategory, i, option = 0;

  printf("\n   ##################\n   # JOGO DA FORCA  #\n   ##################\n\nPara começar digite o numero para a opção que voce quer: \n1- Digitar a palavra secreta.\n2- Sortear uma das palavras do banco de dados.\n");
  option = hangManOption();
  while (1) {
    while (2) {
      system("cls");

      if (option == 1) {
        fflush(stdin);
        printf("\n\nBoa escolha!\nDigite qual vai ser a palavra secreta:");

        for (i = 0; i < 50; i++) {
          scanf("%c", & secretWordAux);
          secretWord[i] = secretWordAux;
          if (secretWordAux == '\n') {
            break;
          }
        }
        secretWord[i - 0] = '\0';
        fflush(stdin);
        printf("\n\nAgora digite a dica para esta palavra: ");
        gets(tipWord);
        break;
      }
      if (option == 2) {
        fflush(stdin);
        srand(time(NULL));
        sortNumberWord = rand() % 186;

        if (sortNumberWord >= 0 && sortNumberWord < 26) sortNumberCategory = 0;
        else if (sortNumberWord >= 26 && sortNumberWord < 50) sortNumberCategory = 1;
        else if (sortNumberWord >= 50 && sortNumberWord < 70) sortNumberCategory = 2;
        else if (sortNumberWord >= 70 && sortNumberWord < 120) sortNumberCategory = 3;
        else if (sortNumberWord >= 120 && sortNumberWord < 156) sortNumberCategory = 4;
        else if (sortNumberWord >= 120 && sortNumberWord < 156) sortNumberCategory = 4;
        else if (sortNumberWord >= 156 && sortNumberWord < 186) sortNumberCategory = 5;
        else if (sortNumberWord >= 186 && sortNumberWord < 216) sortNumberCategory = 6;

        strlwr(secretWordSystem[sortNumberWord]);
        strcpy(secretWord, secretWordSystem[sortNumberWord]);
        strcpy(tipWord, tipWordSystem[sortNumberCategory]);
        break;
      } else if (option > 2) {
        system("cls");
        printf("\n   ##################\n   # JOGO DA FORCA  #\n   ##################\n\nPara começar digite o numero para a opção que voce quer: \n1- Digitar a palavra secreta.\n2- Sortear uma das palavras do banco de dados.\n");
        printf("\nOpção inválida. Digite novamente.\n ");
        option = hangManOption();
      }
    }
    break;
  }
  strlwr(secretWord);
  strcpy(screenWord, secretWord);

  for (i = 0; i < strlen(screenWord); i++) screenWord[i] = '_';

  printf("\n #########################################\n  Tudo pronto pro jogador começar a jogar \n #########################################\n\n");
  system("pause");
  system("cls");
}
int hangManOption() {
  int i, correctOption = 0, tryNumber = 0;
  int option, aux;
  do {
    aux = scanf("%d", & option);
    fflush(stdin);
    while (correctOption != 1) {
      fflush(stdin);
      for (i = 0; i <= 51; i++) {

        if (option == 1 || option == 2 || option == 3) {
          fflush(stdin);
          correctOption = 1;
        } else {

          fflush(stdin);
          printf("\nOpção inválida. Digite novamente.\n ");
          correctOption = 0;
          aux = scanf("%d", & option);
          fflush(stdin);
          tryNumber++;
        }
        if (tryNumber == 51) {
          printf("\nNumero de tentativas excedidas. Encerrando programa");
          option = 2;
          break;
        }
      }
      system("cls");
    }
  } while (aux == 0 && option <= 3);
  return option;
}
void hangMan(int errors) {
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