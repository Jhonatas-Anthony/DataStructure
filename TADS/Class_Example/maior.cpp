#include <iostream>
#include "maior.hpp"

/*
Title: maior.cpp
Author: Jhonatas Anthony Dantas Araújo
Date: 25/05/2023
Last Update: 26/05/2023
*/

Maior::Maior()
{
    std::cout << "Construindo objeto Padrão \n";
    listInteger[CAPACITY] = {};
}

Maior::~Maior()
{
    std::cout << "Destruindo objeto \n";
}

void Maior::insert(int valor){
	if (length < CAPACITY){
		listInteger[length] = valor;
		length++;
	} 

    if (length == 1){
        greaterValue = valor;
    }
    else if(valor > greaterValue){
        greaterValue = valor;
    }
}

int Maior::searchGreater(){
	if (length == 0){
		throw std::logic_error("A lista está vazia enquanto buscava pelo maior número");
	}

	return greaterValue;
}

void Maior::print(){
	for(int i=0;i<length;i++){
		std::cout<<listInteger[i]<<" ";
	}
	std::cout << std::endl;
}

int Maior::size(){
    return length;
}

void Maior::sort(){
    for ( int i = 1 ; i < length ; i ++){
        int temp = listInteger[i];
        int j = i - 1;
        while(j >= 0 && temp <= listInteger[j])  
        {  
            std::swap(listInteger[j+1], listInteger[j]);
            j = j - 1;  
        }  
        listInteger[j+1] = temp;
    }
    for ( int k = 0 ; k < length ; k++){
        std::cout << listInteger[k] << " ";
    }
    std::cout << std::endl;
}