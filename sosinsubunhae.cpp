#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  int num;
  cin>>num;
  int num1 = 2;
  while (num != 1){
    if(num % num1 == 0){
      num /= num1;
      cout<<num1<<endl;
    }
    else 
      num1++;
  }
  return 0;
}