// 소수 찾기 알고리즘 _ 루트n까지 검사 
#include <iostream>

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

    int num, innum, cnt = 0;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> innum;
        if (isPrime(innum)) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}
