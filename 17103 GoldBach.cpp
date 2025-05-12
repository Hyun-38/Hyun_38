#include <iostream>
#include <vector>

using namespace std;

vector<bool> sieve(int n) { 
    vector<bool> isPrime(n + 1, true); 
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {  
        if (isPrime[i]) { 
            for (int j = i * i; j <= n; j += i) { 
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            primes.push_back(i);
    }

    return isPrime;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<bool> isPrime = sieve(1000000);

    int num;
    cin >> num;

    while (num--) {
        int target;
        cin >> target;
        int count = 0;    

        for (int i = 2; i <= target / 2; i++) {
            if (isPrime[i] && isPrime[target - i])
                count++;
        }

        cout << count << '\n';
    }

    return 0;
}
