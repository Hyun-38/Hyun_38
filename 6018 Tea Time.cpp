#include <iostream>
#include <vector>

using namespace std;

vector<int> parent;

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b)
        parent[b] = a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, Q;
    cin >> N >> M >> Q;

    parent.resize(N + 1);
    for (int i = 1; i <= N; i++)
        parent[i] = i;

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        unite(A, B);
    }

    for (int i = 0; i < Q; i++) {
        int X, Y;
        cin >> X >> Y;
        if (find(X) == find(Y))
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}
