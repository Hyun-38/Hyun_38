#include <iostream>
#include <vector>

using namespace std;

int main(){
  int num;
  cin >> num;
  vector<int> v;
  vector<int> v2;

  for(int &a : v) cin >> a;

  for (int i = 0; i < num; i++){
    if(v[i] != 1){
      v2.push_back(v[i]);
    }
  }
}