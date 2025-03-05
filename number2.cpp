#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M, num;
  cin >> N;

  vector<int> v;
  while (N--)
  {
    cin >> num;
    v.push_back(num);
  }

  sort(v.begin(), v.end());

  cin >> M;
  while (M--)
  {
    cin >> num;

    int lower = lower_bound(v.begin(), v.end(), num) - v.begin();
    int upper = upper_bound(v.begin(), v.end(), num) - v.begin
    ();

    cout << (upper - lower) << " ";
  }
}
