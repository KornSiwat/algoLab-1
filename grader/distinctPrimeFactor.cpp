#include <iostream>

using namespace std;

bool isPrime(int input) {
  if (input < 2) {
    return false;
  }

  if (input == 2) {
    return true;
  }

  for (int i = 2; i < input; i++)
  {
    if (input % i == 0) {
      return false;
    }
  }

  return true;
}

int countPrimeFactor(int input) {
  int count = 0;

  for (int i = 1; i < input + 1; ++i) {
    if (input % i == 0 && isPrime(i)) {
      ++count;
    }
  }

  return count;
}

int main()
{
  int input;

  cin >> input;

  cout << countPrimeFactor(input) << endl;

  return 0;
}