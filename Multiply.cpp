#include <iostream>
#include <cmath>

using namespace std;
long long A, B, C, D;
long long Multiple(long long B)
{
  if (B == 0)
    return 1;
  if (B == 1)
    return A % C;
  D = Multiple(B / 2) % C;
  if(B%2 == 0){
    return D * D % C;
  }
  return D * D % C * A % C;
}

int main()
{
  cin >> A >> B >> C;
  cout << Multiple(B);  

  return 0;
}