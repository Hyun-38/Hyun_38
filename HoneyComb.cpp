#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int ans = 1;
  int cnt = 1;

  while (n > cnt)
  {
    cnt += 6 * ans;
    ans++;
  }

  cout << ans << "\n";
  return 0;
}
