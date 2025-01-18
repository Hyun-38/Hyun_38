#include <iostream>
using namespace std;

bool isPrime(long long num) 
{
    if (num <= 1) 
        return false; // 1이면 false

    if (num == 2 || num == 3) 
        return true; // 2,3일때는 true ( 소수이므로 )

    if (num % 2 == 0 || num % 3 == 0)
        return false; // ( 2의 배수, 3의 배수 모두 false 반환 )

    for (long long i = 5; i * i <= num; ++i) 
    {
        if (num % i == 0 || num % (i + 2) == 0) 
            return false; 
    }
    // 다음 가장 작은 소수 5이므로 5부터 루트num 까지 돌면서 isPrime 돌리고 , 배수일 경우 false 반환
    return true;
}

int main() 
{
    long long N, n;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        std::cin >> n;
        while (!isPrime(n))
            n++;
        cout << n << endl;
    }
}