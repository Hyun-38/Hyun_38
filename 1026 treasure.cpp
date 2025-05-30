#include  <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int num;
  cin >> num;
  vector<int> arrX(num);
  vector<int> arrY(num);
  
  for (int i = 0; i < num; i++){
    cin >> arrX[i];
  }
  for (int i = 0; i < num; i++){
    cin >> arrY[i];
  }
  sort(arrX.begin(), arrX.end());
  sort(arrY.begin(), arrY.end(), greater<>());

  int ans = 0;
  for (int i = 0; i < num; i++){
    ans += (arrX[i] * arrY[i]);
  }
  cout << ans << "\n";
  return 0;
}