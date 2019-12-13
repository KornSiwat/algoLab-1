#include <iostream>

using namespace std;

int charToInt(char inputChar)
{
  return (int)inputChar - (int)48;
}

int main()
{
  int rowCount, columnCount;

  for (;;)
  {
    cin >> rowCount;
    cin >> columnCount;

    if (rowCount == 0)
    {
      break;
    }


    int board[rowCount][columnCount];

    for (int i = 0; i < rowCount; ++i)
    {
      char rowDetail[columnCount];

      cin >> rowDetail;
      for (int j = 0; j < columnCount; j++)
      {
        board[i][j] = charToInt(rowDetail[j]);
      }
    }

    int rectangleCount = 0;

    for (int i_length = 1; i_length < rowCount + 1; ++i_length)
    {
      for (int j_length = 1; j_length < columnCount + 1; ++j_length)
      {
        int area = i_length * j_length;

        for (int origin_i = 0; origin_i < rowCount; ++origin_i)
        {
          for (int origin_j = 0; origin_j < columnCount; ++origin_j)
          {
            int sum_point_value = 0;

            for (int i = origin_i; i < origin_i + i_length; ++i)
            {
              if (i == rowCount)
              {
                break;
              }

              for (int j = origin_j; j < origin_j + j_length; ++j)
              {
                if (j == columnCount)
                {
                  break;
                }

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
  }
}