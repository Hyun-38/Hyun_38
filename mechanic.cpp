#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, L;
  cin >> N >> L;

  vector<int> leaks(N);
  for (int i = 0; i < N; i++)
  {
    cin >> leaks[i];
  }

  sort(leaks.begin(), leaks.end());

  int count = 0;
  int covered = 0;

  for (int i = 0; i < N; i++)
  {
    if (leaks[i] > covered)
    {
      count++;
      covered = leaks[i] + L - 1;
    }
  }

  cout << count << endl;
  return 0;
}