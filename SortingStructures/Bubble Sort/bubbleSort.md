# Bubble Sort 
## Explicação em português
O algoritmo Bubble Sort é um script com complexidade O(n²), visto que usa um loop dentro de outro para verificar se um valor é menor ou maior e fazer as devidas ordenações. 

Imagine que temos uma lista desordenada com 10 posições - o Bubble Sort não é o algoritmo mais recomendado por causa da sua complexidade, mas se optarmos por usá-lo, saiba que vai acontecer o seguinte:

1. O algoritmo vai percorrer o array do inicio ao fim várias vezes.
2. O algoritmo vai comparar um elemento com o pŕoximo na lista.
3. O algoritmo vai verificar se o próximo elemento da lista é menor que o atual, ou se o atual é maior que o próximo elemento, se for, troque suas posições.
4. O algoritmo vai continuar percorrendo a lista até que nenhum elemento precise mais ser trocado

Esse algoritmo conta com dois laços de repetição, o primeiro loop vai percorrer a lista de elementos N vezes, onde N é a quantidade de elementos na lista. O segundo loop vai comparar um elemento com o próximo, se o elemento for maior que o próximo, eles terão suas posições trocadas até que a lista esteja totalmente ordenada. 
Perceba que dessa forma, já na primeira comparação, o Bubble Sort vai afirmar que o maior elemento vai para o final da lista, logo, não precisamos mais verificar aquela posição, por isso o segundo loop vai até a posição N - I, onde I é a quantidade de vezes que o loop aconteceu.

---
## Explanation in english
The Bubble Sort algorithm is a script with O(n²) complexity, since it uses a loop inside another to check if a value is smaller or larger and make the necessary orders.

Imagine that we have an unordered list with 10 positions - Bubble Sort is not the most recommended algorithm because of its complexity, but if we choose to use it, know that the following will happen:

1. The algorithm will loop through the array from beginning to end several times.
2. The algorithm will compare an element with the next one in the list.
3. The algorithm will check if the next element in the list is smaller than the current one, or if the current one is bigger than the next element, if so, swap their positions.
4. The algorithm will continue going through the list until no more elements need to be replaced.

This algorithm has two repetition loops, the first loop will go through the list of elements N times, where N is the number of elements in the list. The second loop will compare one element with the next, if the element is greater than the next they will be swapped until the list is fully sorted.
Note that this way, in the first comparison, Bubble Sort will state that the largest element goes to the end of the list, so we no longer need to check that position, so the second loop goes to position N - I, where I is the number of times the loop happened.