#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(5)); // 학생 n명, 5년의 반 정보

    // 반 정보 입력 받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> v[i][j];
        }
    }

    int maxCount = 0, leader = 0;

    // 각 학생에 대해
    for (int i = 0; i < n; i++) {
        int count = 0;
        vector<bool> checked(n, false); // 중복 카운트 방지용

        // 다른 학생들과 비교
        for (int j = 0; j < n; j++) {
            if (i == j) continue; // 자기 자신은 제외

            // 5년 동안 한 반이라도 같은 학생을 찾기
            for (int k = 0; k < 5; k++) {
                if (v[i][k] == v[j][k]) {
                    if (!checked[j]) { // 아직 카운트하지 않은 학생이라면
                        count++;
                        checked[j] = true; // 해당 학생은 카운트했으므로 체크
                    }
                    break; // 한 반이라도 같으면 그 학생은 카운트
                }
            }
        }

        // 가장 많은 같은 반을 경험한 학생 찾기
        if (count > maxCount) {
            maxCount = count;
            leader = i + 1; // 1번부터 시작하므로 +1
        }
    }

    cout << leader << endl; // 반장 출력
    return 0;
}
