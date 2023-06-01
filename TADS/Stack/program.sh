#!/bin/bash

g++ -c pilha.cpp
g++ -c main.cpp

g++ pilha.o main.o -o queue.out

./queue.out