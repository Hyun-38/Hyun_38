#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
  set<pair<int, int>> s;
  int N;
  cin >> N;
  int A, B;
  cin >> A >> B;

  vector<pair<int, int>> v;
  v.resize(N);
  for (int i = 0; i < N; i++){
    cin >> v[i].first >> v[i].second;
    s.insert({v[i].first, v[i].second});
  }

  int num1, num2;
  int ans = 0;

  for (int i = 0; i < N; i++){
    num1 = v[i].first;
    num2 = v[i].second;

    if(s.find({num1, num2 + B}) == s.end()) continue;
    if(s.find({num1 + A, num2}) == s.end()) continue;
    if(s.find({num1 + A, num2 + B}) == s.end()) continue;
    ans++;
  }
  cout << ans << "\n";
}