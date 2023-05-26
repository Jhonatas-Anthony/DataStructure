#include <iostream>
#include <./maior.h>

Maior::Maior()
{
    std::cout << "Construindo objeto padrão\n";
}

Maior::~Maior()
{
    std::cout << "Destruindo objeto \n";
}

void Maior::insert(int valor)
{
    if (size < CAPACITY)
    {
        listInteger[size] = valor;
        size++;
    }
}

int Maior::search()
{
    if (size == 0)
    {
        throw std::logic_error("A lista está vazia");
    }
    int maiorValor = listInteger[0];
    for (int i = 0; i < size; i++)
    {
        maiorValor = std::max(maiorValor, listInteger[i]);
    }
    return maiorValor;
}

int Maior::print()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << listInteger[i] << " ";
    }
    std::cout << std::endl;
}

int Maior::length()
{
    return size;
}