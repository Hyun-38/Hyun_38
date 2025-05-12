#include <iostream>
#include <set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<int> A, B;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A.insert(x);
    }

    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        B.insert(x);
    }

    int count = 0;
    for (int x : A) {
        if (B.find(x) == B.end())
            count++;
    }

    for (int x : B) {
        if (A.find(x) == A.end())
            count++;
    }

    cout << count << "\n";
}
