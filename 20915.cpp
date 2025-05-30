#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;

    while (num--) {
        string s;
        cin >> s;

        vector<int> v;
        for (char c : s) {
            if (c == '6') v.push_back(9);
            else v.push_back(c - '0');
        }

        sort(v.begin(), v.end(), greater<>());

        int n = v.size();
        long long maxProduct = 0;
        int total = pow(2, n);

        for (int newnum = 1; newnum < total - 1; newnum++) {
            string a = "", b = "";

            int tmp = newnum;
            for (int i = 0; i < n; i++) {
                if (tmp % 2 == 1) a += (v[i] + '0');
                else b += (v[i] + '0');
                tmp /= 2;
            }

            long long x = stoll(a);
            long long y = stoll(b);
            maxProduct = max(maxProduct, x * y);
        }

        cout << maxProduct << "\n";
      }
}
