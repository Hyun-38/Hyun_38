#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int num = 0;

  while(1){
    cin>>num;
    if(num == -1) break;

    vector<int> factor;
    int perfect = 0;

    for(int i = 1; i < num; i++){
      if(num % i == 0){
        factor.push_back(i);
        perfect+= i;
      }
    }

    if (perfect == num){
      cout<<num<<" = ";
      for(int i = 0; i < factor.size()-1; i++){
        cout<<factor[i]<< " + ";
      }
      cout<<factor[factor.size()-1] <<"\n";
    } else cout<<num<<" is NOT perfect."<<"\n";
  }
}