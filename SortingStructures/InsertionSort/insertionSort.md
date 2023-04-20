# Bubble Sort 
## Explicação em português
O algoritmo Insertion Sort é um script com complexidade O(n²), visto que usa um loop dentro de outro para verificar se um valor é menor ou maior e fazer as devidas ordenações. 

Imagine que temos uma lista desordenada com 6 posições - {5, 4, 1, 3, 2, 0} - o Insertion Sort vai fazer o seguinte: 

1. O algoritmo vai percorrer a lista do inicio ao fim a partir da segunda posição.
2. O algoritmo vai comparar um item N ao item N - 1 (o anterior)
3. O algoritmo vai comparar se o item N é menor que N - 1.
4. Caso o algoritmo verifique que o item N é menor que N - 1, o algoritmo vai entrar no segundo loop. 
5. O segundo loop vai percorrer do item N até 0 trocando as posições até o menor item ir para o começo da lista. 
6. Se 0 item N for maior que N - 1, o algoritmo vai pular para o próximo item. 
6. O algoritmo vai fazer isso até que a lista fique ordenada.

Esse algoritmo conta com dois laços de repetição, o primeiro laço de repetição vai passar por todos os indíces da lista, cada indice vai se tornar uma variável para as verificações. Imaginemos o array passado no segundo parágrafo - {5, 4, 1, 3, 2, 0}. 

Esse algoritmo vai começar a partir do segundo indíce, o valor 4 na posição 1. 
Então o algoritmo vai verificar se N é menor que N - 1, ou seja, se o valor que está na posição 1 é maior que o item que está na posição 0, nesse caso, está. 
Então o algoritmo vai entrar no segundo loop, onde vai começar a rodar da posição N até a posição 0 do array, fazendo as trocas, dessa forma o item N, que foi o menor até o momento, vai ser guardado no começo do array, ordenando-o. 

----
## Explanation in english
The Insertion Sort algorithm is a script with O(n²) complexity, since it uses a loop inside another to check if a value is smaller or larger and make the necessary orders.

Imagine that we have an unordered list with 6 positions - {5, 4, 1, 3, 2, 0} - Insertion Sort will do the following:

1. The algorithm will go through the list from beginning to end starting from the second position.
2. The algorithm will compare item N to item N - 1 (the previous one)
3. The algorithm will compare whether item N is less than N - 1.
4. If the algorithm verifies that item N is less than N - 1, the algorithm will enter the second loop.
5. The second loop will go from item N to 0 swapping positions until the smallest item goes to the top of the list.
6. If 0 item N is greater than N - 1, the algorithm will skip to the next item.
6. The algorithm will do this until the list is sorted.

This algorithm has two repetition loops, the first repetition loop will go through all the indexes in the list, each index will become a variable for the checks. Let's imagine the array passed in the second paragraph - {5, 4, 1, 3, 2, 0}.

This algorithm will start from the second index, the value 4 at position 1.
Then the algorithm will check if N is less than N - 1, that is, if the value that is in position 1 is greater than the item that is in position 0, in this case, it is.
Then the algorithm will enter the second loop, where it will start running from position N to position 0 of the array, making the changes, in this way item N, which was the smallest so far, will be stored at the beginning of the array, ordering it. 