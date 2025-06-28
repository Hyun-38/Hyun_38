#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int MAX = 100005;
vector<int> A[MAX];
bool visited[MAX];
int x[MAX], y[MAX];

int min_perimeter = INT_MAX;

int min_x, min_y, max_x, max_y;

void dfs(int u) {
    visited[u] = true;
    min_x = min(min_x, x[u]);
    min_y = min(min_y, y[u]);
    max_x = max(max_x, x[u]);
    max_y = max(max_y, y[u]);

    for (int v : A[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            min_x = min_y = INT_MAX;
            max_x = max_y = INT_MIN;
            dfs(i);
            int perimeter = 2 * ((max_x - min_x) + (max_y - min_y));
            min_perimeter = min(min_perimeter, perimeter);
        }
    }

    cout << min_perimeter << '\n';

    return 0;
}
