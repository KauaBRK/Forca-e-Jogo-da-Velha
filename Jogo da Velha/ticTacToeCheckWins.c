int ticTacToeCheckWins(char ticTacToe[3][3], char winner) {

if (ticTacToe[0][0] == ticTacToe[0][1] && ticTacToe[0][1] == ticTacToe[0][2]) winner = ticTacToe[0][0];
if (ticTacToe[1][0] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[1][2]) winner = ticTacToe[1][0];
if (ticTacToe[2][0] == ticTacToe[2][1] && ticTacToe[2][1] == ticTacToe[2][2]) winner = ticTacToe[2][0];

if (ticTacToe[0][0] == ticTacToe[1][0] && ticTacToe[1][0] == ticTacToe[2][0]) winner = ticTacToe[0][0];
if (ticTacToe[0][1] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[2][1]) winner = ticTacToe[0][1];
if (ticTacToe[0][2] == ticTacToe[1][2] && ticTacToe[1][2] == ticTacToe[2][2]) winner = ticTacToe[0][2];

if (ticTacToe[0][0] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[2][2]) winner = ticTacToe[0][0];
if (ticTacToe[0][2] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[2][0]) winner = ticTacToe[0][2];

return winner;
}
