#!/bin/bash

g++ -c fila.cpp 
g++ -c main.cpp

g++ fila.o main.o -o queue.out

./queue.out