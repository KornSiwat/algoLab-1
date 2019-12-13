#include <iostream>
#include <regex>

using namespace std;

int main()
{
  string inputText;
  regex doubleQuote("\"");
  string firstReplacement = "``";
  string secondReplacement = "''";
  bool switchReplacemant = true;

  while (getline(cin, inputText))
  {
    while (regex_search(inputText, doubleQuote))
    {
      if (switchReplacemant)
      {
        inputText = regex_replace(inputText, doubleQuote, firstReplacement, regex_constants::format_first_only);
      }
      else
      {
        inputText = regex_replace(inputText, doubleQuote, secondReplacement, regex_constants::format_first_only);
      }

      switchReplacemant = !switchReplacemant;
    }

    cout << inputText << endl;
  }
  return 0;
}