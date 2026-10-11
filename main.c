#include<stdio.h>
#include<windows.h>

int num;

void par(){
    if(num % 2 == 0){
        printf("Seu número é par");
    }else{
        printf("Seu número é impar");
    }
}


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

printf("---PAR OU IMPAR?---\n");
printf("Digite um número: ");
scanf("%d", &num);

par();

    return 0;
}