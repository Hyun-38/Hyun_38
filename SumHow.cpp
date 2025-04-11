#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> sum(n + 1);
  for (int i = 0; i < n; i++) cin >> v[i];
  sum[1] = v[0];

  for (int i = 2; i <= n; i++){
    sum[i] = sum[i-1] + v[i-1];
  }

  int num;
  cin >> num;

  while(num--){
    int num1, num2;
    cin >> num1 >> num2;
    cout << sum[num2] - sum[num1 - 1] << "\n";
  }
  return 0;
}