#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int cnt = 0;

    string a;
    cin >> a;

    deque<int> dq;

  for (int i = 0; i < a.length(); i++){
    if(a[i] == '1')
      cnt++;
    else{
      dq.push_back(a[i] - '0');
    }
  }
  
  while(!dq.empty()){
    if(dq.front() == 0){
      dq.pop_front();
    }
    else if(dq.back() == 1){
      dq.pop_back();
      cnt += 1;
    }
    else if(dq.back() > 1){
      dq.back() -= 1;
      cnt++;
    }
    else if(dq.back() == 0){
      dq.pop_back();
      cnt += 9;
    }
  }
  cout << cnt;
}
