#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M, num;
  cin >> N;

  vector<int> arr1(N);
  for (int i = 0; i < N; i++)
  {
    cin >> arr1[i];
  }

  sort(arr1.begin(), arr1.end());

  cin >> M;
  while (M--)
  {
    cin >> num;
    cout << (binary_search(arr1.begin(), arr1.end(), num) ? "1\n" : "0\n");
  }

  return 0;
}
