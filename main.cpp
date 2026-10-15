#include<iostream>
#include<windows.h>


int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

float a, b, c, media;

std::cout<< "Digite a nota 1: "<<std::endl;
std::cin >> a;

std::cout<< "Digite a nota 2: "<<std::endl;
std::cin >> b;

std::cout<< "Digite a nota 3: "<<std::endl;
std::cin >> c;

media = (a + b + c) / 3;

if(media >= 6){
    std::cout<< "Parabéns, você foi aprovado!!"<<std::endl;
}else if(media >= 4){
    std::cout<< "Continue se esforçando, você está de recuperação!"<<std::endl;
}else{
    std::cout<< "Que pena, você foi reprovado."<<std::endl;
}







    return 0;
}