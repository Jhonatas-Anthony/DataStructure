/*
Title: main.cpp
Author: Jhonatas Anthony Dantas Araújo
Date: 2/06/2023
Last Update: 2/06/2023
*/

#include <iostream>
#include "fila.hpp"

int main()
{
    Fila fila = Fila();

    fila.enfileirar('x');
    fila.enfileirar('c');
    fila.enfileirar('k');
    fila.enfileirar('l');
    fila.enfileirar('p');
    fila.enfileirar('a');
    fila.enfileirar('d');
    fila.enfileirar('h');
    fila.enfileirar('j');
    fila.enfileirar('z');

    fila.cheio();
    fila.vazio();

    int proximo = fila.proximo();
    std::cout << "O proximo elemento da fila é: " << (char)proximo << std::endl;

    fila.desenfileirar();
    proximo = fila.proximo();
    std::cout << "O proximo elemento da fila é: " << (char)proximo << std::endl;

    return 0;
}