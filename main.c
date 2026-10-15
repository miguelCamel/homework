#include<stdio.h>
#include<windows.h>


int soma(int limite){
    for(int i = 1; i <= limite; i++)
        return i + limite;
    
}
int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n;

printf("Digite o número da soma do limite: ");
scanf("%d", &n);

printf("%d", soma(n));
    return 0;
}