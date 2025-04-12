#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> v1(a + 1), v2(a + 1);
    for (int i = 1; i <= a; i++) {
        cin >> v1[i] >> v2[i];
    }

    vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));

    for (int i = 1; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            if (j - v1[i] >= 0) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v1[i]] + v2[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[a][b];
    return 0;
}
