#include <iostream>

using namespace std;

int main()
{
  int n;
  int numbers[20];

  cin >> n;

  for (int i = 1; i < n + 1; i++)
  {
    numbers[i - 1] = i;
  }

  for (int i = 1; i < n + 1; i++)
  {
    numbers[n - 1 + i] = i;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n + i; j++)
    {
      cout << numbers[j];
    }

    cout << endl;
  }

  return 0;
}
