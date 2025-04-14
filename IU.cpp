#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> v(N, vector<int>(N, INF));

    for (int i = 0; i < N; ++i) {
        v[i][i] = 0;
    } // 자기 자신으로 가는 건 0으로 초기화

    for (int i = 0; i < K; ++i) {
        int a, b;
        cin >> a >> b;
        v[a-1][b-1] = 1;
        v[b-1][a-1] = 1;
    } // 값 대입

    // 플로이드 워셜 알고리즘
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (v[i][j] > v[i][k] + v[k][j]) {
                    v[i][j] = v[i][k] + v[k][j];
                }
            }
        }
    }

    int maxDist = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (v[i][j] == INF) {
                cout << "Big World!" << endl;
                return 0;
            }
            maxDist = max(maxDist, v[i][j]);
        }
    }

    if (maxDist <= 6) cout << "Small World!" << endl;
    else cout << "Big World!" << endl;

    return 0;
}
