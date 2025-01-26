#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
  string s;
  getline(cin, s);

  stack<int> s1;

  for (int i = 0; i < s.length(); i++)
  {
    char c = s[i];

    if (c >= '0' && c <= '9')
    {
      s1.push(c - '0');
    }
    else
    {
      int a, b;

      a = s1.top();
      s1.pop();
      b = s1.top();
      s1.pop();

      if (c == '+')
      {
        s1.push(b + a);
      }
      else if (c == '-')
      {
        s1.push(b - a);
      }
      else if (c == '*')
      {
        s1.push(b * a);
      }
      else if (c == '/')
      {
        s1.push(b / a);
      }
    }
  }
  cout << s1.top();
}