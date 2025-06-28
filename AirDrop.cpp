#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N, K, T;
    cin >> N >> K >> T;

    int K_squared = K * K;

    vector<int> x(N + 1);
    vector<int> y(N + 1);
    vector<int> version(N + 1);
    vector<int> photo(N + 1);

    cin >> x[0] >> y[0] >> version[0];
    photo[0] = 0;

    for (int i = 1; i <= N; ++i) {
        cin >> x[i] >> y[i] >> version[i] >> photo[i];
    }

    vector<vector<int>> A(N + 1);

    for (int i = 0; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int dist_squared = dx * dx + dy * dy;
            int version_diff = abs(version[i] - version[j]);

            if (dist_squared <= K_squared && version_diff <= T) {
                A[i].push_back(j);
                A[j].push_back(i);
            }
        }
    }

    vector<bool> visited(N + 1, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;

    vector<int> result;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        if (photo[curr] == 1) {
            result.push_back(curr);
        }

        for (int neighbor : A[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    if (result.empty()) {
        cout << 0 << '\n';
    } else {
        sort(result.begin(), result.end());
        for (int i : result) {
            cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}
