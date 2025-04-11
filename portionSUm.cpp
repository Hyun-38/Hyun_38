#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int a, b;
  cin >> a >> b;

  vector<int> v(a);
  vector<int> sum(a + 1);
  for (int i = 0; i < a; i++) cin >> v[i];
  sum[1] = v[0];

  for (int i = 2; i <= a; i++)
  {
    sum[i] = sum[i - 1] + v[i - 1];
  }

  int ans = a + 1;
  for (int i = 1; i <= a; i++) {
    int target = b + sum[i - 1];
    auto it = lower_bound(sum.begin(), sum.end(), target);
    // lower_bound 함수 : lower_bound(처음 , 끝 , 목표) 설정하면 정렬된 배열에서 값 이상이 처음 나오는 위치를 찾는 함수
    // sum[i] >= target 인 가장 작은 i 를 반환해 준다!!
    // auto : 타입을 자동 추론한 뒤 자료형을 추론!
    if (it != sum.end()) { // target 이상인 값을 찾았다면 실행행
      int j = it - sum.begin(); // it 을 인덱스로 바꾸는 코드 : 최초 인덱스 반환
      ans = min(ans, j - (i - 1)); // 현재 구간의 길이를 계산하는 코드
    }
  }

  if (ans == a + 1) cout << 0;
  else cout << ans;
}
//현재 시작점(i)에서 시작해서, 합이 b 이상이 되는 가장 가까운 끝점(j)을 찾았으면, 그 구간 길이(j - (i - 1))를 최소값으로 갱신