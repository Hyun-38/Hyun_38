#include <iostream>
#include <vector>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, M;
  cin >> N >> M;

  vector<int> v(N);
  for (int i = 0; i < N; i++){
    cin >> v[i];  
  }

  for (int i = 0; i < M; i++){
    int num1, num2, sum = 0;
    cin >> num1 >> num2;
    for (int j = num1 - 1; j <= num2 - 1; j++){
      sum += v[j];
    }
    cout << sum << "\n";
  }

  return 0;
}
