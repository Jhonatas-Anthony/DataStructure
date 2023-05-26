#include <iostream>
#include <maior.h>

int main()
{
    Maior maior = Maior();
    maior.insert(2);
    maior.insert(3);
    maior.insert(4);
    maior.print();
    int m = maior.search();
    std::cout << m << std::endl;
    return 0;
}