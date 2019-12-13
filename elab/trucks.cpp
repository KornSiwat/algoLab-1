#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int N;
  int w[50];
  int sumWeight = 0;
  int truckMaxLoad = 1000;
  int trucksNeeded = 0;

  cin >> N;

  int trucks[N];

  for (int i = 0; i < N; i++)
  {
    trucks[i] = 0;
  }

  for (int i = 0; i < N; i++)
  {
    int weight;

    cin >> weight;

    w[i] = weight;
  }

  for (int i = 0; i < N; i++)
  {
    int packageWeight = w[i];

    for (int j = 0; j < N; j++)
    {
      int truckWeight = trucks[j];

      if (truckWeight + packageWeight <= truckMaxLoad)
      {
        trucks[j] += packageWeight;
        break;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    if (trucks[i] != 0) {
      trucksNeeded++;
    } 
  }

  cout << trucksNeeded << endl;
}