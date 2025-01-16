#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        long long num1;
        cin >> num1;

        long long root = sqrt(num1);
        if (root * root == num1) { 
            cout << 1 << ' ';
        } else {
            cout << 0 << ' ';
        }
    }

    return 0;
}
