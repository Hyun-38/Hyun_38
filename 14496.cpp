#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
int a, b, N, M;
int ans = 9999;
vector<int> v[1001];
int visited[1001];

void BFS(int start, int end){
  queue<pair<int, int>> Q;
  Q.push({start, end});
  visited[start] = 1;

  while(!Q.empty()){
    int start = Q.front().first;
    int end = Q.front().second;
    Q.pop();
    if(start == M){
      ans = min(end, ans);
    }
    for (int i = 0; i < v[start].size(); i++){
      if(!visited[v[start][i]]){
        Q.push({v[start][i], end + 1});
        visited[v[start][i]] = 1;
      }
    }
  }
}

int main(){
  cin >> N >> M;
  cin >> a >> b;
  
  for (int i = 0; i < b; i++){
    int num1, num2;
    cin >> num1 >> num2;

    v[num1].push_back(num2);
    v[num2].push_back(num1);
  }

  BFS(N, 0);
  if(ans == 9999) cout << "-1" << "\n";
  else
    cout << ans << "\n";
}