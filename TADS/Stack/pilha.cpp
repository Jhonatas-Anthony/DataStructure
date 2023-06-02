/*
Title: stack.cpp
Author: Jhonatas Anthony Dantas Araújo
Date: 31/05/2023
Last Update: 1/06/2023
*/

#include <iostream>
#include "pilha.hpp"

Pilha::Pilha()
{
    std::cout << "Construindo pilha padrão \n";
    length = 0;
    list[CAPACIDADE] = {};
}

Pilha::~Pilha()
{
    std::cout << "Destruindo objeto \n";
}

void Pilha::empilhar(char valor)
{
    if (length < CAPACIDADE)
    {
        list[length] = valor;
        length++;
        last = valor;
    }
}

void Pilha::desempilhar()
{
    length--;
    last = list[length - 1];
    std::cout << "Desempilhando..." << std::endl; 
}

int Pilha::topo()
{
    if (length == 0)
    {
        throw std::logic_error("A  está vazia \n");
        return 0;
    }
    else
        return last;
}

bool Pilha::vazio()
{
    if (length == 0)
    {
        std::cout << "A pilha está vazia";
        return 1;
    }
    else return 0;

}

bool Pilha::cheio()
{
    if (length == CAPACIDADE)
    {
        std::cout << "A pilha está cheia";
        return 1;
    }
    else return 0;
}