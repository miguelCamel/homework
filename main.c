#include<stdio.h>
#include<windows.h>


void tabuada(int limite){
    for(int i = 1; i <= limite; i++){
         printf("%d x %d = %d\n", limite, i, limite * i);
    }
    
}

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n;

printf("Digite um número para ver sua tabuada: ");
scanf("%d", &n);

tabuada(n);

    return 0;
}