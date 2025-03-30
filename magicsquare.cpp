#include <iostream>

using namespace std;

int main() {
    int arr[3][3];
    int num = 0, cnt = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
          cnt += arr[i][j];
        }
        if(cnt != 0){
          if(cnt > 15)
            num += cnt - 15;
          else
            num += 15 - cnt;
        }
        cnt = 0;
    }
    
    return 0;
}
