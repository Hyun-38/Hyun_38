#include <iostream>

using namespace std;

int main(){
  long long num;
  cin>>num;

  long long cnt = 0;

  for(int i = 0; i < num; i++){
    for(int j = 0; j < num; j++){
      long long num1;
      cin>>num1;
      cnt += num1;
    }
  }

  cout<<cnt<<endl;
}