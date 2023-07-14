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
  int EP = 0;
  int SP = 0;
  int DP = 0;
  int FP = 0;
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
          newNode->num = EP;
          EP++;
        }
        else
        {
          newNode->num = EN;
          EN++;
        }
      }
      else if (data[1] == 'D')
      {
        if (data[0] == 'P')
        {
          newNode->num = DP;
          DP++;
        }
        else
        {
          newNode->num = DN;
          DN++;
        }
      }
      else if (data[1] == 'S')
      {
        if (data[0] == 'P')
        {
          newNode->num = SP;
          SP++;
        }
        else
        {
          newNode->num = SN;
          SN++;
        }
      }
      else if (data[1] == 'F')
      {
        if (data[0] == 'P')
        {
          newNode->num = FP;
          FP++;
        }
        else
        {
          newNode->num = FN;
          FN++;
        }
      }
      front = newNode;
    }
    else
    {
      Node *current = front;
      Node *previous = nullptr;
      int controlN = 0;
      int controlP = 0;

      while (current != nullptr && (current->data[0] == 'P' || controlN < 2))
      {
        if (current->data[0] == 'N')
          controlN++;
        else if (current->data[0] == 'P')
        {
          controlN = 0;
          controlP++;
        }

        previous = current;
        current = current->next;
      }

      if ((controlP < 2 && data[0] == 'P') || (current == nullptr && data[0] == 'P'))
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
        if (data[0] == 'P')
        {
          newNode->num = EP;
          EP++;
        }
        else
        {
          newNode->num = EN;
          EN++;
        }
      }
      else if (data[1] == 'D')
      {
        if (data[0] == 'P')
        {
          newNode->num = DP;
          DP++;
        }
        else
        {
          newNode->num = DN;
          DN++;
        }
      }
      else if (data[1] == 'S')
      {
        if (data[0] == 'P')
        {
          newNode->num = SP;
          SP++;
        }
        else
        {
          newNode->num = SN;
          SN++;
        }
      }
      else if (data[1] == 'F')
      {
        if (data[0] == 'P')
        {
          newNode->num = FP;
          FP++;
        }
        else
        {
          newNode->num = FN;
          FN++;
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
  senha += to_string((contador / 100) % 10); // Segundo dígito do contador
  senha += to_string((contador / 10) % 10);  // Terceiro dígito do contador
  senha += to_string(contador % 10);         // Quarto dígito do contador
  return senha;
}

int main()
{
  PriorityQueue filaPrioridade;
  PriorityQueue chamada;

  //Primeiro caso - Sequencia de Não Preferenciais
  /* filaPrioridade.enqueue("NS000");
  filaPrioridade.enqueue("NS001");
  filaPrioridade.enqueue("NS002");
  filaPrioridade.enqueue("NS003");
  filaPrioridade.enqueue("NS004");
  filaPrioridade.enqueue("PS000");
  filaPrioridade.enqueue("PS001"); */

  //Segundo caso - Sequência de Preferênciais
  /* filaPrioridade.enqueue("PS000");
  filaPrioridade.enqueue("PS001");
  filaPrioridade.enqueue("PS002");
  filaPrioridade.enqueue("PS003");
  filaPrioridade.enqueue("PS004");
  filaPrioridade.enqueue("NS000");
  filaPrioridade.enqueue("NS001"); */

  //Terceiro caso - Aleatorio
  /* filaPrioridade.enqueue("NS000");
  filaPrioridade.enqueue("PS000");
  filaPrioridade.enqueue("NS001");
  filaPrioridade.enqueue("NS002");
  filaPrioridade.enqueue("NS003");
  filaPrioridade.enqueue("PS001");
  filaPrioridade.enqueue("NS004"); */



  int contadrNP = 0;
  int contadorP = 0;

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
        string senha = gerarSenha(contadorP, tipoCliente, tipoOperacao);
        filaPrioridade.enqueue(senha);
        contadorP ++; // Incrementa o contador de preferenciais em 2
      }
      else
      {
        string senha = gerarSenha(contadrNP, tipoCliente, tipoOperacao);
        filaPrioridade.enqueue(senha);
        contadrNP++;
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
        chamada.enqueue(front->data);
        cout << "########################\n";
        cout << "Senha chamada: " << front->data << endl;
        cout << "########################\n";
        filaPrioridade.dequeue();
      }
      break;

    case 3:
      cout << "########################\n";
      cout << "Painel:\n";
      chamada.mostrarPainel();
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
