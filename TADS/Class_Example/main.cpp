#include <iostream>
#include "maior.hpp"

int main(){
	
	Maior maior = Maior();
	
	maior.insert(5);
	maior.insert(3);
	maior.insert(4);
    maior.insert(11);
    maior.insert(1);
    maior.insert(2);
    maior.insert(9);
	maior.print();
    maior.sort();
    int length = maior.size();
	int bigger = maior.searchGreater();
	std::cout << "Maior: " << bigger << std::endl;
    std::cout << "Tamanho: " << length << std::endl;
	return 0;
}