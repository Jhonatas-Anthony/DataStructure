/*
Title: main.cpp
Author: Jhonatas Anthony Dantas Araújo
Date: 1/06/2023
Last Update: 1/06/2023
*/

#include <iostream>
#include "pilha.hpp"

int main(){
    Pilha pilha = Pilha();

    pilha.empilhar('c');
    pilha.empilhar('i');
    pilha.empilhar('f');
    pilha.empilhar('h');
    pilha.empilhar('z');
    pilha.empilhar('a');
    pilha.empilhar('p');
    pilha.empilhar('k');
    pilha.empilhar('j');
    pilha.empilhar('b');
    bool empty = pilha.vazio();
    bool full = pilha.cheio();

    if (empty == 1){
        std::cout << "A pilha está vazia \n";
    }

    if (full == 1){
        std::cout << "A pilha está cheia \n";
    }

    int topo = pilha.topo();
    std::cout << "Último valor da pilha: " << (char)topo << std::endl;

    pilha.desempilhar();
    topo = pilha.topo();
    std::cout << "Último valor da pilha: " << (char)topo << std::endl;

    return 0;
}