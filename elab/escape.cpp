#include <iostream>
using namespace std;

char *write_chars(char *dest, const char *st)
{
  while (*st != '\0')
  {
    *dest = *st;
    st++;
    dest++;
  }

  return dest;
}

void escape(char *src, char *dest)
{
  for (int i = 0; i < 1000; i++)
  {
    switch (src[i])
    {
    case '<':
      dest = write_chars(dest, "&lt;");
      break;
    case '>':
      dest = write_chars(dest, "&gt;");
      break;
    case '\"':
      dest = write_chars(dest, "&quot;");
      break;
    default: {
      *dest = src[i];
      dest++;
    }
    }
  }

  int main()
  {
    char st[1000];
    char out[1000];
    int l;

    cin.getline(st, 1000);
    escape(st, out);

    cout << out << endl;

    return 0;
  }
