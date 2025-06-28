#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;
  int num;
  vector<int> v;
  for(int i = 0; i < n; i++){
    cin >> num;
    v.push_back(num);
  }
  sort(v.begin(), v.end());
  for (int i = n-3; i >= 0; i--){
    if(v[i+2] < v[i+1] + v[i]) {
      cout << v[i + 2] + v[i + 1] + v[i];
      break;
    }
    else if(i == 0){
      cout << -1 << "\n";
    }
  }
}