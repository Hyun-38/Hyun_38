#include <iostream>

using namespace std;

int main(){

  int num;
  cin >> num;
  long long ans = 3;
  while(num >= 1){
    if(num == 1)
      break;
    ans = ans * 2 - 1;
    num--;
  }
  cout << ans * ans << "\n";
}