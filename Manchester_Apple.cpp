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
  int num1,num2;
  cin>>num1>>num2;

  int how = GCD(num1, num2);

  for(int i = 1; i <= how; i++){
    if(how % i == 0){
      cout<<i<<" "<<num1/i<<" "<<num2/i<<endl;
    }
    else continue;
  }
}