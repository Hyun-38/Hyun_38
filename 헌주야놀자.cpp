#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

int main()
{
  int N, num;
  cin >> N;
  vector<int> v;
  double avg, mid, mst, rag;
  for (int i = 0; i < N; i++)
  {
    cin >> num;
    v.push_back(num);
  }
  avg = round(accumulate(v.begin(), v.end(), 0) / v.size());
  mid = v[v.size() / 2];
}