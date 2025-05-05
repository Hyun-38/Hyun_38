#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> vx;
  vector<int> vy;
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  for (int i = -999; i < 999; i++){
    for (int j = -999; j < 999; j++){
      if(i * a + j * b == c){
        vx.push_back(i);
        vy.push_back(j);
      }
    }
  }
  // 첫 번째 일차방정식의 해들을 구함
  for (int i = 0; i < vx.size(); i++){
      if(vx[i]*d + vy[i] * e == f)
        cout << vx[i] << " " << vy[i] << "\n";
    }
}
/*#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    for (int x = -999; x <= 999; x++) {
        for (int y = -999; y <= 999; y++) {
            if (a * x + b * y == c && d * x + e * y == f) {
                cout << x << " " << y << "\n";
                return 0; // 해를 찾으면 종료
            }
        }
    }
}
*/