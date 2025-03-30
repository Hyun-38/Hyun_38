#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(){
  int N, M, cnt = 0;
  string s;
  cin >> N >> M;

  set<string> s1;
  vector<string> res;

  for (int i = 0; i < N; i++) {
        cin >> s;
        s1.insert(s);
    }

  for (int i = 0; i < M; i++) {
        cin >> s;
        if (s1.find(s) != s1.end()) {
            res.push_back(s);
        }
    }


    sort(res.begin(), res.end());

    cout << res.size() << '\n';
    for (int i = 0; i < res.size(); i++){
      cout << res[i] << endl;
    }

    return 0;
}