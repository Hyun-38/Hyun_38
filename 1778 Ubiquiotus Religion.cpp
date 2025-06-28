#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAX = 50001;

int parent[MAX];
int rank_[MAX];
bool visited[MAX];

void init(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rank_[i] = 0;
    }
}

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int x, int y) {
    int rx = find(x);
    int ry = find(y);
    if (rx == ry) return;

    if (rank_[rx] < rank_[ry]) {
        parent[rx] = ry;
    } else if (rank_[rx] > rank_[ry]) {
        parent[ry] = rx;
    } else {
        parent[ry] = rx;
        rank_[rx]++;
    }
}

int main() {
    int n, m;
    int caseNum = 1;

    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;

        init(n);

        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            unite(a, b);
        }

        memset(visited, false, sizeof(visited));
        int count = 0;
        for (int i = 1; i <= n; i++) {
            int root = find(i);
            if (!visited[root]) {
                visited[root] = true;
                count++;
            }
        }

        cout << "Case " << caseNum++ << ": " << count << endl;
    }

    return 0;
}
