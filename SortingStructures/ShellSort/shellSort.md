# ShellSort
## Explicação em Português

Em geral, a complexidade do pior caso do Shell Sort é considerada como O(n²), onde "n" é o número de elementos no array. No entanto, o melhor caso do Shell Sort pode ter uma complexidade de tempo tão boa quanto O(n log n), o que é melhor do que o pior caso do Insertion Sort.

O algoritmo Shell Sort é um algoritmo de ordenação que usa a abordagem de dividir e conquistar para ordenar um array. Ele é uma variação do algoritmo de ordenação Insertion Sort, que é usado para ordenar sublistas de um determinado intervalo H.

O Shell Sort funciona dividindo o array em sublistas de tamanho H e ordenando essas sublistas usando o Insertion Sort. Em seguida, ele diminui gradualmente o tamanho do intervalo H até que ele se torne 1, e então o array inteiro é ordenado usando o Insertion Sort novamente.

Se optar por usar o Shell Sort, saiba que o algoritmo vai fazer o seguinte: 

1. Primeiro, o algoritmo seleciona um intervalo H que divide o array em sublistas menores.
2. Em seguida, o algoritmo classifica cada sublista usando o algoritmo Insertion Sort.
3. O intervalo H é reduzido e o algoritmo é repetido até que o intervalo H seja igual a 1, quando o algoritmo é executado como um algoritmo de ordenação de inserção padrão.

Ao escolher o intervalo H, o algoritmo tenta reduzir a quantidade de deslocamentos necessários para classificar as sublistas menores. O objetivo é mover os elementos maiores para o final da lista o mais rápido possível para que menos deslocamentos sejam necessários para mover os elementos menores para a frente. O intervalo H é geralmente escolhido usando uma sequência predefinida, como a sequência de Shell.

---
## Explanation in English

In general, the worst-case complexity of Shell Sort is assumed to be O(n²), where "n" is the number of elements in the array. However, best case Shell Sort can have a time complexity as good as O(n log n), which is better than worst case Insertion Sort.

The Shell Sort algorithm is a sorting algorithm that uses the divide-and-conquer approach to sort an array. It is a variation of the Insertion Sort sorting algorithm, which is used to sort sublists of a given H range.

Shell Sort works by dividing the array into h-sized sublists and sorting these sublists using Insertion Sort. It then gradually decreases the size of the H range until it becomes 1, and then the entire array is sorted using Insertion Sort again.

If you choose to use Shell Sort, be aware that the algorithm will do the following:

1. First, the algorithm selects a range H that divides the array into smaller sublists.
2. The algorithm then sorts each sublist using the Insertion Sort algorithm.
3. The range h is reduced and the algorithm is repeated until the range h equals 1, when the algorithm is run as a standard insertion sort algorithm.

By choosing the range H, the algorithm tries to reduce the amount of shifts needed to sort the smaller sublists. The goal is to move the larger elements to the bottom of the list as quickly as possible so that fewer shifts are needed to move the smaller elements to the front. The H range is usually chosen using a predefined string, such as the Shell string.