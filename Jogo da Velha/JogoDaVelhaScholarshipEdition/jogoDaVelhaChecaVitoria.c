int jogoDaVelhaChecaVitoria(char jogoDaVelha[3][3], char vencedor) {

	if (jogoDaVelha[0][0] == jogoDaVelha[0][1] && jogoDaVelha[0][1] == jogoDaVelha[0][2]) vencedor = jogoDaVelha[0][0];
	if (jogoDaVelha[1][0] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[1][2]) vencedor = jogoDaVelha[1][0];
	if (jogoDaVelha[2][0] == jogoDaVelha[2][1] && jogoDaVelha[2][1] == jogoDaVelha[2][2]) vencedor = jogoDaVelha[2][0];
	
	if (jogoDaVelha[0][0] == jogoDaVelha[1][0] && jogoDaVelha[1][0] == jogoDaVelha[2][0]) vencedor = jogoDaVelha[0][0];
	if (jogoDaVelha[0][1] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[2][1]) vencedor = jogoDaVelha[0][1];
	if (jogoDaVelha[0][2] == jogoDaVelha[1][2] && jogoDaVelha[1][2] == jogoDaVelha[2][2]) vencedor = jogoDaVelha[0][2];
	
	if (jogoDaVelha[0][0] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[2][2]) vencedor = jogoDaVelha[0][0];
	if (jogoDaVelha[0][2] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[2][0]) vencedor = jogoDaVelha[0][2];
	
	return vencedor;
}