#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

map<int, int> m1;
map<int, int> m2;

vector<pair<int, int>> v;

bool sortalg(pair<int, int> a, pair<int, int> b){
  if(a.second == b.second){
    return m2[a.first] < m2[b.first];
  }
  return a.second > b.second;
}

int main(){
  ios::sync_with_stdio(false);
	cin.tie(NULL);

  int N, C, num;
  cin >> N >> C;

  for (int i = 1; i <= N; i++){
    cin >> num;
    if(m1[num] == 0){
      m2[num] = i;
    }
    m1[num]++;
  }

  for(auto i: m1){
    v.push_back({i.first, i.second});
  }

  sort(v.begin(), v.end(), sortalg);

  for (int i = 0; i < v.size(); i++){
    for (int j = 0; j < v[i].second; j++){
      cout << v[i].first << " ";
    }
  }
}