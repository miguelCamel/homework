#include<stdio.h>
#include<windows.h>

int a, b;

void print(){
    printf("%d + %d = %d", a, b, a + b);
}

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

printf("---SOMA---\n");

printf("Digite o primeiro número da soma: ");
scanf("%d", &a);

printf("Digite o segundo número da soma: ");
scanf("%d", &b);

print();








    return 0;
}