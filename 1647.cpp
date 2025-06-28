#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, weight;
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

int findParent(int u, vector<int>& parent) {
    if (parent[u] != u)
        parent[u] = findParent(parent[u], parent);
    return parent[u];
}

bool unionSets(int u, int v, vector<int>& parent) {
    u = findParent(u, parent);
    v = findParent(v, parent);
    if (u == v) return false;
    parent[v] = u;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int V, E;
    cin >> V >> E;

    vector<Edge> edges(E);
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    sort(edges.begin(), edges.end()); 

    vector<int> parent(V + 1);
    for (int i = 1; i <= V; i++)
        parent[i] = i;

    int totalWeight = 0;
    int maxEdge = 0;  

    for (const auto& edge : edges) {
        if (unionSets(edge.u, edge.v, parent)) {
            totalWeight += edge.weight;
            maxEdge = edge.weight;  
        }
    }

    cout << totalWeight - maxEdge << '\n';

    return 0;
}
