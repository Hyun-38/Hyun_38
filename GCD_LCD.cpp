#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long GCD(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

int main() {
    string s;
    cin >> s;

    size_t colon_pos = s.find(':');
    int anum = stoi(s.substr(0, colon_pos));
    int bnum = stoi(s.substr(colon_pos + 1));

    long long gcd = GCD(anum, bnum);
    cout << anum / gcd << ":" << bnum / gcd << endl;

    return 0;
}
