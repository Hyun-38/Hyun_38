#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n + 1); 
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    vector<int> dist(n + 1, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (dist[now] < cost) continue;

        for (auto &edge : graph[now]) {
            int next = edge.first;
            int weight = edge.second;
            if (dist[next] > dist[now] + weight) {
                dist[next] = dist[now] + weight;
                pq.push({dist[next], next});
            }
        }
    }

    cout << dist[n] << '\n';
    return 0;
}
