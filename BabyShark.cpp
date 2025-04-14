#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
const int dy[] = {0, 0, -1, 1, -1, 1, 1, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;

    vector<vector<int>> v1(a, vector<int>(b));       // 입력 배열
    vector<vector<int>> v2(a, vector<int>(b, -1));   // 거리 저장 배열 , 처음 값을 모두 -1로 초기화
    queue<pair<int, int>> q;

    // 입력 & 상어 위치 큐에 추가
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> v1[i][j];
            if (v1[i][j] == 1) {
                q.push({i, j});
                v2[i][j] = 0; // 시작점이므로 거리 0
            }
        }
    }

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int dir = 0; dir < 8; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx >= 0 && ny >= 0 && nx < a && ny < b && v2[nx][ny] == -1) {
                v2[nx][ny] = v2[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            ans = max(ans, v2[i][j]);
        }
    }

    cout << ans << '\n';
    return 0;
}
