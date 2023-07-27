/* 
  Erro nas funções in order e post order
*/

#include <iostream>

struct Node
{
  int value;
  Node *left;
  Node *right;

  Node(int value) : value(value), left(nullptr), right(nullptr){};
};

class Tree
{
private:
  Node *raiz;

  // Inserir nó recursivamente
  Node *insertNode(Node *currentNode, int valor)
  {

    // Verificando se a árvore está vazia
    if (currentNode == nullptr)
    {
      return new Node(valor);
    }

    // Se não estiver vazia...
    if (valor < currentNode->value)
    {
      currentNode->left = insertNode(currentNode->left, valor);
    }
    else if (valor >= currentNode->value)
    {
      currentNode->right = insertNode(currentNode->right, valor);
    }

    return currentNode;
  };

  // Retornar profundidade recursivamente
  int depthValue(Node *currentNode)
  {

    if (currentNode == nullptr)
    {
      return 0;
    }

    int leftCounter = depthValue(currentNode->left);
    int rightleftCounter = depthValue(currentNode->right);

    return std::max(leftCounter, rightleftCounter) + 1;
  }

  void printPreOrder(Node *currentNode)
  {
    if (currentNode != nullptr)
    {
      std::cout << currentNode->value << " ";
      printPreOrder(currentNode->left);
      printPreOrder(currentNode->right);
    }
  }

  void printInOrder(Node *currentNode)
  {
    if (currentNode != nullptr)
    {
      printInOrder(currentNode->left);
      std::cout << currentNode->value << " ";
      printInOrder(currentNode->right);
    }
  }

  void printPostOrder(Node *currentNode)
  {
    if (currentNode != nullptr)
    {
      printPostOrder(currentNode->left);
      printPostOrder(currentNode->right);
      std::cout << currentNode->value << " ";
    }
  }

  void printTree(Node *currentNode, int level)
  {
    if (currentNode != nullptr)
    {
      printTree(currentNode->right, level + 1);

      for (int i = 0; i < level * 8; i++)
      {
        std::cout << " ";
      }
      std::cout << currentNode->value << std::endl;

      printTree(currentNode->left, level + 1);
    }
  }

public:
  Tree() : raiz(nullptr){};

  void insert(int valor)
  {
    raiz = insertNode(raiz, valor);
  }

  /* int depth(){
    return depthValue(raiz);
  } */

  void depth()
  {
    std::cout << "profundidade - " << depthValue(raiz) << std::endl;
  }

  void preOrder()
  {
    std::cout << "pre-order: ";
    printPreOrder(raiz);
    std::cout << std::endl;
  }

  void inOrder()
  {
    std::cout << "in-order: ";
    printInOrder(raiz);
    std::cout << std::endl;
  }

  void postOrder()
  {
    std::cout << "post-order: ";
    printPostOrder(raiz);
    std::cout << std::endl;
  }

  void print(){
    std::cout << "Vizualização: " << std::endl;
    printTree(raiz, 0);
  }


};

int main()
{
  Tree tree;

  tree.insert(50);
  tree.insert(30);
  tree.insert(70);
  tree.insert(20);
  tree.insert(40);
  tree.insert(60);
  tree.insert(90);

  tree.depth();

  tree.preOrder();
  tree.inOrder();
  tree.postOrder();

  std::cout << " " << std::endl;
  tree.print();
  std::cout << " " << std::endl;

  return 0;
}