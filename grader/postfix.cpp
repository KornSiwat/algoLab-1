#include <iostream>
#include <sstream>
#include <string>
#include <stack>

using namespace std;

float stringToFloat(string s)
{
  stringstream converter(s);
  float convertedValue;
  converter >> convertedValue;

  return convertedValue;
}

string floatToString(float f)
{
  stringstream converter;
  converter << f;
  string convertedValue = converter.str();

  return convertedValue;
}

float floatToFourDecimalPlace(float f)
{
  int fifthPlace = ((int)(f * 100000)) % 10;
  int temp = f * 10000;

  if (fifthPlace >= 5)
  {
    temp += 1;
  }

  float result = ((float)temp) / 10000;

  return result;
}

int findIndexOfCharInString(string s, char c)
{
  bool found = false;
  int index;

  for (int i = 0; i < s.length(); i++)
  {
    index = i;

    if (s[i] == c)
    {
      found = true;

      break;
    }
  }

  if (found)
  {
    return index;
  }
  else
  {
    return -1;
  }
}

string fourDecimalPlace(string s)
{
  int index = findIndexOfCharInString(s, '.');

  if (index == -1)
  {
    return s + ".0000";
  }

  string firstPart = s.substr(0, index);
  string secondPart = s.substr(index, s.length());

  while (secondPart.length() < 5)
  {
    secondPart += "0";
  }

  return firstPart + secondPart;
}

bool isOperator(string s)
{
  return s == "+" || s == "-" || s == "*" || s == "/" || s == "=";
}

int main()
{
  string input;
  stack<string> computingStack;

  while (cin >> input)
  {
    computingStack.push(input);

    if (computingStack.top() == "=")
    {
      computingStack.pop();
      break;
    }
    else if (computingStack.size() < 3)
    {
      continue;
    }
    else if (computingStack.top() == "+")
    {
      computingStack.pop();
      string op = "+";

      string first = computingStack.top();
      computingStack.pop();

      string second = computingStack.top();
      computingStack.pop();

      if (!isOperator(first) && !isOperator(second))
      {
        computingStack.push(floatToString(stringToFloat(second) + stringToFloat(first)));
      }
      else
      {
        computingStack.push(second);
        computingStack.push(first);
        computingStack.push(op);
      }
    }
    else if (computingStack.top() == "-")
    {
      computingStack.pop();
      string op = "-";

      string first = computingStack.top();
      computingStack.pop();

      string second = computingStack.top();
      computingStack.pop();

      if (!isOperator(first) && !isOperator(second))
      {
        computingStack.push(floatToString(stringToFloat(second) - stringToFloat(first)));
      }
      else
      {
        computingStack.push(second);
        computingStack.push(first);
        computingStack.push(op);
      }
    }
    else if (computingStack.top() == "*")
    {
      computingStack.pop();
      string op = "*";

      string first = computingStack.top();
      computingStack.pop();

      string second = computingStack.top();
      computingStack.pop();

      if (!isOperator(first) && !isOperator(second))
      {
        computingStack.push(floatToString(stringToFloat(second) * stringToFloat(first)));
      }
      else
      {
        computingStack.push(second);
        computingStack.push(first);
        computingStack.push(op);
      }
    }
    else if (computingStack.top() == "/")
    {
      computingStack.pop();
      string op = "/";

      string first = computingStack.top();
      computingStack.pop();

      string second = computingStack.top();
      computingStack.pop();

      if (!isOperator(first) && !isOperator(second))
      {
        computingStack.push(floatToString(stringToFloat(second) / stringToFloat(first)));
      }
      else
      {
        computingStack.push(second);
        computingStack.push(first);
        computingStack.push(op);
      }
    }
  }

  string result = floatToString(floatToFourDecimalPlace(stringToFloat(computingStack.top())));

  cout << fourDecimalPlace(result) << endl;

  return 0;
}