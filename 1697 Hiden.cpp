#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAX = 100001;
int visited[MAX];

void BFS(int start, int target) {
    queue<int> Q;
    Q.push(start);
    visited[start] = 1;

    while (!Q.empty()) {
        int now = Q.front();
        Q.pop();

        if (now == target) {
            cout << visited[now] - 1 << '\n';
            return;
        }

        int next[3] = {now - 1, now + 1, now * 2};
        for (int i = 0; i < 3; i++) {
            int nx = next[i];
            if (nx >= 0 && nx < MAX && visited[nx] == false) {
                visited[nx] = visited[now] + 1;
                Q.push(nx);
            }
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    BFS(N, K);
    return 0;
}
