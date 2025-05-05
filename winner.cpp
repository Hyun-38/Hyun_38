#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int score;
  vector<int> v;
  for (int i = 0; i < a; i++){
    cin >> score;
    v.push_back(score);
  }
  sort(v.begin(), v.end(), greater<>());
  cout << v[b-1]<<"\n";
}
