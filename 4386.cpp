#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, cost;
    bool operator<(const Edge& other) const {
        return cost < other.cost;
    }
};

int find(int u, vector<int>& parent) {
    if (parent[u] != u)
        parent[u] = find(parent[u], parent);
    return parent[u];
}

bool unite(int u, int v, vector<int>& parent) {
    u = find(u, parent);
    v = find(v, parent);
    if (u == v) return false;
    parent[v] = u;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int M, N; // M: 집의 수, N: 간선 수
        cin >> M >> N;
        if (M == 0 && N == 0) break;

        vector<Edge> edges(N);
        int totalCost = 0;

        for (int i = 0; i < N; ++i) {
            cin >> edges[i].u >> edges[i].v >> edges[i].cost;
            totalCost += edges[i].cost;
        }

        sort(edges.begin(), edges.end());
        vector<int> parent(M);
        for (int i = 0; i < M; ++i)
            parent[i] = i;

        int mstCost = 0;
        for (const auto& edge : edges) {
            if (unite(edge.u, edge.v, parent)) {
                mstCost += edge.cost;
            }
        }

        cout << totalCost - mstCost << '\n'; // 절약한 비용 출력
    }

    return 0;
}
