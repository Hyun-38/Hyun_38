#include <iostream>

using namespace std;

int arr[4] = { 25, 10, 5, 1 };
int res[4];

void HowMany(int n) {
  for (int i = 0; i < 4; i++) {
    res[i] = n / arr[i];
    n %= arr[i];
  }
}

int main() {
  int n, change;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> change;
    for (int j = 0; j < 4; j++) res[j] = 0;
    HowMany(change);

    for (int j = 0; j < 4; j++)
      cout << res[j] << " ";
    cout << endl;
  }
}
