#include <iostream>
#include <algorithm>

using namespace std;

long long GCD(long long a, long long b){
  if(a == 0)
    return b;
  return GCD(b % a, a);
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long long int n, ans;
  cin >> n;
  ans = n;

  for (long long int i = 2; i * i <= n; i++){
    if (n % i != 0)
      continue;
    ans -= ans / i;// 오일러 피 함수의 정의의
    while (n % i == 0)
      n /= i; // 나눌 수 있는 만큼 나눠서 , n에 대한 해당 소인수 제거 
  }

  if(n > 1)
    ans -= ans / n;
  cout << ans << "\n";
  return 0;
}