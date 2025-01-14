#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

long long GCD(long long a, long long b) // 최대공약수
{
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}

long long LCM(long long a, long long b) // 최소공배수
{
	return a * b / GCD(a, b);
}

int main(){

  long long a,b;
  cin>>a>>b;
  cout<< LCM(a,b)<<"\n";
}