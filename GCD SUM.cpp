#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long GCD(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

int main() {
    int t, n;
    long long n_arr[101] = { 0 };
    long long sum[101] = { 0 };


     cin >> t;

  for (int i = 0; i < t; i++)
  {
      cin >> n;
      for (int j = 0; j < n; j++)
      {
          cin >> n_arr[j];
      }
      for (int k = 0; k < n; k++)
      {
          for (int p = k + 1; p < n; p++)
          {
              sum[i] += GCD(n_arr[k], n_arr[p]);
          }
      }
  }
  for (int i = 0; i < t; i++)
      {
          cout << sum[i]<<"\n";
      }
    return 0;
    }
    


