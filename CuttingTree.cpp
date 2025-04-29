#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long m;
    cin >> n >> m;

    vector<long long> trees(n);
    for (int i = 0; i < n; ++i)
        cin >> trees[i];

    long long low = 0;
    sort(trees.begin(), trees.end());
    long long high = trees[n-1];
    long long result = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long total = 0;

        for (int i = 0; i < n; ++i) {
            if (trees[i] > mid)
                total += trees[i] - mid;
        }

        if (total >= m) {
            result = mid;     
            low = mid + 1;
        } 
        else {
            high = mid - 1;    
        }
    }

    cout << result;
}
