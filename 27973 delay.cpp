#include <iostream>
using namespace std;

long long A = 1;
long long mul = 1;

void func() {
    int a, b;
    cin >> a;

    if (a == 0) {
      cin >> b;
      A += b;
    }

    else if (a == 1) {
      cin >> b;
      A *= b;
      mul *= b;
    }

    else if (a == 2) {
      cin >> b;
      A += b * mul;
    }

    else if (a == 3) {
        cout << A << "\n";
    }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int num;
  cin >> num;
  while (num--) {
      func();
  }
}
