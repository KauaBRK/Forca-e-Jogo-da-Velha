#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void linhaCol(int lin, int col){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD) (col-1, lin-1));

}
int main (){
    linhaCol(30,20);
        printf("Hello world");
    return 0;
}