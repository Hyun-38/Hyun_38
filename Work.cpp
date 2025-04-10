#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long sum = 0;
    for (int i = 0; i < m; i++) {
        sum += v[i];
    }

    long long maxSum = sum;

    for (int i = m; i < n; i++) {
        sum = sum + v[i] - v[i - m];
        if (sum > maxSum) maxSum = sum;
    }

    cout << maxSum;
    return 0;
}
