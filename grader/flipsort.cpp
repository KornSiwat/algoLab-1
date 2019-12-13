#include <iostream>

using namespace std;

void filp(int* x, int* y) {
  int temp = *x;

  *x = *y;
  *y = temp;
}

int countFlip(int numbers[], int size) {
  int flipCount = 0;

  for (int i = 0; i < size - 1; ++i) {
    bool changed = false;

    for (int j = 0; j < size - 1; ++j) {
      if (numbers[j] > numbers[j+1]) {
        filp(numbers + j , numbers + j + 1);
        ++flipCount;
      }
    }

    if (changed) {
      break;
    }
  }

  return flipCount;
} 

int main()
{
  int N;

  while (cin >> N)
  {
    int numbers[N];

    for (int i = 0; i < N; ++i) {
      cin >> numbers[i];
    }

    cout << "Minimum exchange operations : " << countFlip(numbers, N) << endl;
  }

  return 0;
}