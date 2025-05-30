#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int num;
  cin >> num;
  int maxnum = -999999;

  while(num--){
    int n;
    cin >> n;
    int dp[n + 1];
    int arr[n + 1];

    dp[0] = 0;

    for (int i = 1; i <= n; i++){
      cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
      dp[i] = max(dp[i - 1] + arr[i], arr[i]);
      maxnum = max(maxnum, dp[i]);
    }
    cout << maxnum << "\n";
    maxnum = -999999;
  }  
}