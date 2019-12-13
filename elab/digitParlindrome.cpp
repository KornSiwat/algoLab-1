#include <iostream>

using namespace std;

int main()
{
  int number;
  int numbers[100];
  int digitCount = 0;

  cin >> number;

  do
  {
    numbers[digitCount] = number % 10;
    number /= 10;
    digitCount++;
  } while (number > 0);

  bool isParlindrome = true;

  for (int i = 0; i < digitCount / 2; i++)
  {
    if (numbers[i] != numbers[digitCount - 1 - i])
    {
      isParlindrome = false;
    }
  }

  if (isParlindrome)
  {
    cout << "yes" << endl;
  }
  else
  {
    cout << "no" << endl;
  }

  return 0;
}