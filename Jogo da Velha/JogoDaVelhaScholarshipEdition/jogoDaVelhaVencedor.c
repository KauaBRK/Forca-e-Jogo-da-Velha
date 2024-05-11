int  jogoDaVelhaVencedor(char vencedor, int continue_, int * par){
  	if (vencedor != 'n') {
    	printf("O Ganhador foi o jogador: ' %c '\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n", vencedor);
    	fflush(stdin);
    	scanf("%d", & continue_);
    	if (continue_ == 2) *par += 1;
    	system("cls");
  	} 
	else {
    	printf("Nao houve vencedor.\n\nSelecione uma opção:\n1- Desafiar mesmo adversario\n2- Desafiar outro adversario\n3- Sair\n");
    	fflush(stdin);
    	scanf(" %d", & continue_);
    	if (continue_ == 2) *par += 1;
    	system("cls");
	}
	return continue_;
}