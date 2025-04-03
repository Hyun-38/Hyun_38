#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

unsigned long long int N, P, Q;
map<unsigned long long int, unsigned long long int> m;

unsigned long long DP(unsigned long long int a){
  if (a == 0)
    return 1;
  if(m.find(a) != m.end())
    return m[a];
  long long res = DP(a / P) + DP(a / Q);

  m.insert({a, res});
  return res;
}

int main(){

  cin >> N >> P >> Q;
  cout << DP(N);
}