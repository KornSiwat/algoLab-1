#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  do
  {
    int digit = n % 10;
    cout << digit << endl;
    n /= 10;

    cout << n << endl;
  } while (n > 0);
}