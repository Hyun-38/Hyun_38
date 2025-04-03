#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string Change(int a, int b) {
    string res;
    while (a > 0) {
        int r = a % b;
        if (r < 10) 
            res += ('0' + r);
        else 
            res += ('A' + (r - 10));  
        a /= b;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << Change(a, b) << endl;
}
