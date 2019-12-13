#include <iostream>

using namespace std;

int countCycle(int n)
{
  int cycleCount = 1;

  if (n == 1)
  {
    return cycleCount;
  }

  while (n != 1)
  {
    bool isOdd = n % 2 == 1;

    if (isOdd)
    {
      n = 3 * n + 1;
    }
    else
    {
      n = n / 2;
    }

    cycleCount++;
  }

  return cycleCount;
}

int main()
{
  int initialStartNumber, initialEndNumber;

  while (cin >> initialStartNumber >> initialEndNumber)
  {
    int startNumber = initialStartNumber;
    int endNumber = initialEndNumber;

    if (initialStartNumber > initialEndNumber)
    {
      startNumber = initialEndNumber;
      endNumber = initialStartNumber;
    }

    int maxCycle = 0;

    for (int i = startNumber; i < endNumber + 1; i++)
    {
      int cycleCount = countCycle(i);

      if (cycleCount > maxCycle)
      {
        maxCycle = cycleCount;
      }
    }

    cout << initialStartNumber << " " << initialEndNumber << " " << maxCycle << endl;
  }

  return 0;
}