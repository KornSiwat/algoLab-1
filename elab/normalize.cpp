#include <iostream>
#include <math.h>

using namespace std;

int gcd(int x, int y)
{
  int result;

  for (int i = 1; i < max(x, y) + 1; i++)
  {
    if (x%i==0 && y%i==0) {
      result = i;
    }
  }

  return result;
}

int main()
{
  int numerator, denominator;

  cin >> numerator >> denominator;

  int divisor = gcd(numerator, denominator);

  numerator /= divisor;
  denominator /= divisor;

  cout << numerator << "/" << denominator << endl;
}