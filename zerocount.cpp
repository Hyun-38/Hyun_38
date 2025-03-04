#include <iostream>

using namespace std;

int main()
{
  int num;
  int cnt = 0;
  cin >> num;

  while (num >= 5)
  {
    num /= 5;
    cnt += num;
  }

  cout << cnt;
  return 0;
}
