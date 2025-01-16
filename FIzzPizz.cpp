#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n < 2) 
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int cnt = 0;
    int num1, num2;
    cin >> num1 >> num2;

    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            cnt += i;
            v.push_back(i);
        }
    }

    if (cnt == 0) {
        cout << "-1";
    } else {
        cout << cnt << "\n" << v[0];
    }
    
    return 0;
}
