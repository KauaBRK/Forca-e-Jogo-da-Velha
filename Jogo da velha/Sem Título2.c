#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
void forca(){
    /*int linha, col, x;
    int jogo[3][3]={0,1,2,3,4,5,6,7,8,9};
    char escolha;
    	for(linha = 0; linha <3; linha++){
    		for(col = 0; col <3; col++){
    			jogo[linha][col]++;
			}
		}
		printf("\n\n\n\n   ###JOGO DA VELHA###\n\n");
		for(linha = 0; linha <3; linha++){
			for(col = 0; col <3; col++){
				printf("    %d  ", jogo[linha][col]);
			             
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
    	*/
}
int main(){
	int linha, col, x;
    /*int jogo[3][3]={0,1,2,3,4,5,6,7,8,9};*/
    char jogo[3][3]={'1','2','3','4','5','6','7','8','9'};
    char escolha;
    	for(linha = 0; linha <3; linha++){
    		for(col = 0; col <3; col++){
  
			}
		}
    	while(1){
    		
    		printf("\n\n\n\n   ###JOGO DA VELHA###\n\n");
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
			
    		scanf("%c", &escolha);
    		fflush(stdin);
    		
    		switch(escolha){
    			case '1':
    				jogo[0][0]='x';
    					
    					break;
    			case '2':
    				jogo[0][1]='x';
    					
    					break;
    			case '3':
    				jogo[0][2]='x';
    					
    					break;
    			case '4':
    				jogo[1][0]='x';
    					
    					break;
				case '5':
    				jogo[1][1]='x';
    					
    					break;
				case '6':
    				jogo[1][2]='x';
    					
    					break;
				case '7':
    				jogo[2][0]='x';
    					
    					break;
				case '8':
    				jogo[2][1]='x';
    					
    					break;
				case '9':
    				jogo[2][2]=escolha;
    					
    					break;										    					
		}
		if(	jogo[2][0]=='x' && jogo[2][1]=='x' && jogo[2][2]=='x'){
			printf("O vencedor foi o X");
		}
		
}
return 0;
}