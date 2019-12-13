#include <iostream>
#include <vector>
#include <algorithm>

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

class Data {
  public:
    string dataString;
    int dataLength;

    Data(string data) {
      this->dataString = data;
      this->dataLength = data.size();
    }

    int countInversion() { 
      int numbers[this->dataLength];

      for (int i = 0; i < this->dataLength; ++i) {
        numbers[i] = (int) this->dataString[i];
      }

      return countFlip(numbers, this->dataLength);
    }  
};

class Dataset {
  public:
    vector<Data*> data;

    void addData(string dataString) {
      this->data.push_back(new Data(dataString));
    }

    static bool isLessInversion(Data* x, Data* y) {
      return x->countInversion() < y->countInversion();
    }

    void sort() {
      stable_sort(data.begin(), data.end(), isLessInversion);
    }

    void printData() {
      for (int i = 0; i < this->data.size(); ++i) {
        cout << this->data[i]->dataString << endl;
      }
    }
};

int main()
{
  int datasetCount;

  cin >> datasetCount;

  for (int i = 0; i < datasetCount; ++i) {

    Dataset* datasets = new Dataset();
    // cout << endl;

    int lineCount, dataLength;

    cin >> dataLength >> lineCount;

    for (int j = 0; j < lineCount; ++j) {
      string input;

      cin >> input;

      datasets->addData(input);
    }

    datasets->sort();

    datasets->printData();
    if (i != datasetCount - 1) {
      cout << endl;
    }
  }

  return 0;
}