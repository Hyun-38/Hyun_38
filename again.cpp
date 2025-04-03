#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

  string s;
  cin >> s;

  int cnt = 0;

  for (int i = 0; i < s.length(); i++)
  {
    int num = s[i] - '0';
    if(num == 1){
      cnt++;
    }
    else if(num == 0)
      continue;
    else{
      while(num != 1){
        num--;
        cnt++;
      }
    }
  }
  cout << cnt;
} 