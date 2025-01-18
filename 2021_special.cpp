#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  
  vector<int> v;

  for(int i = 2; i < 104; i++){
    if(isPrime(i)){
      v.push_back(i);
    }
  }

  int n;
  cin >> n;

  for(int i = 0; i < v.size() -1; i++){
    int ans = v[i]*v[i+1];
    if(ans > n){
      cout<<ans<<endl;
      break;
    }
  }
  return 0;
}
