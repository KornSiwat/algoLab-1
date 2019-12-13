#include <iostream>

using namespace std;

int main()
{
  int dayCount;

  cin >> dayCount;

  int eatingHistory[dayCount];

  for (int i = 0; i < dayCount; ++i)
  {
    cin >> eatingHistory[i];
  }

  int totalAnt = 0;
  bool isGonnaEat = true;

  for (int i = 0; i < dayCount; ++i)
  {
    if (isGonnaEat)
    {
      if (eatingHistory[i] < 1000)
      {
        totalAnt += eatingHistory[i];
      } else {
        totalAnt += 1000;
        isGonnaEat = false;
      }
    } else {
      isGonnaEat = true;
    } 
  }

  cout << totalAnt << endl;

  return 0;
}