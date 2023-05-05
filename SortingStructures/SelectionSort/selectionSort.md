# Selection Sort
## Explicação em Português

O algoritmo Seletion Sort é um script com complexidade O(n²), visto que usa um loop dentro de outro para verificar qual é o menor valor dentro da lista e enviar esse valor para o começo da lista fazendo as ordenações necessárias. 

Imagine que temos uma lista com 10 posições - { 8, 10, 1, 4, 9, 7, 5, 2, 3, 6}, o algoritmo Selection Sort vai fazer o seguinte: 

1. O algoritmo vai percorrer toda a lista
2. O algoritmo vai guardar o valor de um indíce da lista
3. Ao passo que o algoritmo percorre os indíces, vai comparar se o valor que está sendo visto é menor que o valor que está guardado
4. Se esse valor for menor, o valor guardado vai receber esse valor até que essa variável guarde o menor valor da lista
5. No final, o algoritmo vai pegar esse valor e colocar no primeiro índice da lista
6. O algoritmo vai fazer isso até que todos os valores estejam ordenados

Esse algoritmo conta com dois laços de repetição, o primeiro laço vai percorrer o array, e o segundo vai ser responsável por verificar qual é o menor valor dentro do array. 
Cada vez que o loop acontece, o algoritmo vai trocar a posição do menor valor com o primeiro índice que está na posição 0. A partir da segunda vez a posição será 0 + 1 (pois o menor valor já estará no indice 0, a proxima mudança deve ser no índice 1 até terminar todas as posições), o algoritmo vai repetir isso até que a lista esteja toda ordenada. 

---
## Explanation in english 

The Seletion Sort algorithm is a script with O(n²) complexity, since it uses a loop inside another to check which is the smallest value in the list and send this value to the beginning of the list doing the necessary sorting.

Imagine we have a list with 10 positions - { 8, 10, 1, 4, 9, 7, 5, 2, 3, 6}, the Selection Sort algorithm will do the following:

1. The algorithm will go through the entire list
2. The algorithm will store the value of an index of the list
3. As the algorithm goes through the indexes, it will compare if the value being seen is less than the value that is stored
4. If this value is smaller, the stored value will receive this value until this variable stores the smallest value in the list
5. At the end, the algorithm will take this value and put it in the first index of the list
6. The algorithm will do this until all values are sorted

This algorithm has two repetition loops, the first loop will go through the array, and the second will be responsible for checking which is the smallest value within the array.
Each time the loop happens, the algorithm will change the position of the smallest value with the first index that is at position 0. From the second time onwards, the position will be 0 + 1 (since the smallest value will already be at index 0, the next change must be at index 1 until all positions are finished), the algorithm will repeat this until the list is all sorted.