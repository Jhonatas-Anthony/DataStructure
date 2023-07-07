#include <iostream>
#include <string>

struct Node
{
  std::string senha;
  Node *next;

  Node(const std::string &senha) : senha(senha), next(nullptr) {}
};

class PriorityQueue
{
private:
  Node *front;

public:
  PriorityQueue()
  {
    front = nullptr;
  }

  void enqueue(const std::string &senha)
  {
    Node *newNode = new Node(senha);

    if (front == nullptr)
    {
      newNode->next = front;
      front = newNode;
    }
    else
    {
      Node *current = front;
      while (current->next != nullptr)
      {
        current = current->next;
      }
      newNode->next = current->next;
      current->next = newNode;
    }
  }

  void dequeue()
  {
    if (!isEmpty())
    {
      Node *nodeToDelete = front;
      front = front->next;
      delete nodeToDelete;
    }
  }

  void interleave()
  {
    Node *current = front;
    Node *currentPriority;
    Node *currentSearch;
    Node *lastPointer;

    while (current != nullptr)
    {
      if (current->senha[0] == 'P')
      {
        currentPriority = current;
        currentSearch = current;

        // Primeiro caso: duas prioridades juntas
        if (current->next->senha[0] == 'P')
        {
          while (currentSearch->senha[0] == 'P')
          {
            currentSearch = currentSearch->next;
          }
          lastPointer = currentPriority->next;
          currentPriority->next = currentSearch;
          currentSearch = lastPointer;
        }
        // Segundo caso: um não preferencial entre dois preferenciais
        // else if (current->next->next->senha[0] == 'P')
        //{
        /* std::cout << currentSearch;
        currentSearch = current->next->next;
        std::cout << currentSearch; */
        /* while (currentSearch->senha[0] == 'P')
        {
          currentSearch = currentSearch->next;
        } */
        //}
        /* else if(current->next->next->next->senha[0] == 'P'){
           currentPriority = current;
        }*/
        else
        {
          currentPriority = current;
          currentSearch = current;
          while (currentSearch->senha[0] == 'N')
          {
            currentSearch = currentSearch->next;
          }
          lastPointer = currentPriority->next->next;
          currentPriority->next = lastPointer->next;
          currentSearch->next = lastPointer;
        }
        std::cout << 'o';
        current = current->next;
      }
      current = current->next;
    }
  }

  bool isEmpty()
  {
    return front == nullptr;
  }

  void print()
  {
    if (isEmpty())
    {
      std::cout << "Priority queue is empty." << std::endl;
      return;
    }

    Node *current = front;
    while (current != nullptr)
    {
      std::cout << "Senha: " << current->senha << std::endl;
      current = current->next;
    }
  }
};

int main()
{
  PriorityQueue pq;
  pq.enqueue("N1");
  pq.enqueue("N2");
  pq.enqueue("P1");
  pq.enqueue("P2");
  pq.enqueue("P3");
  pq.enqueue("N3");
  pq.enqueue("N4");
  pq.enqueue("P4");
  pq.enqueue("N5");
  pq.enqueue("N6");
  pq.enqueue("N7");
  pq.enqueue("N8");
  pq.enqueue("N9");
  pq.enqueue("N10");
  pq.enqueue("P5");

  pq.interleave();

  pq.print();

  return 0;
}
