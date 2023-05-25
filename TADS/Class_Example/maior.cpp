#include <iostream>
#include <./maior.h>

Maior::Maior()
{
    std::cout << "Construindo objeto padrão\n";
    listInteger[CAPACITY] = {};
}
Maior::~Maior()
{
    std::cout << "Destruindo objeto\n";
}

void Maior::insert(int valor)
{
    if (size > CAPACITY){
        listInteger[size] = valor;
        size++;
    }
}

/* int length(){
int n = sizeof(arr) / sizeof(arr[0]);


} */