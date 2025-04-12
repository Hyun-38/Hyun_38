#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int n;
    cin >> s >> n;

    int ans = 0;
    int power = 1;

    for (int i = s.size() - 1; i >= 0; i--) {
        char c = s[i];
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        }

        ans += digit * power;
        power *= n;
    }

    cout << ans << '\n';
    return 0;
}
