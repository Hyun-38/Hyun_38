#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, left, right;
  int arr[101][101] = {0,};
  cin >> n;


  for (int i = 0; i < n; i++){
    cin >> left >> right;
    for (int i = 0; i < 10; i++){
      for (int j = 0; j < 10; j++){
        arr[left + i][right + j] = 1;
      }
    }
  }    
  int num = 0;
  
  for (int i = 0; i < 101; i++){
    for (int j = 0; j < 101; j++){
      num += arr[i][j];
     }
    }
  cout << num;
}