#include <iostream>
#include <vector>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int N, M;
  cin >> N >> M;

  vector<int> v(N + 1);      
  vector<int> Sum(N + 1, 0);

  for (int i = 1; i <= N; i++) {
    cin >> v[i];
    Sum[i] = Sum[i - 1] + v[i];
  }

  int num1, num2;
  for (int i = 0; i < M; i++) {
    cin >> num1 >> num2;
    cout << Sum[num2] - Sum[num1 - 1] << "\n";
  }

  return 0;
}
