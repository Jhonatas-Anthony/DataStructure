# Priority Queue
## Explicação em Português 

O código fonte usado nesse dirétorio foi retirado desse [lind](https://github.com/mateusArnaudGoldbarg/ED/blob/main/fila%20prioridade/fp.cpp).

Para criar uma fila de prioridade vamos usar alguns conceitos como ponteiros, classes e struct para montar nossa estrutura. 

Dentre esses conceitos, o ponteiro é o mais complicado de se entender, por isso, vou dar uma breve explicação do que é um ponteiro e o que é um nó e de como eles funcionam.

### Ponteiros e nós:

Um ponteiro é nada mais nada menos que uma variável especial que armazena um endereço na memória física da máquina.

Um ponteiro pode ser declarado usando um '*' logo antes do nome da variável.
Um valor pode ser atribuido ao ponteiro usando um &:
```cpp
int *p; // Declaração de um ponteiro para um inteiro
cout << p; //Deve imprimir um endereço aleatório
cout << *p; //Deve imprimir um valor aleatório
*p = 1; // Atribui 1 ao valor do ponteiro P.

int x = 10;
p = &x; // Atribuição do endereço de X ao ponteiro P

cout << p; //Deve imprimir o endereço de X
cout << *p; //Deve imprimir o valor de X;
```

Os nós são estruturas de dados que armazenam informações e podem ser organizados em listas, árvores, gráfos, além de outras estruturas.

Um nó é definido como uma estrutura ou uma classe que contém uma ou mais variáveis para armazenar dados e, opcionalmente, ponteiros para outros nós, dependendo da estrutura de dados que está sendo implementada.

Os membros de um nó podem ser acessados utilizando o operador ponto (.) se o nó é uma estrutura ou utilizando o operador seta (->) se o nó é um ponteiro para uma estrutura.

Vamos usar bastante o operador de seta ->, por isso é bom saber que esse operador é usado para acessar membros de uma estrutura ou classe por meio de um ponteiro. Ele é uma forma abreviada de combinar a desreferenciação de um ponteiro (*) e o operador de ponto (.).

```cpp
struct Node {
    int data; // Declaração de membro inteiro
    Node* next; // Declaração de ponteiro para o próximo nó
}; // Criação de estrutura Node

Node* nodePtr = new Node; // Declaração de um ponteiro que aponta a um objeto do tipo Node com alocação dinâmica
nodePtr->data = 42; // Atribuição de valor ao atributo data do ponteiro nodePtr
nodePtr->next = nullptr; // Atribuição de valor nulo ao atributo next do ponteiro nodePtr - endereço para o próximo nó
```

### Código

Nesse primeiro momento, para compreender melhor o que o código faz, vamos comentar de cima a baixo o que ele faz, o passo a passo e procedimento detalhado feito por esse script. 

A estrutura Node é usada para representar um nó na fila de prioridade. Cada nó possui um valor de prioridade, uma string para armazenar dados e um ponteiro para o próximo nó na fila.

A classe PriorityQueue é definida para representar a fila de prioridade. Ela possui um ponteiro front que aponta para o primeiro nó na fila.

O construtor PriorityQueue() inicializa o ponteiro front como nullptr, indicando que a fila está vazia.

O método enqueue(int priority, const std::string& data) é responsável por enfileirar um novo elemento na fila de prioridade. Ele recebe um valor de prioridade e uma string de dados como parâmetros.

Dentro do método enqueue, um novo nó é criado com os parâmetros fornecidos. Esse novo nó será inserido na fila.

Se a fila estiver vazia ou se a prioridade do novo nó for menor que a prioridade do nó da frente da fila, o novo nó se torna o novo nó da frente da fila. Isso ocorre porque a fila de prioridade deve ser organizada em ordem crescente de prioridade.

Caso contrário, o algoritmo percorre a fila até encontrar a posição correta para inserir o novo nó. Isso é feito comparando a prioridade do novo nó com a prioridade dos nós existentes.

Quando a posição correta é encontrada, o novo nó é inserido entre o nó atual e o próximo nó. O ponteiro next do novo nó aponta para o nó seguinte do nó atual, e o ponteiro next do nó atual aponta para o novo nó.

O método dequeue() é responsável por remover o elemento da frente da fila, ou seja, o nó com a maior prioridade.

Dentro do método dequeue, é verificado se a fila está vazia. Se não estiver vazia, o nó da frente é armazenado em uma variável temporária, o ponteiro front é atualizado para apontar para o próximo nó da fila e o nó temporário é liberado da memória.

O método isEmpty() verifica se a fila está vazia, verificando se o ponteiro front é nullptr.

O método print() imprime todos os elementos da fila de prioridade. Se a fila estiver vazia, é exibida a mensagem "Priority queue is empty.".

O método print() percorre a fila a partir do nó da frente até o último nó. Para cada nó, ele imprime a prioridade e os dados armazenados.

No main(), é criado um objeto priorityQueue da classe PriorityQueue.

São chamados os métodos enqueue() para adicionar cinco elementos à fila de prioridade com diferentes prioridades e dados.

O método print() é chamado para exibir todos os elementos da fila de prioridade.

São chamados os métodos dequeue() duas vezes para remover os dois primeiros elementos da fila.

O método print() é chamado novamente para exibir os elementos restantes na fila após a remoção.

Resumindo, esse algoritmo implementa uma fila de prioridade utilizando uma lista encadeada. Ele permite adicionar elementos à fila com uma prioridade associada e remove os elementos com a maior prioridade. Os elementos são organizados em ordem crescente de prioridade na fila. A implementação utiliza ponteiros para manipular os nós da fila e garantir a ordem correta dos elementos.