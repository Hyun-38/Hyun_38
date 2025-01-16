#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;
vector<int> v;

void factor(int a) {
    if (a <= 0) {
        return;
    }
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            v.push_back(i);
            if(a / i != i)
              v.push_back(a/i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int num;
    cin >> num;

    factor(num);

    int sum = accumulate(v.begin(), v.end(), 0);

    cout << sum * 5 -24 << "\n";
    return 0;
}
