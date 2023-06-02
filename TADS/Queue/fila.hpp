/*
Title: fila.hpp
Author: Jhonatas Anthony Dantas Araújo
Date: 1/06/2023
Last Update: 2/06/2023
*/

#ifndef FILA_HPP
#define FILA_HPP

const int CAPACIDADE = 10;
class Fila
{
public:
    Fila();
    ~Fila();
    void enfileirar(char valor);
    void desenfileirar();
    int proximo();
    bool vazio();
    bool cheio();

private:
    int list[CAPACIDADE];
    int length;
    int first;
};

#endif