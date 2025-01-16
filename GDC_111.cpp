#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long GCD(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

int main(){
  long long num1,num2;
  cin>>num1>>num2;

  long long num3 = GCD(num1,num2);
  for(int i = 0; i < num3; i++){
    cout<<1;
  }

}