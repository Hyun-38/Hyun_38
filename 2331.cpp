#include <iostream>
#include <set>
#include <vector>
#include <cmath>

using namespace std;

int getNext(int num, int p) {
    int result = 0;
    while (num > 0) {
        result += pow(num % 10, p);
        num /= 10;
    }
    return result;
}

int main() {
    int N, M;
    cin >> N >> M;

    set<int> S;
    vector<int> v;  

    while (true) {
        if (S.count(N)) break;  
        S.insert(N);
        v.push_back(N);       
        N = getNext(N, M);      
    }

    int count = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == N) break;
        count++;
    }

    cout << count << endl;
    return 0;
}
