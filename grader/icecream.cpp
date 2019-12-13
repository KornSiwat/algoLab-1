#include <iostream>
#include <sstream>

using namespace std;

int stringToInt(string s)
{
  stringstream converter(s);
  int convertedValue;
  converter >> convertedValue;

  return convertedValue;
}

int findIndexOfCharInString(string s, char c)
{
  bool found = false;
  int index;

  for (int i = 0; i < s.length(); i++)
  {
    index = i;

    if (s[i] == c)
    {
      found = true;

      break;
    }
  }

  if (found)
  {
    return index;
  }
  else
  {
    return -1;
  }
}

string intToString(int f)
{
  stringstream converter;
  converter << f;
  string convertedValue = converter.str();

  return convertedValue;
}

typedef string valueType;

struct Node
{
  valueType val;
  Node *next;

  Node(valueType val, Node *next = 0)
      : val(val), next(next) {}
};

class Queue
{
public:
  Node *header;
  Node *tail;

  Queue()
  {
    this->header = new Node(" ");
    this->tail = this->header;
  }
  void print_list()
  {
    if (this->empty())
    {
      return;
    }

    Node *node = this->header->next;
    while (node != this->tail)
    {
      cout << node->val << " ";
      node = node->next;
    }
    cout << endl;
  }

  valueType first()
  {
    return this->header->next->val;
  };

  void pop()
  {
    Node *toBeRemoved = this->header->next;
    this->header->next = toBeRemoved->next;

    delete toBeRemoved;
  };

  void push(valueType x)
  {

    Node *newNode = new Node(x);
    this->tail->next = newNode;
    this->tail = newNode;
  }

  bool empty()
  {
    return this->header == this->tail;
  }
};

int main()
{
  int inputCount;
  Queue *icecreamShopQueue = new Queue();

  cin >> inputCount;

  for (int i = 0; i < inputCount + 1; ++i)
  {
    string input;

    getline(cin, input);

    if (input[0] == '1')
    {
      int startIndex = 2;
      bool found = false;

      for (int index = 2; index < input.size(); ++index)
      {
        if (input[index] == ' ')
      }
    }
    else
    {
      if (!icecreamShopQueue->empty())
      {
        icecreamShopQueue->pop();
      }
    }
    icecreamShopQueue->print_list();
  }
  icecreamShopQueue->print_list();

  return 0;
}