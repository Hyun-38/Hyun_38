#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> v(N);
  for (int &num : v) cin >> num;

  int first = 0;

  while(Q--){
    int type, i, x;
    cin >> type;

    if(type == 1){
      cin >> i >> x;
      i = (i - 1 - first + N) % N;
      v[i] += x;
    }
    else if(type == 2){
      cin >> x;
      first = (first - x + N) % N;
    }
    else if(type == 3){
      cin >> x;
      first = (first + x) % N;
    }
  }

  for(int i = 0; i < N; i++){
    cout << v[(i + first) % N] << " ";
  }

  
}
