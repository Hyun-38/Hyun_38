#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  long long sum = 0;
  
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i]; 
  }

  long long res = 0;
  for (int i = 0; i < n; i++) {
    sum -= v[i];        
    res += v[i] * sum; 
  }

  cout << res;
}
