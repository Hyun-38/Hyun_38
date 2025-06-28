#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

double Dis(int x1,int y1,int x2,int y2){
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main(){
    int T, x1, y1, x2, y2, cx, cy, r, n;
    cin >> T;
    while(T--){
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> cx >> cy >> r;
            double dis1 = Dis(x1, y1, cx, cy);
            double dis2 = Dis(x2, y2, cx, cy);
            if ((dis1 < r && dis2 >= r) || (dis1 >= r && dis2 < r)) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
