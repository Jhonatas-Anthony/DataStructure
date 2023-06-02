/*
Title: stack.hpp
Author: Jhonatas Anthony Dantas Araújo
Date: 30/05/2023
Last Update: 1/06/2023
*/

#ifndef PILHA_HPP
#define PILHA_HPP

const int CAPACIDADE = 10;
class Pilha
{
public:
    Pilha();
    ~Pilha();
    void empilhar(char valor);
    void desempilhar();
    int topo();
    /* mudar para bool */
    void vazio();
    void cheio();

private:
    int list[CAPACIDADE];
    int length;
    int last;
};

#endif