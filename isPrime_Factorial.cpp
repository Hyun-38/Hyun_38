#include <iostream>

using namespace std;

int prime(long long _n, long long _a)
{

  int cnt = 0;
  for (long long i = _a; i <= _n; i *= _a)
  {
    cnt += _n / i;
  }

  return cnt;
}

int main()
{
  long long n, a;
  cin >> n >> a;

  cout << prime(n, a);

  return 0;
}