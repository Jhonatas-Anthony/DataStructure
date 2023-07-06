#include <iostream>

struct Node
{
  std::string data;
  Node *next;

  Node(const std::string &data) : data(data), next(nullptr){};
};

class PrioriryQueueBank
{
private:
  Node *front;

public:
  PrioriryQueueBank()
  {
    front = nullptr;
  };

  void enqueue(const std::string &data)
  {
    Node *ficha = new Node(data);
    char preference = data[0];

    // Inserção do primeiro elemento - Preferencial
    if (front == nullptr || front->data[0] == 'N')
    {
      ficha->next = front;
      front = ficha;
    }
    else
    {
      Node *current = front;
      int a = 0;
      while (current->next != nullptr)
      {
        if (current->data[0] = 'P')
        {
          current = current->next;
          std::cout << "devo aparecer duas vezes\n";
        }
        else
        {
          current = current->next;
        }
        ficha->next = current->next;
        current->next = ficha;
        a++;
      }
    }
  };

  void print()
  {
    Node *current = front;
    while (current != nullptr)
    {
      char preference = current->data[0];
      std::string string = "null";
      if (preference == 'N')
      {
        string = "Não Preferencial";
      }
      else if (preference == 'P')
      {
        string = "Preferencial";
      }
      std::cout << "Priority: " << string << ", Ficha: " << current->data << std::endl;
      current = current->next;
    }
  };
};

int main()
{
  // Saque - S
  // Deposito - D
  // Financiamento - F
  PrioriryQueueBank pq;
  pq.enqueue("N");
  pq.enqueue("N");
  pq.enqueue("P");
  pq.enqueue("N");
  pq.enqueue("N");
  pq.enqueue("N");
  pq.enqueue("P");
  pq.enqueue("N");

  pq.print();

  return 0;
}