#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;

  int a, b;
  cin >> a >> b;

  for (int i = 1; i <= a; i++){
    if(a % i == 0)
      v.push_back(i);
  }
  if(v.size() >= b)
    cout << v[b - 1];
  else
    cout << "0";
}