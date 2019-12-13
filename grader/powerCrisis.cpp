#include <iostream>
#include <vector>

using namespace std;

struct Region
{
  int id;

  Region(int id) : id(id) {}
};

int main()
{
  int regionCount;

  while (cin >> regionCount)
  {
    if (regionCount == 0)
    {
      break;
    }

    vector<Region *> newzealand;

    for (int i = 1; i < regionCount + 1; ++i)
    {
      newzealand.push_back(new Region(i));
    }

    int m = 1;

    while (1)
    {
      vector<Region *> newzealandClone = newzealand;
      newzealandClone.erase(newzealandClone.begin());

      int index = -1;

      while (newzealandClone.size() != 1)
      {
        int counter = m;

        while (counter != 0)
        {
          ++index;
          --counter;

          if (index > newzealandClone.size() - 1)
          {
            index = 0;
          }
        }

        newzealandClone.erase(newzealandClone.begin() + index);
        --index;

        if (index < 0)
        {
          index = newzealandClone.size() - 1;
        }
      }

      if ((newzealandClone.front())->id == 13)
      {
        break;
      }

      ++m;
    }

    cout << m << endl;
  }

  return 0;
}