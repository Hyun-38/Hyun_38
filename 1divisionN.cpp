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
long long LCM(long long a, long long b) // 최소공배수
{
	return a * b / GCD(a, b);
}

int main(){
  int num1,num2;
  vector<int>v1;
  for(int i = 0; i < 2; i++){
    cin>>num1>>num2;
    v1.push_back(num1);
    v1.push_back(num2);
  }
  int Down = LCM(v1[1], v1[3]);
  int Up = v1[0] * (Down/v1[1]) + v1[2] * (Down/v1[3]);
  
  int Final = GCD(Down, Up);
  Down /= Final;
  Up /= Final;

  cout<<Up<<" "<<Down<<endl;
}