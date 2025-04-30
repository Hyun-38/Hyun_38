#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int arr[128][128];
int white = 0, blue = 0;

bool checkColor(int x, int y, int size) {
    int color = arr[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (arr[i][j] != color)
                return false;
        }
    }
    return true;
}

void BFS(int N) {
    queue<tuple<int, int, int>> q;
    q.push({0, 0, N});

    while (!q.empty()) {
        auto [x, y, size] = q.front(); q.pop();

        if (checkColor(x, y, size)) {
            if (arr[x][y] == 0) white++;
            else blue++;
        } else {
            int half = size / 2;
            q.push({x, y, half});
            q.push({x, y + half, half});
            q.push({x + half, y, half});
            q.push({x + half, y + half, half});
        }
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    BFS(N);
    cout << white << '\n' << blue << '\n';
    return 0;
}
