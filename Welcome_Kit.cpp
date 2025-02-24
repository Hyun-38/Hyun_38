#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double S, M, L, XL, XXL, XXXL;
  long long T, P, N, cnt = 0;
  cin >> N;
  cin >> S >> M >> L >> XL >> XXL >> XXXL;
  cin >> T >> P;

  cnt += ceil(S / T) + ceil(M / T) + ceil(L / T) + ceil(XL / T) + ceil(XXL / T) + ceil(XXXL / T);
  long long num1 = N / P;
  long long num2 = N % P;
  cout << cnt << "\n"
       << num1 << " " << num2 << "\n";
}