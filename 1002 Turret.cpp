#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int num;
  cin >> num;

  int x1, y1, x2, y2, d1, d2;
  for (int i = 0; i < num; i++)
  {
    cin >> x1 >> y1 >> d1 >> x2 >> y2 >> d2;

    double dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    int min_range = abs(d2 - d1);
    int wide_range = d1 + d2;

    if (dis == 0){
      if(d1 == d2)  cout << "-1\n";
      else  cout << "0\n";
    }
      else if(abs(dis - wide_range) < 1e-6 || abs(dis-min_range) < 1e-6)  cout << "1\n";
      else if(min_range < dis && dis < wide_range) cout<<"2\n";
      else cout<<"0\n";
    }
}