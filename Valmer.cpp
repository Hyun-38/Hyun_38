#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, L, ans = 0;
  long long sum = 0;
  cin >> N >> L;

  vector<int> v(N, 0);

  for (int i = 0; i < N; i++) {
    cin >> v[i];
    sum += v[i];
    if (i >= L) {
      sum -= v[i - L];
    }
    if (sum >= 129 && sum <= 138)
      ans++;
  }
  cout << ans << '\n';
  return 0;
}