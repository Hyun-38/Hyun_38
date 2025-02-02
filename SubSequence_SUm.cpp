#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, sum;
vector<int> arr;

int cnt = 0;
void solve(int a, int b)
{

  if (a == N)
    return;
  if (b + arr[a] == sum)
    cnt++;

  solve(a + 1, b);
  solve(a + 1, b + arr[a]);
}

int main()
{

  cin >> N >> sum;

  for (int i = 0; i < N; i++)
  {
    int tmp;
    cin >> tmp;
    arr.push_back(tmp);
  }

  solve(0, 0);
  cout << cnt;

  return 0;
}