/*
Title: maior.hpp
Author: Jhonatas Anthony Dantas Araújo
Date: 25/05/2023
Last Update: 26/05/2023
*/

#ifndef MAIOR_HPP
#define MAIOR_HPP

const int CAPACITY = 100000;
class Maior{
	public:
		Maior();
		~Maior();
		void insert(int valor);
		int searchGreater();
		void print();
		int size();
		void sort();

	private:
		int listInteger[CAPACITY];
		int length;
		int greaterValue;
};


#endif