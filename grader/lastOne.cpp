#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> circle;

  int N, K;

  cin >> N >> K;

  for (int i = 1; i < N + 1; ++i)
  {
    circle.push_back(i);
  }
  int index = 0;
  int counter = K;

  while (circle.size() > 1)
  {
    if (counter > 1)
    {
      ++index;
      --counter;
    }
    else
    {
      circle.erase(circle.begin() + index);
      counter = K;
    }

    if (index > circle.size() - 1)
    {
      index = 0;
    }
  }
  cout << circle[0] << endl;

  return 0;
}