#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int arr[1001];
  int a;
  cin >> a;

  arr[1] = 1;
  arr[2] = 3;

  for (int i = 3; i <= a; i++){
    arr[i] = arr[i - 1] + arr[i - 2] * 2;
    arr[i] = arr[i] % 10007;
  }
  cout << arr[a];
} 