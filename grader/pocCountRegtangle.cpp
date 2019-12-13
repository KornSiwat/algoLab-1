#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int board[3][3] = {{1, 1},
                     {0, 1}};

  int rowCount = 2;
  int columnCount = 2;
  int rectangleCount = 0;

  for (int width = 1; width < columnCount + 1; ++width)
  {
    for (int height = 1; height < rowCount + 1; ++height)
    {
      int area = width * height;

      for (int origin_x = 0; origin_x < columnCount; origin_x++)
      {
        for (int origin_y = 0; origin_y < rowCount; origin_y++)
        {
          int sum_point_value = 0;

          for (int i = origin_x; i < width + origin_x; ++i)
          {
            for (int j = origin_y; j < height + origin_y; ++j)
            {
              sum_point_value += board[i][j];
            }
          }

          if (area == sum_point_value)
          {
            ++rectangleCount;
          }
        }
      }
    }
  }

  cout << rectangleCount << endl;
  return 0;
}