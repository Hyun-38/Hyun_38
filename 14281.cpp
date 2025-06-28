#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

void func1(){
  int ans = 0;
  for (int i = 0; i < v.size(); i++){
    while (true){
      if (v[i] + v[i + 2] < v[i + 1])
      {
        v[i + 1]--;
        ans++;
        continue;
      }
    }
}
  cout << ans << "\n";
}

int main(){
  int num;
  cin >> num;
  int x;
  for (int i = 0; i < num; i++){
    cin >> x;
    v.push_back(x);
  }
  func1();
}