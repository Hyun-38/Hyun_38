#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;
  if(N == 1)
    return !(cout << 1 << " " << 0);

  int choco = 1;
  while (choco < N)
  {
    choco *= 2;
  }
  if(N == choco)
    return !(cout << choco << " " << 0);

    int cnt = 0;
    int div = choco;
    while (N > 0) {
      div /= 2;
      if(N - div < 0 && div > 0){
        cnt++;
        continue;
      }
      else{
        cnt++;
        N -= div;
      }

    }

    cout << choco << " " << cnt << '\n';

    return 0;
}
