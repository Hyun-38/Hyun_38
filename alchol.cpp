#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){
  int C, L, cnt = 0;
  int num, p = 0;
  stack<int> st;

  for (int i = 0; i < C; i++){
    cin >> num;
    st.push(num);
  }

  for (int i = 0; i <= v.size() - L; i++){
    for (int j = i; j < L; j++){
      p += v[j];
    }
      if (p >= 129 && p <= 138)
        cnt++;
  }
  cout << cnt;
}