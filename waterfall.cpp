#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int T;
int H, W;
int map[100][100];
int sink[100][100];
char label[10000];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int find_sink(int x, int y) {
    if (sink[x][y] != -1) return sink[x][y];

    int min_dir = -1;
    int min_h = map[x][y];

    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        if (nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
        if (map[nx][ny] < min_h) {
            min_h = map[nx][ny];
            min_dir = d;
        }
    }

    if (min_dir == -1) return sink[x][y] = x * W + y; 

    int nx = x + dx[min_dir];
    int ny = y + dy[min_dir];
    return sink[x][y] = find_sink(nx, ny); 
}

int main() {
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> H >> W;
        for (int i = 0; i < H; i++)
            for (int j = 0; j < W; j++) {
                cin >> map[i][j];
                sink[i][j] = -1;
            }

        int label_count = 0;
        int label_map[10000]; 
        for (int i = 0; i < H * W; i++) label_map[i] = -1;

        for (int i = 0; i < 26 * 26; i++) label[i] = 'a' + i;

        cout << "Case #" << t << ":\n";
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                int s = find_sink(i, j);
                if (label_map[s] == -1)
                    label_map[s] = label_count++;
                cout << (char)('a' + label_map[s]) << (j == W - 1 ? '\n' : ' ');
            }
        }
    }
    return 0;
}
