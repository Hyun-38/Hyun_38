#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n == 1) 
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}
void bertrang(int n){
  int cnt = 0;
  int num2 = n * 2;
  for (int i = n+1; i <= num2; i++){
    if(isPrime(i)) cnt++;
  }
  cout << cnt << "\n";
}

int main(){
  int num;
  while(true){
    cin >> num;
    if(num == 0) break;
    bertrang(num);
  }
}
