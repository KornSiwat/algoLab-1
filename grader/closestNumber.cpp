#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  int min = 1000000;
  
  cin >> N;

  int numbers[N];

  for (int i = 0; i < N; ++i) {
    cin >> numbers[i];
  }

  sort(numbers, numbers + N);

  for (int i = 0; i < N - 1; ++i) {
      int difference = abs(numbers[i] - numbers[i+1]);
    
      if (difference < min) {
        min = difference;
      }
    }

  cout << min << endl;

  return 0;
}