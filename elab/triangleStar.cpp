#include <iostream>
using namespace std;

void printSpace(int count)
{
  for (int index = 0; index < count; index++)
  {
    cout << " ";
  }
}

void printStar(int count)
{
  for (int index = 0; index < count; index++)
  {
    cout << "*";
  }
}

int main()
{
  int N;

  cin >> N;

  for (int index = 1; index < N + 1; index++)
  {
    printSpace(N - index);
    printStar(index);
    cout << endl;
  }
}