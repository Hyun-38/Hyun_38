#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve(int n) { // 에라토스테네스 체에 해당하는 벡터 선언
    vector<bool> isPrime(n + 1, true); // 0 ~ n까지, true 값을 가진 isPrime벡터 선언
    isPrime[0] = isPrime[1] = false; // 0 과 1 은 소수가 아니므로 false

    for (int i = 2; i * i <= n; i++) {  
        if (isPrime[i]) { // isPrime[2] 부터 시작
            for (int j = i * i; j <= n; j += i) { // 2*2 에서 시작해서 2의 배수 삭제 (j += i)
                isPrime[j] = false; // isPrime[j] 의 값을 모두 false 로 변경
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            primes.push_back(i); // 만약 isPrime[i] 값이 true 라면 , 소수이므로 prime 에 추가
    }

    return primes; // 소수가 들어있는 배열인 primes 리턴
}

int main() {
    int n;
    cout << "n 입력: ";
    cin >> n;

    vector<int> primes = sieve(n); 

    cout << "소수 목록:" << endl;
    for (int prime : primes) {
        cout << prime << " ";
    }   
    return 0;
}

