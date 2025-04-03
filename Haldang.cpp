#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> v;
    
    int start, end;
    for (int i = 0; i < n; i++) {
        cin >> start >> end;
        v.push_back({end, start});
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });

    int time = v[0].first;
    int cnt = 1;

    for (int i = 1; i < n; i++) {
        if (time <= v[i].second) {
            cnt++;
            time = v[i].first;
        }
    }

    cout << cnt;
}
