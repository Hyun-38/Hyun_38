#include <iostream>
#include <vector>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int num;
  cin >> num;

  vector<pair<int, int>> v(num);
  vector<int> rank(num, 1);

  for (int i = 0; i < num; i++)
  {
    cin >> v[i].first >> v[i].second;
  }

  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j < num; j++)
    {
      if (i == j)
        continue;

      if ((v[i].first > v[j].first && v[i].second < v[j].second) ||
          (v[i].first < v[j].first && v[i].second > v[j].second))
      {
        continue;
      }

      if (v[i].first < v[j].first && v[i].second < v[j].second)
      {
        rank[i]++;
      }
    }
  }

  for (int r : rank)
  {
    cout << r << " ";
  }

  return 0;
}
