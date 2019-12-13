#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main()
{
  int coacheCount;

  while (cin >> coacheCount)
  {
    if (coacheCount == 0)
    {
      break;
    }

    while (true)
    {
      list<int> incomingTrain;
      list<int> organizedTrain;
      stack<int> station;
      bool exit = false;

      for (int i = 1; i < coacheCount + 1; ++i)
      {
        incomingTrain.push_back(i);
      }

      for (int i = 0; i < coacheCount; ++i)
      {
        int coachNo;

        cin >> coachNo;

        organizedTrain.push_back(coachNo);

        if (coachNo == 0)
        {
          exit = true;
          cout << endl;
          break;
        }
      }

      if (exit)
      {
        break;
      }

      while (!organizedTrain.empty())
      {
        if (station.empty())
        {
          if (incomingTrain.empty())
          {
            break;
          }

          station.push(incomingTrain.front());
          incomingTrain.pop_front();
        }
        else
        {
          if (station.top() == organizedTrain.front())
          {
            station.pop();
            organizedTrain.pop_front();
          }
          else
          {
            if (incomingTrain.empty())
            {
              break;
            }

            station.push(incomingTrain.front());
            incomingTrain.pop_front();
          }
        }
      }

      if (organizedTrain.empty())
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}