#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int dayCount, panicThreshold, todayPrice, yesterdayPrice;
  int cost = 0;
  int profit = 0;

  bool isPriceIncreasing;
  bool hasStock = false;

  cin >> dayCount >> panicThreshold;
  cin >> yesterdayPrice;

  for (int i = 1; i < dayCount; ++i)
  {
    cin >> todayPrice;

    int difference = abs(todayPrice - yesterdayPrice);

    bool isExceedPanicThreshold = difference >= panicThreshold;

    if (isExceedPanicThreshold) {
      bool isPriceIncreasing = (todayPrice - yesterdayPrice) >= 0;

      if (hasStock && !isPriceIncreasing) {
        profit += todayPrice - cost;
        hasStock = false;

        // cout << "sell at: " << todayPrice << endl;
      } else if (!hasStock && isPriceIncreasing) {
        cost = todayPrice;
        hasStock = true;

        // cout << "buy at: " << todayPrice << endl;
      }
    }

    yesterdayPrice = todayPrice;
  }

  cout << profit << endl;

  return 0;
}