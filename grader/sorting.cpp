#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int N, K;

  cin >> N >> K;

  int printCount = (N/K);
  int index = K - 1;
  int numbers[N];

  for (int i = 0; i < N; ++i) {
    cin >> numbers[i];
  }

  sort(numbers, numbers + N);

  for (int i = 0; i < printCount; ++i) {
    cout << numbers[index] << endl;

    index += K;
  }
  return 0;
}