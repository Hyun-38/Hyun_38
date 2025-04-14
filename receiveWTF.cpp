#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main(){
  int num;
  cin >> num;
  int cnt = 0;
  vector<int> v(num+1);

  for (int i = 1; i <= num; i++)
    cin >> v[i];

  for (int i = 1; i <= num; i++){
    if(v[i] == i){
      cnt++;
      v[i]++;
      if(v[i] > num)
        v[i] -= num;
    }
  }

  cout << cnt << "\n";
  for (int i = 1; i <= num; i++)
    cout << v[i] << " ";
}