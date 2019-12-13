#include <iostream>

using namespace std;

int main()
{
  int startNumber, endNumber;

  cin >> startNumber >> endNumber;

  int sumOfRange = 0;

  for (int i=startNumber; i<endNumber+1; i++) {
    sumOfRange += i;
  }

  cout << sumOfRange << endl;
}
