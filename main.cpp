#include<iostream>
#include<windows.h>
#include<string>


int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

int numero;

std::cout<< "Digite um número e descubro se ele é par ou impar:  "<<std::endl;
std::cin >> numero;

if(numero % 2 == 0){
    std::cout<< "Seu número é par!"<<std::endl;
}else{
    std::cout<< "Seu número é impar"<<std::endl;
}



    return 0;
}