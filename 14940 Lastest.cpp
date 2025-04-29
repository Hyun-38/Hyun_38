#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int a, b;
vector<vector<int>> mydata;
vector<vector<int>> BFSlist;
vector<vector<bool>> visited;

int dx[4] = {-1, 1, 0, 0};  // 상하좌우
int dy[4] = {0, 0, -1, 1};

void BFS(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    BFSlist[x][y] = 0;
    visited[x][y] = true;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];

            if (nx >= 0 && nx < a && ny >= 0 && ny < b) {
                if (mydata[nx][ny] == 1 && !visited[nx][ny]) {
                    BFSlist[nx][ny] = BFSlist[cx][cy] + 1;
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    cin >> a >> b;
    mydata.assign(a, vector<int>(b));
    BFSlist.assign(a, vector<int>(b, -1));
    visited.assign(a, vector<bool>(b, false));

    int startX = 0, startY = 0;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> mydata[i][j];
            if (mydata[i][j] == 2) {
                startX = i;
                startY = j;
            }
        }
    }

    BFS(startX, startY);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (mydata[i][j] == 0)
                cout << 0 << " ";
            else
                cout << BFSlist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
