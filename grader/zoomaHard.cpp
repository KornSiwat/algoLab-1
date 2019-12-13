#include <iostream>
#include <list>

using namespace std;

struct Ball
{
  int id;

  Ball(int id) : id(id) {}
};

int main()
{
  int startSize, inputSize;

  cin >> startSize >> inputSize;

  list<Ball*> start;

  for (int i = 1; i < startSize + 1; ++i)
  {
    int input;
    cin >> input;

    start.push_back(new Ball(i));
  }

  for (int i = 0; i < inputSize; ++i)
  {
    int input, ballId;

    cin >> input >> ballId;

    list<Ball*>::iterator it;

    for (list<Ball*>::iterator j = start.begin(); j != start.end(); ++j)
    {
      if ((*j)->id == ballId)
      {
        ++j;
        it = j;
        break;
      }
    }

    start.insert(it, new Ball(start.size() + 1));
  }


  cout << endl;

  for (auto i = start.begin(); i != start.end(); ++i)
  {
    cout << (*i)->id << endl;
  }

  return 0;
}