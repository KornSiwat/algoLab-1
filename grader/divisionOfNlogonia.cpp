#include <iostream>

using namespace std;

int main()
{
  int originX, originY;
  int coordinateCount;

  while (cin >> coordinateCount)
  {
    if (coordinateCount == 0)
    {
      break;
    }

    cin >> originX >> originY;

    for (int inputCount = 0; inputCount < coordinateCount; inputCount++)
    {
      int x, y;

      cin >> x >> y;

      bool isDivisa = x == originX || y == originY;
      bool isNO = x < originX && y > originY;
      bool isNE = x > originX && y > originY;
      bool isSE = x > originX && y < originY;
      bool isSO = x < originX && y < originY;

      if (isDivisa)
      {
        cout << "divisa" << endl;
      }
      else if (isNO)
      {
        cout << "NO" << endl;
      }
      else if (isNE)
      {
        cout << "NE" << endl;
      }
      else if (isSE)
      {
        cout << "SE" << endl;
      }
      else if (isSO)
      {
        cout << "SO" << endl;
      }
    }
  }
}