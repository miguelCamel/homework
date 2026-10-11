#include<stdio.h>
#include<windows.h>


void contador(int limite){
    for(int i = 1; i <= limite; i++){
         printf("%d\n", i);
    }
    
}

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n;

printf("Digite um número para o contador: ");
scanf("%d", &n);

contador(n);

    return 0;
}