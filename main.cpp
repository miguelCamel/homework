#include<iostream>
#include<windows.h>
#include<string>


int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

std::string nome;
int idade;

std::cout<< "Digite seu nome: "<<std::endl;
std::cin >> nome;

std::cout<< "Digite sua idade: "<<std::endl;
std::cin >> idade;

std::cout<< "Olá" <<" " << nome << " " << "você tem" << " " << idade << " " << "anos!"<<std::endl; 




    return 0;
}