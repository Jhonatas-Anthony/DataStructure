/*
Title: stack.hpp
Author: Jhonatas Anthony Dantas Araújo
Date: 31/05/2023
Last Update: 1/06/2023
*/

#include <iostream>
#include "pilha.hpp"

Pilha::Pilha()
{
    std::cout << "Construindo pilha padrão \n";
    empty = 1;
    full = 0;
    list[CAPACIDADE] = {};
}

Pilha::~Pilha()
{
    std::cout << "Destruindo objeto \n";
}

void Pilha::empilhar(char valor)
{
    if (length > 0)
    {
        empty = 0;
    }
    if (length < CAPACIDADE)
    {
        list[length] = valor;
        length++;
        last = valor;
        full = 0;
    }
    if (length == CAPACIDADE)
    {
        full = 1;
    }
}

void Pilha::desempilhar()
{
    length--;
    last = list[length - 1];
    std::cout << "Desempilhando" << std::endl; 
}

int Pilha::topo()
{
    if (empty == 1)
    {
        std::cout << "Não existem valores \n";
        return 0;
    }
    else
        return last;
}

void Pilha::vazio()
{
    if (empty == 1)
    {
        std::cout << "A pilha está vazia \n";
    }
}

void Pilha::cheio()
{
    if (full == 1)
    {
        std::cout << "A pilha está cheia \n";
    }
}