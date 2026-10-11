#include<stdio.h>
#include<windows.h>



float media(float primeiro, float segundo, float terceiro){
    return (primeiro + segundo + terceiro) / 3;
}

void aprovado(float nota){
    if(nota >= 6){
        printf("Parabéns você foi aprovado!!!");
    }else if(nota >= 4){
        printf("Você está de recuperação!!");
    }else{
        printf("Poxa, você foi reprovado :(");
    }
}


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
float a, b, c;
float n;

printf("---ESCOLA RS---\nCALCULADORA DE MÉDIA\n");
printf("Digite a primeira nota: ");
scanf("%f",&a);
printf("Digite a segunda nota: ");
scanf("%f", &b);
printf("Digite a terceira nota: ");
scanf("%f", &c);

printf("Sua média é: %.2f\n", media(a, b, c));
n = media(a, b, c);
aprovado(n);

    return 0;
}