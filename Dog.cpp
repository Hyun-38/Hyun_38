#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int x = 0, y = 0;

  for (int i = 0; i < k && i < 1000; i++)
  {
    for (char c : s)
    {
      if (c == 'U')
        y -= 1;
      else if (c == 'D')
        y += 1;
      else if (c == 'L')
        x -= 1;
      else if (c == 'R')
        x += 1;
      if (x == 0 && y == 0)
      {
        cout << "YES\n";
        return 0;
      }
    }
  }

  cout << "NO\n";
  return 0;
}