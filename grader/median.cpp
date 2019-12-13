#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int median(int storage[], int size) {
  int mid_index = size/2;

  if (size%2 == 1) {
    return storage[mid_index];
  } else {
    return (storage[mid_index-1] + storage[mid_index])/2;
  }
}

int main()
{
  int storage[10000];
  int size = 0;
  int x;

  while (cin >> x) {
    storage[size] = x;
    ++size;
    sort(storage, storage+size);

    cout << median(storage, size) << endl;
  }

  return 0;
}