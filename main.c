#include<stdio.h>
#include<windows.h>


int soma(int limite){
    for(int i = 1; i <= limite; i++)
        return i + limite;
    
}
int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

char nome[50];
int idade;

printf("Digite seu nome: ");
scanf("%s", nome);

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Olá %s você tem %d anos", nome, idade);
    return 0;
}