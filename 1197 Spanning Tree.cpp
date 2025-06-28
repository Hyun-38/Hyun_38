#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

typedef pair<int, int> pii;

int prim(int start, vector<vector<pii>>& graph, int V) {
    vector<bool> visited(V + 1, false);
    priority_queue<pii, vector<pii>, greater<pii>> minHeap;

    minHeap.push({0, start});
    int totalWeight = 0;

    while (!minHeap.empty()) {
        int weight = minHeap.top().first;   
        int u = minHeap.top().second;      
        minHeap.pop();

        if (visited[u]) continue; 

        visited[u] = true;        
        totalWeight += weight;   

        for (auto& [v, w] : graph[u]) {
            if (!visited[v]) {
                minHeap.push({w, v});
            }
        }
    }

    return totalWeight;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);           

    int V, E; 
    cin >> V >> E;

    vector<vector<pii>> graph(V + 1);

    for (int i = 0; i < E; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        graph[A].emplace_back(B, C);
        graph[B].emplace_back(A, C); 
    }

    cout << prim(1, graph, V) << "\n"; 

    return 0;
}
