#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  int cnt = 0;
  string s;
  map<string, int> M;
  vector<int> v;
  v.resize(n, 0);

  for (int i = 0; i < n; i++)
  {
    string car;
    cin >> car;
    M[car] = i;
    }
    
    for (int i = 0; i < n; i++) {
      string car; 
      cin >> car;
      v[i] = M[car];
    }
    
    for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] > v[j])
                {
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt;
}
