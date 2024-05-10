int  ticTacToeWinner(char winner, int continue_, int * pair){
  	if (winner != 'n') {
    	printf("O Ganhador foi o jogador: ' %c '\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n", winner);
    	fflush(stdin);
    	scanf("%d", & continue_);
    	if (continue_ == 2) *pair += 1;
    	system("cls");
  	} 
	else {
    	printf("Nao houve vencedor.\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n");
    	fflush(stdin);
    	scanf(" %d", & continue_);
    	if (continue_ == 2) *pair += 1;
    	system("cls");
	}
	return continue_;
}