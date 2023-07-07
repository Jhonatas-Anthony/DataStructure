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

    if (front == nullptr || front->senha[0] == 'N')
    {
      newNode->next = front;
      front = newNode;
    }
    else
    {
      Node *current = front;

      if (senha[0] == 'P')
      {
        while (current->next != nullptr && current->next->senha[0] == 'P')
        {
          current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
      }
      else
      {
        while (current->next != nullptr)
        {
          current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
      }
    }
  }

  void interleave()
  {
    Node *current = front;
    Node *prev = nullptr;
    Node *next = nullptr;

    while (current != nullptr)
    {
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
  pq.enqueue("P1");
  pq.enqueue("P2");
  pq.enqueue("P3");
  pq.enqueue("N2");
  pq.enqueue("N3");
  pq.enqueue("P4");
  pq.enqueue("N4");
  pq.enqueue("N5");

  pq.interleave();

  pq.print();

  return 0;
}
