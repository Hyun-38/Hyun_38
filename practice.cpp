#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int diag = 1;
    while (n > diag) { 
        n -= diag;
        diag++;
    }

    int a, b;
    if (diag % 2 == 1) { 
        a = diag - (n - 1);
        b = n;
    } else { 
        a = n;
        b = diag - (n - 1);
    }

    cout << a << "/" << b;
}
