/*
Title: fila.cpp
Author: Jhonatas Anthony Dantas Araújo
Date: 2/06/2023
Last Update: 2/06/2023
*/

#include <iostream>
#include "fila.hpp"

Fila::Fila()
{
    std::cout << "Construindo fila padrão \n";
    length = 0;
    list[CAPACIDADE] = {};
}

Fila::~Fila()
{
    std::cout << "Destruindo objeto \n";
}

void Fila::enfileirar(char valor)
{
    if (length == 0)
    {
        first = 0;
    }
    if (length < CAPACIDADE)
    {
        list[length] = valor;
        length++;
    }
}

void Fila::desenfileirar()
{
    std::cout << "Desenfileirando... ";
    first ++;
}

int Fila::proximo()
{
    return list[first];
}

bool Fila::vazio()
{
    if (length == 0)
    {
        std::cout << "A Fila está vazia \n";
        return 1;
    }
    else return 0;
}

bool Fila::cheio()
{
    if (length == CAPACIDADE)
    {
        std::cout << "A Fila está cheia \n";
        return 1;
    }
    else return 0;
}