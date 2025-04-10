#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += v[i];
    }

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum - v[i - k] + v[i];
        maxSum = max(maxSum, sum);
    }

    cout << maxSum << endl;
    return 0;
}
