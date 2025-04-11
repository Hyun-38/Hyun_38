#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a, b;
  cin >> a >> b;

  vector<int> v(a);
  vector<int> sum(a + 1);
  for (int i = 0; i < a; i++) cin >> v[i];
  sort(v.begin(), v.end());

  sum[1] = v[0];

  for (int i = 2; i <= a; i++){
    sum[i] = sum[i-1] + v[i-1];
  }

  while(b--){
    int num1, num2;
    cin >> num1 >> num2;
    cout << sum[num2] - sum[num1 - 1] << "\n";
  }
  return 0;
}
