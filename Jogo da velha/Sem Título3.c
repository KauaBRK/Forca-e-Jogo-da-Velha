#include <stdio.h>
#include <stdlib.h>
int main(){
	int line, column;
	int lineColumn[3][3]={0,0};
	
	for(line = 0; line < 3; line++){
		for(column = 0; column <3; column++){
			lineColumn[line][column]++;
			printf("%d", lineColumn[line][column]);
		}
		if(column==0){
			printf("\n");
				lineColumn[line][column]+=1;
		}
		if(column==1){
			printf("\n");
				lineColumn[line][column]+=4;
		}
		if(column==2){
			printf("\n");
				lineColumn[line][column]+=9;
		}
	}
}