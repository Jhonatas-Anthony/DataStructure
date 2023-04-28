# QuickSort

## Explicação em português

O algoritmo quick Sort é um dos quais tem a filosofia do 'dividir para conquistar' usando a recursão como maior sua maior aliada nessa tarefa. Sabendo disso, podemos afirmar que o QuickSort tem complexidade de O(n log n).
Sua complexidade se dá devido aos passos que esse algoritmo faz para fazer as devidas ordenações, após definir o pivô, ele divide os termos em dois sub-arrays, um com os termos que são menores, e outro com os termos que são maiores.
Na etapa de divisão, o algoritmo percorre todo o array para dividir em duas partes, o que tem uma complexidade de O(n). Na etapa de conquista, ele realiza a ordenação de cada parte recursivamente, o que também tem complexidade O(n log n). Como essa operação é realizada em cada uma das partes, o algoritmo tem complexidade O(n log n) em média.
Porém, no pior dos casos essa complexidade é O(n²), esse pior caso é quando o pivo escolhido é o menor ou maior termo desse sub-array. 

Caso queira usar o Quick Sort como algoritmo de ordenação, para organizar uma lista com 10 posiçoẽs, por exemplo, saiba que o Quick Sort vai fazer o seguinte: 
1. O Algoritmo vai fazer a escolha do pivô, em um array desordenado não importa se esse pivot vai ser o que está na primeira posição, no meio, ou no final da lista. 
2. O algoritmo vai rearanjar a lista em torno desse pivô, colocando os menores valores à esquerda, e os maiores à direita. 
3. O algoritmo vai realizar a mesma operação nos indices que estão à esquerda do pivô, e também nos índices que estão a direita do pivô. 
4. Após realizar a recursividade até chegar no caso base (array com tamanho de 0 ou 1) dos dois lados, o algoritmo vai ter finalmente ordenado todo o array.

O algoritmo quickSort.cpp é a segunda verão do algoritmo V1.cpp, resolvi dividir o problema para facilitar o entendimento e montagem deste algoritmo. 
O algoritmo implementa o algoritmo de ordenação QuickSort. A função partition é responsável por escolher um elemento do array como o pivô e rearranjar o array de modo que os elementos menores que o pivô fiquem à sua esquerda e os maiores fiquem à direita. 
A função quickSort é a função recursiva principal que chama a função partition para dividir o array em duas partes menores, e em seguida, chama a si mesma recursivamente para ordenar as duas partes menores. O processo continua até que todas as partes menores tenham no máximo um elemento. Quando isso acontece, o array está completamente ordenado.

---

## Explanation in English

The quick Sort algorithm is one of which has the 'divide and conquer' philosophy using recursion as its greatest ally in this task. Knowing this, we can say that QuickSort has a complexity of O(n log n).
Its complexity is due to the steps that this algorithm takes to make the proper orders, after defining the pivot, it divides the terms into two sub-arrays, one with the terms that are smaller, and another with the terms that are bigger.
In the division step, the algorithm goes through the entire array to divide it into two parts, which has a complexity of O(n). In the conquest step, it sorts each part recursively, which also has O(n log n) complexity. As this operation is performed on each of the parts, the algorithm has complexity O(n log n) on average.
However, in the worst case this complexity is O(n²), this worst case is when the chosen pivot is the smallest or largest term of this sub-array.

If you want to use Quick Sort as a sorting algorithm, to organize a list with 10 positions, for example, know that Quick Sort will do the following:
1. The Algorithm will choose the pivot, in an unordered array, it doesn't matter if this pivot will be the one in the first position, in the middle, or at the end of the list.
2. The algorithm will rearrange the list around this pivot, placing the smallest values on the left and the largest on the right.
3. The algorithm will perform the same operation on the indexes that are to the left of the pivot, and also on the indexes that are to the right of the pivot.
4. After performing the recursion until reaching the base case (array with size 0 or 1) on both sides, the algorithm will finally have sorted the entire array.

The quickSort.cpp algorithm is the second version of the V1.cpp algorithm, I decided to divide the problem to facilitate the understanding and assembly of this algorithm.
The algorithm implements the QuickSort sorting algorithm. The partition function is responsible for choosing an array element as the pivot and rearranging the array so that the elements smaller than the pivot are on the left and the larger ones are on the right.
The quickSort function is the main recursive function that calls the partition function to divide the array into two smaller parts, and then calls itself recursively to sort the two smaller parts. The process continues until all smaller parts have at most one element. When this happens, the array is completely sorted.