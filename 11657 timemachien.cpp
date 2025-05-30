#include <iostream>
#include <vector>
#include <tuple>
#define INF 9876543210
using namespace std;

int n, m;
vector<long long> dist;
vector<tuple<int, int, int>> edges;

bool bellman_ford(int start) {
    dist[start] = 0;

    for (int i = 1; i < n; i++) {
        for (auto [u, v, cost] : edges) {
            if (dist[u] != INF && dist[v] > dist[u] + cost) {
                dist[v] = dist[u] + cost;
            }
        }
    }

    for (auto [u, v, cost] : edges) {
        if (dist[u] != INF && dist[v] > dist[u] + cost) {
            return true; 
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    dist.assign(n + 1, INF);

    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        edges.push_back({a, b, c});
    }

    if (bellman_ford(1)) {
        cout << -1 << endl;
    } else {
        for (int i = 2; i <= n; i++) {
            if (dist[i] == INF) cout << -1 << '\n';
            else cout << dist[i] << '\n';
        }
    }

    return 0;
}
