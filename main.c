#include<stdio.h>
#include<windows.h>



int dobro(int numero){
    
    return numero * 2;
}
    


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int num;
printf("Digite um número e saiba o seu dobro: ");
scanf("%d", &num);

printf("O dobro de %d é: %d", num, dobro(num));

    return 0;
}