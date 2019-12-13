#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
  int inputCount;

  cin >> inputCount;

  for (int count = 0; count < inputCount; count++)
  {
    int n;

    cin >> n;

    int answer = abs(floor((((((((n*567)/9)+7492)*235)/47)-498)%100)/10));

    cout << answer << endl;
  }
}