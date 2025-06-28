#include <iostream>
using namespace std;

void MakeNum() {
  int a, b;
  cin >> a >> b;
  int arr[5];
  arr[0] = a % 10;
  a %= 10;

  for (int i = 1; i < 5; i++) {
    arr[i] = (arr[i-1] * a) % 10;
  }

  if (a == 1 || a == 5 || a == 6) {
    cout << a << "\n";
  } 
  else if (a == 4 || a == 9) {
    int result = (b % 2 == 1) ? arr[0] : arr[1];
    cout << (result == 0 ? 10 : result) << "\n";
  } 
  else {
    int result = (b % 4 == 0) ? arr[3] : arr[b % 4 - 1];
    cout << (result == 0 ? 10 : result) << "\n";
  }
}

int main() {
  int num;
  cin >> num;
  for (int i = 0; i < num; i++) {
    MakeNum();
  }
  return 0;
}
