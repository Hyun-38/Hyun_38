#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int K, N, num;
  cin >> K >> N;

  vector<int> v;

  while (K--)
  {
    cin >> num;
    v.push_back(num);
  }
}