#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;

  for (int i = 0; i < n; i++){
    int num1, num2;
    cin >> num1 >> num2;

    vector<int> v1(num1);
    vector<int> v2(num2);

    for (int j = 0; j < num1; j++){
      cin >> v1[j];
    }
    sort(v1.begin(), v1.end(), greater<>());

    for (int j = 0; j < num2; j++){
      cin >> v2[j];
    }
    sort(v2.begin(), v2.end());
    
     int count = 0;

    for (int a : v1) {
      int smaller = lower_bound(v2.begin(), v2.end(), a) - v2.begin();
      count += smaller;
    }

    cout << count << '\n';
  }
}