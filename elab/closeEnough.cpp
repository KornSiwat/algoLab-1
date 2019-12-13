#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int N, L;
  int p[10];
  int housePosition;
  int count = 0;

  cin >> N >> L;
  for (int i = 0; i < N; i++)
  {
    cin >> housePosition;

    p[i] = housePosition;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (p[i] != p[j])
      {
        int lengthBtwHouse = abs(p[i] - p[j]);

        if (lengthBtwHouse <= L)
        {
          count++;
        }
      }
    }
  }

  count = count / 2;

  cout << count << endl;
}