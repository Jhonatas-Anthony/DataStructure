#include <iostream>

using namespace std;

// Struct para representar um nó na fila de prioridade
struct Node
{
  string data;
  int num;
  Node *next;

  Node(const string &data) : data(data), next(nullptr) {}
};

// Classe para representar a fila de prioridade
class PriorityQueue
{
private:
  Node *front;
  int E = 0;
  int S = 0;
  int D = 0;
  int F = 0;
  int EN = 0;
  int SN = 0;
  int DN = 0;
  int FN = 0;

public:
  // construtor
  PriorityQueue()
  {
    front = nullptr;
  }

  Node *frontReturn()
  {
    return front;
  }

  void enqueue(const string &data)
  {
    Node *newNode = new Node(data);

    if (front == nullptr)
    {
      newNode->next = nullptr;
      if (data[1] == 'E')
      {
        if (data[0] == 'P')
        {
          newNode->num = EN;
          EN++;
        }
        else
        {
          newNode->num = E;
          E++;
        }
      }
      else if (data[1] == 'D')
      {
        if (data[0] == 'P')
        {
          newNode->num = DN;
          DN++;
        }
        else
        {
          newNode->num = D;
          D++;
        }
      }
      else if (data[1] == 'S')
      {
        if (data[0] == 'P')
        {
          newNode->num = SN;
          SN++;
        }
        else
        {
          newNode->num = S;
          S++;
        }
      }
      else if (data[1] == 'F')
      {
        if (data[0] == 'P')
        {
          newNode->num = FN;
          FN++;
        }
        else
        {
          newNode->num = F;
          F++;
        }
      }
      front = newNode;
    }
    else
    {
      Node *current = front;
      Node *previous = nullptr;
      int control = 0;
      int control2 = 0;

      while (current != nullptr && (current->data[0] == 'P' || control < 2))
      {
        if (current->data[0] == 'N')
          control++;
        else if (current->data[0] == 'P')
        {
          control = 0;
          control2++;
        }

        previous = current;
        current = current->next;
      }

      if ((control2 < 2 && data[0] == 'P') || (current == nullptr && data[0] == 'P'))
      {
        newNode->next = current;
        if (previous != nullptr)
          previous->next = newNode;
        else
          front = newNode;
      }
      else if (current != nullptr)
      {
        while (current != nullptr && (current->data[0] == 'N' || (current->data[0] == 'P' && current->num < newNode->num)))
        {
          previous = current;
          current = current->next;
        }

        newNode->next = current;
        previous->next = newNode;
      }
      else
      {
        previous->next = newNode;
        newNode->next = nullptr;
      }

      if (data[1] == 'E')
      {
        newNode->num = E;
        E++;
      }
      else if (data[1] == 'D')
      {
        if (data[0] == 'P')
        {
          newNode->num = DN;
          DN++;
        }
        else
        {
          newNode->num = D;
          D++;
        }
      }
      else if (data[1] == 'S')
      {
        if (data[0] == 'P')
        {
          newNode->num = SN;
          SN++;
        }
        else
        {
          newNode->num = S;
          S++;
        }
      }
      else if (data[1] == 'F')
      {
        if (data[0] == 'P')
        {
          newNode->num = FN;
          FN++;
        }
        else
        {
          newNode->num = F;
          F++;
        }
      }
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
      cout << "Priority queue is empty." << endl;
      return;
    }

    Node *current = front;

    while (current != nullptr)
    {
      string str = to_string(current->num);
      size_t n = 3;
      int precision = n - min(n, str.size());
      str.insert(0, precision, '0');
      cout << "Senha: " << current->data[0] << current->data[1] << str << endl;
      current = current->next;
    }
  }

  void mostrarPainel()
  {
    Node *current = front;
    int contador = 0;
    int guiche = 1;

    string array[5];

    while (current != nullptr && contador < 5)
    {
      array[contador] = current->data;
      cout << array[contador] << " - Guichê " << guiche << endl;
      current = current->next;
      contador++;
      guiche = (guiche % 5) + 1;
    }
    if (contador == 5)
    {
      contador = 0;
      while (current != nullptr && contador < 5)
      {
        array[contador] = current->data;
        cout << array[contador] << " - Guichê " << guiche << endl;
        current = current->next;
        contador++;
        guiche = (guiche % 5) + 1;
      }
    }
  }
};

string gerarSenha(int contador, char tipoCliente, char tipoOperacao)
{
  string senha = "";
  senha += tipoCliente;
  senha += tipoOperacao;
  senha += to_string(contador / 1000);       // Primeiro dígito do contador
  senha += to_string((contador / 100) % 10); // Segundo dígito do contador
  senha += to_string((contador / 10) % 10);  // Terceiro dígito do contador
  senha += to_string(contador % 10);         // Quarto dígito do contador
  return senha;
}

int main()
{
  PriorityQueue filaPrioridade;
  PriorityQueue painel;

  int contadorNaoPref = 0;
  int contadorPref = 0;

  char tipoOperacao;

  while (true)
  {
    cout << "########################\n";
    cout << "Escolha uma opção:\n";
    cout << "1. Retirar senha\n";
    cout << "2. Chamar senha\n";
    cout << "3. Mostrar painel\n";
    cout << "4. Sair\n";
    cout << "########################";
    cout << endl;

    int opcao;
    cout << "Digite: ";
    cin >> opcao;


    switch (opcao)
    {
    case 1:
      char tipoCliente;
      cout << "Cliente \n P - Preferencial \n N - Não Preferencial \n Digite:";
      cin >> tipoCliente;
      cout << endl;
      cout << "Tipo de operação\n S - Sacar \n D - Depositar \n F - Financiamento \n E - Emprestar \n Digite:";
      cin >> tipoOperacao;
      cout << endl;

      if (tipoCliente == 'P')
      {
        string senha = gerarSenha(contadorPref, tipoCliente, tipoOperacao);
        filaPrioridade.enqueue(senha);
        contadorPref += 2; // Incrementa o contador de preferenciais em 2
      }
      else
      {
        string senha = gerarSenha(contadorNaoPref, tipoCliente, tipoOperacao);
        filaPrioridade.enqueue(senha);
        contadorNaoPref++;
      }

      cout << "Senha retirada." << endl;
      break;

    case 2:
      if (filaPrioridade.isEmpty())
      {
        cout << "Nenhuma senha para chamar.\n";
      }
      else
      {
        Node *front = filaPrioridade.frontReturn();
        painel.enqueue(front->data);
        cout << "########################\n";
        cout << "Senha chamada: " << front->data << endl;
        cout << "########################\n";
        filaPrioridade.dequeue();
      }
      break;

    case 3:
      cout << "########################\n";
      cout << "Painel:\n";
      painel.mostrarPainel();
      cout << "########################\n";
      break;

    case 4:
      cout << "Encerrando o programa.\n";
      return 0;

    default:
      cout << "Opção inválida. Tente novamente.\n";
      break;
    }
  }
}
