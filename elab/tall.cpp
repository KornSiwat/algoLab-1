#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int heights[n];

  for (int i = 0; i < n; i++)
  {
    cin >> heights[i];
  }

  for (int i = 0; i < n; i++)
  {
    int tallerCount = 0;
    int baseHeight = heights[i];

    for (int j = 0; j < n; j++)
    {
      int comparingHeight = heights[j];

      if (comparingHeight > baseHeight)
      {
        tallerCount++;
      }
    }

    cout << tallerCount << endl;
  }

  return 0;
}