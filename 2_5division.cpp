#include <iostream>

using namespace std;

int main()
{
  int a;

  while (cin >> a)
  {
    if (a == 0)
      break;

    int num = 1;
    long long onenum = 1;

    while (onenum % a != 0)
    {
      onenum = onenum * 10 + 1;
      onenum %= a;
      num++;
    }
    cout << num << "\n";
  }

  return 0;
}
