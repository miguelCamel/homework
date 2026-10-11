#include<stdio.h>
#include<windows.h>

char nome[20];

void saudacao(){
    printf("Olá %s, seja bem vindo!", nome);
}



int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

printf("---DIGITE SEU NOME---\n");
printf("Username: ");
scanf("%s", nome);

saudacao();






    return 0;
}