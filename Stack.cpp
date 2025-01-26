#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> s;
  int N;
  string cmd;
  int num;
  int res = 0;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> cmd;

    if (cmd == "push")
    {
      cin >> num;
      s.push(num);
    }

    else if (cmd == "pop")
    {
      if (s.size() == 0)
      {
        res = -1;
        cout << res << endl;
      }
      else
      {
        res = s.top();
        cout << res << endl;
        s.pop();
      }
    }

    else if (cmd == "size")
    {
      cout << s.size() << endl;
    }

    else if (cmd == "empty")
    {
      if (s.size() == 0)
      {
        res = 1;
        cout << res << endl;
      }
      else
      {
        res = 0;
        cout << res << endl;
      }
    }

    else if (cmd == "top")
    {
      if (s.size() == 0)
      {
        res = -1;
        cout << res << endl;
      }
      else
      {
        res = s.top();
        cout << res << endl;
      }
    }
  }

  return 0;
}