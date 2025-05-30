#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  long long Graph[101][101];


  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
        Graph[i][j] = 2e9;
    }
  }

  for (int i = 0;i < M;i++) {
		int a, b;
		cin >> a >> b;
		Graph[a][b] = 1;
		Graph[b][a] = 1;
	}

  for (int mid = 1; mid < N + 1;mid++) {
		for (int start = 1; start < N + 1; start++) {
			for (int end = 1; end < N + 1; end++) {
				if (start == end) continue;
				Graph[start][end] = min(Graph[start][end], Graph[start][mid] + Graph[mid][end]);
			}
		}
	}
	vector<pair<int, int>> v;

  for (int i = 1; i < N+1; i++) {
		int Vsum = 0;
		for (int j = 1; j < N + 1;j++) {
			if (i == j) continue;
			Vsum += Graph[i][j];
		}
		v.push_back({ Vsum,i });
	}

	sort(v.begin(), v.end());

	cout << v[0].second;

	return 0;

}