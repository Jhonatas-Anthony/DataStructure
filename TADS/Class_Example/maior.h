
#ifndef MAIOR_H
#define MAIOR_H

const int CAPACITY = 10000;
class Maior{
    public:
        Maior();
        ~Maior();
        void insert(int valor);
        int search();
        int print();
        int length();

    private:
        int listInteger[CAPACITY];
        int size;
};

#endif