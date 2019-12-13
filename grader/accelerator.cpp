#include <iostream>
#include <list>

using namespace std;

int main()
{
  int S, N;
  int topSpeed = 0;
  int currentSpeed = 0;
  int currentTime = 0;
  int maxIgniteTime = 0;
  int nextSpeed = 0;

  cin >> N >> S;

  list<int> igniteTimes;

  for (int i = 0; i < N; ++i)
  {
    int igniteTime;

    cin >> igniteTime;
    igniteTimes.push_back(igniteTime);
  }

  igniteTimes.sort();
  maxIgniteTime = igniteTimes.back();

  while (currentSpeed > 0 || currentTime < maxIgniteTime + 1)
  {
    currentSpeed += nextSpeed;
    nextSpeed = 0;

    if (currentTime == igniteTimes.front())
    {
      igniteTimes.pop_front();
      nextSpeed = S;
    }
    else
    {
      if (currentSpeed != 0)
      {
        nextSpeed = -1;
      }
    }

    if (currentSpeed > topSpeed)
    {
      topSpeed = currentSpeed;
    }

    ++currentTime;
  }

  cout << topSpeed << endl;

  return 0;
}