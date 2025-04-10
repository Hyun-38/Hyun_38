#include <iostream>
#include <vector>

using namespace std;

int main(){
  int M, N;
  cin >> M >> N;

  vector<vector<int>> v(N, vector<int>(M));

  for (int i = 0; i < N; i++){  
    for (int j = 0; j < M; j++){  
      cin >> v[i][j];  
    }
  }

  for (int i = 0; i < N*M; i++){  

  }

  return 0;
}

// 그래프 탐색 - BFS
