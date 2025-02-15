#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> package(M);
  vector<int> several(M);

  for (int i = 0; i < M; i++)
  {
    cin >> package[i] >> several[i];
  }

  int min_package = *min_element(package.begin(), package.end());
  int min_several = *min_element(several.begin(), several.end());

  int cost1 = (N / 6) * min_package + (N % 6) * min_several;
  int cost2 = ((N + 5) / 6) * min_package;
  int cost3 = N * min_several;

  cout << min({cost1, cost2, cost3}) << "\n";

  return 0;
}
