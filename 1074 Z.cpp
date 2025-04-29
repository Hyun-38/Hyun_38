#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

ll ans = 0;

void solve(ll n, ll x, ll y, ll r, ll c) {
    if (n == 0) return;

    ll half = pow(2, n - 1);
    ll quad = half * half;

    if (r < x + half && c < y + half) {   // 1번 사분면 (왼쪽 위)
        solve(n - 1, x, y, r, c);
    }
    else if (r < x + half && c >= y + half) {   // 2번 사분면 (오른쪽 위)
        ans += quad;
        solve(n - 1, x, y + half, r, c);
    }
    else if (r >= x + half && c < y + half) {   // 3번 사분면 (왼쪽 아래)
        ans += quad * 2;
        solve(n - 1, x + half, y, r, c);
    }
    else {    // 4번 사분면 (오른쪽 아래)
        ans += quad * 3;
        solve(n - 1, x + half, y + half, r, c);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, r, c;
    cin >> n >> r >> c;

    solve(n, 0, 0, r, c);
    cout << ans << '\n';

    return 0;
}
