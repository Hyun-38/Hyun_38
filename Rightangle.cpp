#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int a, b, c;

  while (true)
  {
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0)
      break;

    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());

    if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
    {
      cout << "right\n";
    }
    else
    {
      cout << "wrong\n";
    }
  }
  return 0;
}
