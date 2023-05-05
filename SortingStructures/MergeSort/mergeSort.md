# MergeSort

## Explicação em Português

O algoritmo Merge Sort é um algoritmo de ordenação que segue o paradigma "dividir e conquistar". Isso significa que ele divide o vetor não ordenado em subvetores menores e mais simples, resolve cada subvetor e depois junta as soluções para formar a solução completa.

Em questão de implementação, esse algoritmo é o mais complexo dos seis outros que trouxe neste repositório pois ele faz diversas coisas até chegar na ordenação.
A complexidade de tempo do Merge Sort é O(n log n) no pior caso, onde "n" é o tamanho do array a ser ordenado. Isso significa que a quantidade de operações que o algoritmo precisa fazer é proporcional a "n" vezes o logaritmo de "n". Essa é uma complexidade muito eficiente em relação a outros algoritmos de ordenação, como Bubble Sort, Selection Sort e Insertion Sort. O Merge Sort é especialmente útil quando você precisa ordenar grandes quantidades de dados.

Antes de prosseguir, é importante falar sobre as duas funções que comportam esse algoritmo.

- A função merge() recebe dois subvetores ordenados e os mescla em um subvetor maior e ordenado. A ideia é comparar o primeiro elemento de cada subvetor e colocar o menor no novo subvetor, repetindo esse processo até que todos os elementos estejam no subvetor final.

- A função mergeSort() é a função principal que usa a recursão para dividir o vetor original em subvetores menores e mais simples. Ela continua dividindo os subvetores até que cada subvetor contenha apenas um elemento, que já está ordenado. Em seguida, a função merge() é chamada para mesclar os subvetores menores em subvetores maiores e ordenados. O processo é repetido até que todo o vetor esteja ordenado.

Se optar por usar o MergeSort, saiba que o seguinte vai acontecer:

1. Verifica se o array tem mais de um elemento.
2. Divide o array em dois sub-arrays de tamanho aproximadamente igual, utilizando o índice do meio.
3. Chama recursivamente a função MergeSort para ordenar cada um dos sub-arrays.
4. Une (merge) os dois sub-arrays ordenados em um único array ordenado.
5. Retorna o array ordenado.

Mas para falar sobre o MergeSort isso ainda diz pouco, nesse caso, irei detalhar mais ainda para fazer compreender como esse algoritmo funciona:

1. Verifica se o array tem mais de um elemento:

2. Verifica se o tamanho do array é maior que 1.

   - Se o array tiver apenas um elemento, ele já está ordenado.
   - Divide o array em dois sub-arrays de tamanho aproximadamente igual:

3. Calcula o índice do meio do array.

   - Cria dois novos arrays, um com os elementos do início até o índice do meio, e outro com os elementos do - índice do meio até o final do array.
   - Chama recursivamente a função MergeSort para ordenar cada um dos sub-arrays:

4. Chama a função MergeSort passando como argumento o primeiro sub-array.

   - Chama a função MergeSort passando como argumento o segundo sub-array.
   - Quando a chamada recursiva terminar, ambos os sub-arrays estarão ordenados.
   - Une (merge) os dois sub-arrays ordenados em um único array ordenado:

5. Cria um novo array vazio com tamanho igual à soma dos tamanhos dos sub-arrays.

   - Inicializa dois índices, um para cada sub-array.
   - Compara os elementos nos dois sub-arrays e coloca o menor elemento no novo array.
   - Incrementa o índice do sub-array que teve o elemento colocado no novo array.
   - Repete o processo até que um dos sub-arrays esteja completamente percorrido.
   - Copia os elementos restantes do sub-array que não foi completamente percorrido para o novo array.
   - Retorna o array ordenado:

6. Retorna o novo array contendo os elementos ordenados.

---

## Explanation in English

The Merge Sort algorithm is a sorting algorithm that follows the "divide and conquer" paradigm. This means that it splits the unsorted array into smaller, simpler subarrays, solves for each subarray, and then puts the solutions together to form the complete solution.

In terms of implementation, this algorithm is the most complex of the six others that I brought in this repository because it does several things until it arrives at sorting.
The time complexity of Merge Sort is O(n log n) in the worst case, where "n" is the size of the array to be sorted. This means that the amount of operations the algorithm needs to do is proportional to "n" times the logarithm of "n". This is a very efficient complexity compared to other sorting algorithms such as Bubble Sort, Selection Sort and Insertion Sort. Merge Sort is especially useful when you need to sort large amounts of data.

Before proceeding, it is important to talk about the two functions that comprise this algorithm.

- The merge() function takes two ordered subarrays and merges them into a larger, ordered subarray. The idea is to compare the first element of each subarray and place the smallest in the new subarray, repeating this process until all elements are in the final subarray.

- The mergeSort() function is the main function that uses recursion to split the original array into smaller, simpler subarrays. It continues dividing the subarrays until each subarray contains only one element, which is already sorted. Then the merge() function is called to merge the smaller subarrays into larger, ordered subarrays. The process is repeated until the entire array is sorted.

If you choose to use MergeSort, be aware that the following will happen:

1. Checks if the array has more than one element.
2. Divide the array into two sub-arrays of approximately equal size, using the middle index.
3. Recursively call the MergeSort function to sort each of the subarrays.
4. Merge the two sorted sub-arrays into a single sorted array.
5. Returns the sorted array.

But to talk about MergeSort this still says little, in this case, I will detail even more to make you understand how this algorithm works:

1. Checks if the array has more than one element:

2. Checks if array size is greater than 1.

   - If the array has only one element, it is already sorted.
   - Splits the array into two sub-arrays of approximately equal size:

3. Calculates the middle index of the array.

   - Creates two new arrays, one with the elements from the beginning to the middle index, and the other with the elements from the - middle index to the end of the array.
   - Recursively call the MergeSort function to sort each of the sub-arrays:

4. Calls the MergeSort function passing the first sub-array as an argument.

   - Calls the MergeSort function passing the second sub-array as an argument.
   - When the recursive call ends, both subarrays will be sorted.
   - Merge the two sorted sub-arrays into a single sorted array:

5. Creates a new empty array with size equal to the sum of sub-array sizes.

   - Initializes two indexes, one for each subarray.
   - Compares the elements in the two sub-arrays and places the smallest element in the new array.
   - Increments the index of the sub-array that had the element placed in the new array.
   - Repeat the process until one of the sub-arrays is completely traversed.
   - Copies the remaining elements of the sub-array that has not been completely traversed to the new array.
   - Returns the sorted array:

6. Returns the new array containing the sorted elements.
