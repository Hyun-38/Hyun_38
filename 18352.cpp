#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, M, K, X;
    cin >> N >> M >> K >> X;
    
    vector<vector<int>> graph(N+1);
    vector<bool> visited(N+1, false);
    vector<int> ans;
    queue<pair<int, int>> q;
    
    while (M--) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }
    
    q.push({X, 0});
    visited[X] = true; // 시작 노드 방문 처리
    
    while (!q.empty()) {
        int curr = q.front().first;
        int depth = q.front().second;
        q.pop();
        
        if (depth == K) {
            ans.push_back(curr);
            continue; // K 거리 도시는 더 이상 탐색하지 않음
        }
        
        for (int next : graph[curr]) {
            if (!visited[next]) {
                visited[next] = true; // 방문 처리 (중복 방지)
                q.push({next, depth + 1});
            }
        }
    }
    
    if (ans.empty()) {
        cout << -1;
    } else {
        sort(ans.begin(), ans.end());
        for (int city : ans) {
            cout << city << "\n";
        }
    }
    
    return 0;
}
