#include <iostream>
#include <algorithm>

using namespace std;

#define INF 1000000000

int graph[404][404];

int main()
{
	int v, e;
	cin >> v >> e;

	for (int i = 1; i <= v; i++) {
		for (int j = 1; j <= v; j++) {
			graph[i][j] = (i == j) ? 0 : INF;
		}
	}

	for (int i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a][b] = min(graph[a][b], c);
	}

	for (int k = 1; k <= v; k++) {
		for (int i = 1; i <= v; i++) {
			for (int j = 1; j <= v; j++) {
				if (graph[i][k] != INF && graph[k][j] != INF)
					graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
			}
		}
	}

	int result = INF;
	for (int i = 1; i <= v; i++) {
		for (int j = 1; j <= v; j++) {
			if (i != j && graph[i][j] != INF && graph[j][i] != INF) {
				result = min(result, graph[i][j] + graph[j][i]);
			}
		}
	}

	if (result == INF) cout << -1;
	else cout << result;

	return 0;
}
