#include <iostream>
using namespace std;

bool isPrime(int p)
{
  if (p <= 1)
  {
    return false;
  }

  for (int i = 2; i < p; i++)
  {
    if (p % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int x;
  int nextPrime;

  cin >> x;

  for (int index = x+1; true; index++) {
    if (isPrime(index)) {
      cout << index << endl;
      break;
    }
  }
}