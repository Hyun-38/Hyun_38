#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1024][1024];

int vectorno2(int num, int x, int y){
  if(num == 2){
    vector<int> v;
    v.push_back(arr[x][y]);
    v.push_back(arr[x][y + 1]);
    v.push_back(arr[x + 1][y]);
    v.push_back(arr[x + 1][y + 1]);
    sort(v.begin(), v.end());
    return v[2];
  } 
  else {
    int num1 = num / 2;
    vector<int> v;
    v.push_back(vectorno2(num1, x, y));
    v.push_back(vectorno2(num1, x, y + num1));
    v.push_back(vectorno2(num1, x + num1, y));
    v.push_back(vectorno2(num1, x + num1, y + num1));
    sort(v.begin(), v.end());
    return v[2];
  }
}

int main(){
  int n;
  cin >> n;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> arr[i][j];
    }
  }

  cout << vectorno2(n, 0, 0) << endl;
}
