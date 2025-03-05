#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int num, N;
  cin >> num;

  if (num == 0)
  {
    cout << 0;
    return 0;
  }

  vector<int> v;
  for (int i = 0; i < num; i++)
  {
    cin >> N;
    v.push_back(N);
  }

  sort(v.begin(), v.end());

  int avg = round(num * 0.15);
  if (num - avg * 2 <= 0)
  {
    cout << 0;
    return 0;
  }

  int sum = accumulate(v.begin() + avg, v.end() - avg, 0);
  cout << round((double)sum / (num - avg * 2));

  return 0;
}
