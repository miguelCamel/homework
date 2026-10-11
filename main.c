#include<stdio.h>
#include<windows.h>

float a, b;

void print(){
    printf("SOMA: %.2f + %.2f = %.2f\n", a, b, a + b);
    printf("SUBTRAÇÃO: %.2f - %.2f = %.2f\n", a, b, a - b);
    printf("MULTIPLICAÇÃO: %.2f x %.2f = %.2f\n", a, b, a * b);
    printf("DIVISÃO: %.2f / %.2f = %.2f\n", a, b, a / b);
}

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

printf("---CALCULADORA MULTIUSO---\n");

printf("Digite o primeiro número da soma: ");
scanf("%f", &a);

printf("Digite o segundo número da soma: ");
scanf("%f", &b);

print();








    return 0;
}